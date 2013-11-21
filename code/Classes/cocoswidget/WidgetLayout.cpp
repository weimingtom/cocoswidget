/****************************************************************************
Copyright (c) 2013 viva

Created by Li JunLin on 2013

csdn_viva@foxmail.com
http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include "WidgetLayout.h"

NS_CC_WIDGET_BEGIN

CWidgetLayout::CWidgetLayout()
: m_bIsTouched(false)
, m_nTouchPriority(0)
, m_bTouchEnabled(true)
, m_pSelectedWidget(NULL)
, m_fTouchedDuration(0.0f)
, m_pTouchMovedAfterLongClickListener(NULL)
, m_pTouchEndedAfterLongClickListener(NULL)
, m_pTouchCancelledAfterLongClickListener(NULL)
, m_pTouchMovedAfterLongClickHandler(NULL)
, m_pTouchEndedAfterLongClickHandler(NULL)
, m_pTouchCancelledAfterLongClickHandler(NULL)
, m_pLongClickedWidget(NULL)
{

}

CWidgetLayout::~CWidgetLayout()
{
	
}

int CWidgetLayout::getTouchPriority()
{
	return m_nTouchPriority;
}

CCObject* CWidgetLayout::findViewById(int id)
{
	if( id != -1 )
	{
		return find(m_pChildren, id);
	}
	return NULL;
}

CCObject* CWidgetLayout::find(CCArray* pChidren, int id)
{
	if( pChidren && pChidren->count() > 0 )
	{
		unsigned int nCount = pChidren->count();
		for( unsigned int i = 0; i < nCount; ++i )
		{
			CCObject* pObject = pChidren->objectAtIndex(i);
			CWidget* pWidget = dynamic_cast<CWidget*>(pObject);
			if( pWidget )
			{
				if( pWidget->getId() == id )
				{
					return dynamic_cast<CCNode*>(pObject);
				}
				else
				{
					CCObject* pRet = find(dynamic_cast<CCNode*>(pObject)->getChildren(), id);
					if( pRet )
					{
						return pRet;
					}
				}
			}
		}
	}
	return NULL;
}

void CWidgetLayout::setLongClickTouchHandlerWidget(CCNode* pWidget)
{
	m_pLongClickedWidget = pWidget;
}

void CWidgetLayout::setTouchMovedAfterLongClickSelector(CCObject *pTarget, SEL_AfterLongClickHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchMovedAfterLongClickListener = pTarget;
        m_pTouchMovedAfterLongClickHandler = pHandler;
    }
}

void CWidgetLayout::setTouchEndedAfterLongClickSelector(CCObject *pTarget, SEL_AfterLongClickHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchEndedAfterLongClickListener = pTarget;
        m_pTouchEndedAfterLongClickHandler = pHandler;
    }
}

void CWidgetLayout::setTouchCancelledAfterLongClickSelector(CCObject *pTarget, SEL_AfterLongClickHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchCancelledAfterLongClickListener = pTarget;
        m_pTouchCancelledAfterLongClickHandler = pHandler;
    }
}

void CWidgetLayout::executeTouchMovedAfterLongClick(CCObject* pSender, CCTouch *pTouch, float fDuration)
{
    if( m_pTouchMovedAfterLongClickListener && m_pTouchMovedAfterLongClickHandler )
    {
        (m_pTouchMovedAfterLongClickListener->*m_pTouchMovedAfterLongClickHandler)(pSender, pTouch, fDuration);
    }
}

void CWidgetLayout::executeTouchEndedAfterLongClick(CCObject* pSender, CCTouch *pTouch, float fDuration)
{
    if( m_pTouchEndedAfterLongClickListener && m_pTouchEndedAfterLongClickHandler )
    {
		(m_pTouchEndedAfterLongClickListener->*m_pTouchEndedAfterLongClickHandler)(pSender, pTouch, fDuration);
    }
}

void CWidgetLayout::executeTouchCancelledAfterLongClick(CCObject* pSender, CCTouch *pTouch, float fDuration)
{
    if( m_pTouchCancelledAfterLongClickListener && m_pTouchCancelledAfterLongClickHandler )
    {
		(m_pTouchCancelledAfterLongClickListener->*m_pTouchCancelledAfterLongClickHandler)(pSender, pTouch, fDuration);
    }
}

void CWidgetLayout::setTouchPriority(int nTouchPriority)
{
	if( m_nTouchPriority != nTouchPriority )
	{
		m_nTouchPriority = nTouchPriority;
		if( m_bTouchEnabled )
		{
			CCTouchDispatcher* pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
			pDispatcher->setPriority(nTouchPriority, this);
		}
	}
}

bool CWidgetLayout::isTouchEnabled()
{
	return m_bTouchEnabled;
}

void CWidgetLayout::setTouchEnabled(bool bTouchEnabled)
{
	if( m_bTouchEnabled != bTouchEnabled )
	{
		m_bTouchEnabled = bTouchEnabled;
		if( m_bRunning )
		{
			if( bTouchEnabled )
			{
				CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, m_nTouchPriority, true);
			}
			else
			{
				CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
			}
		}
	}
}

bool CWidgetLayout::init()
{
	if(CCNode::init())
	{
		CCSize tWinSize = CCDirector::sharedDirector()->getWinSize();

		this->ignoreAnchorPointForPosition(true);
		this->setContentSize(tWinSize);
		this->setAnchorPoint(CCPointZero);
		this->setPosition(CCPointZero);

		return true;
	}
	return false;
}

void CWidgetLayout::visit()
{
	if( m_bIsTouched )
	{
		m_fTouchedDuration += CCDirector::sharedDirector()->getDeltaTime();
	}
	CCNode::visit();
}

void CWidgetLayout::onEnter()
{
	if( m_bTouchEnabled )
	{
		CCTouchDispatcher *pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
		pDispatcher->addTargetedDelegate(this, m_nTouchPriority, true);
	}
	CCNode::onEnter();
}

void CWidgetLayout::onExit()
{
	if( m_bTouchEnabled )
	{
		CCTouchDispatcher *pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
		pDispatcher->removeDelegate(this);
	}
	CCNode::onExit();
}

bool CWidgetLayout::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_bTouchEnabled && m_bVisible && m_pChildren && m_pChildren->count() > 0 )
	{
		CCPoint touchPointInView = convertToNodeSpace(pTouch->getLocation());
		CWidget *pTouchWidget = collisionWithWidget(touchPointInView);
		if( pTouchWidget )
		{
			m_pSelectedWidget = pTouchWidget;
			if( m_pSelectedWidget->executeTouchBegan(pTouch) != eWidgetTouchNone )
			{
                m_bIsTouched = true;
                m_fTouchedDuration = 0.0f;
				return true;
			}	
		}
	}
	return false;
}

void CWidgetLayout::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_pSelectedWidget )
	{
		if( m_pSelectedWidget->isTouchInterrupted() )
		{
			if( m_pLongClickedWidget )
			{
				executeTouchMovedAfterLongClick(m_pLongClickedWidget, pTouch, m_fTouchedDuration);
			}
		}
		else
		{
			m_pSelectedWidget->executeTouchMoved(pTouch, m_fTouchedDuration);
		}
	}
}

void CWidgetLayout::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_pSelectedWidget )
	{
		if( m_pSelectedWidget->isTouchInterrupted() )
		{
			if( m_pLongClickedWidget )
			{
				executeTouchEndedAfterLongClick(m_pLongClickedWidget, pTouch, m_fTouchedDuration);
			}
		}
		else
		{
			m_pSelectedWidget->executeTouchEnded(pTouch, m_fTouchedDuration);
		}
	}
	m_bIsTouched = false;
    m_fTouchedDuration = 0.0f;
	m_pSelectedWidget = NULL;
	m_pLongClickedWidget = NULL;
}

void CWidgetLayout::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_pSelectedWidget )
	{
		if( m_pSelectedWidget->isTouchInterrupted() )
		{
			if( m_pLongClickedWidget )
			{
				executeTouchCancelledAfterLongClick(m_pLongClickedWidget, pTouch, m_fTouchedDuration);
			}
		}
		else
		{
			m_pSelectedWidget->interruptTouchCascade(pTouch, m_fTouchedDuration);
		}
	}
	m_bIsTouched = false;
    m_fTouchedDuration = 0.0f;
	m_pSelectedWidget = NULL;
	m_pLongClickedWidget = NULL;
}

CWidget* CWidgetLayout::collisionWithWidget(const CCPoint &tPoint)
{
	if( m_pChildren && m_pChildren->count() > 0 )
	{
		CCObject* pObject = NULL;
		CCARRAY_FOREACH_REVERSE( m_pChildren, pObject )
		{
			CCNode* pNode = dynamic_cast<CCNode*>(pObject);
			CWidget* pWidget = dynamic_cast<CWidget*>(pObject);
			if( pWidget && pNode->isVisible() && pWidget->isEnabled() && pWidget->isTouchEnabled() )
			{
				if( pNode->boundingBox().containsPoint(tPoint) )
				{
					return pWidget;
				}
			}
		}
	}
	return NULL;
}

CWidgetLayout* CWidgetLayout::create()
{
	CWidgetLayout *pRet = new CWidgetLayout();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}


NS_CC_WIDGET_END