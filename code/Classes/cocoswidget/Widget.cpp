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
#include "Widget.h"
#include "WidgetLayout.h"

NS_CC_WIDGET_BEGIN

#define CCWIDGET_LONGPRESS_TIME 0.5f

CCheckableProtocol::CCheckableProtocol()
: m_bChecked(false)
, m_pCheckListener(NULL)
, m_pCheckHandler(NULL)
, m_nExclusion(-1)
{

}

bool CCheckableProtocol::isChecked()
{
	return m_bChecked;
}

void CCheckableProtocol::setChecked(bool bChecked)
{
	m_bChecked = bChecked;
}

void CCheckableProtocol::setCheckSelector(CCObject* pTarget, SEL_CheckHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pCheckListener = pTarget;
		m_pCheckHandler = pHandler;
	}
}

void CCheckableProtocol::executeCheck(CCObject* pTarget)
{
	if( m_pCheckHandler && m_pCheckListener )
	{
		(m_pCheckListener->*m_pCheckHandler)(pTarget, m_bChecked);
	}
}

void CCheckableProtocol::setExclusion(int nExclusion)
{
	m_nExclusion = nExclusion;
}

int CCheckableProtocol::getExclusion()
{
	return m_nExclusion;
}


CWidget::CWidget()
: m_nId(-1)
, m_pWidgetNode(NULL)
, m_bEnabled(true)
, m_bTouchEnabled(true)
, m_pClickListener(NULL)
, m_pClickHandler(NULL)
, m_pTouchBeganListener(NULL)
, m_pTouchMovedListener(NULL)
, m_pTouchEndedListener(NULL)
, m_pTouchCancelledListener(NULL)
, m_pTouchBeganHandler(NULL)
, m_pTouchMovedHandler(NULL)
, m_pTouchEndedHandler(NULL)
, m_pTouchCancelledHandler(NULL)
, m_bTouchInterrupt(false)
, m_pLongClickListener(NULL)
, m_pLongClickHandler(NULL)
, m_bLongClickEnabled(false)
, m_fLongClickTimeCounter(0.0f)
, m_pLongClickLastTouch(NULL)
, m_fLongClickLastTouchDuration(0.0f)
, m_nUserTag(kCCNodeTagInvalid)
, m_bLongClickedUpdate(false)
, m_pBackgroundNode(NULL)
{
	
}

CWidget::~CWidget()
{
	
}

void CWidget::setWidgetNode(CCNode* pWidgetNode)
{
	m_pWidgetNode = pWidgetNode;
}

int CWidget::getUserTag() const
{
	return m_nUserTag;
}

void CWidget::setUserTag(int nTag)
{
	m_nUserTag = nTag;
}

int CWidget::getId() const
{
	return m_nId;
}

void CWidget::setId(int nId)
{
	m_nId = nId;
}

bool CWidget::isEnabled()
{
	return m_bEnabled;
}

void CWidget::setEnabled(bool bEnabled)
{
	m_bEnabled = bEnabled;
}

bool CWidget::isTouchEnabled()
{
	return m_bTouchEnabled;
}

void CWidget::setTouchEnabled(bool bTouchEnabled)
{
	m_bTouchEnabled = bTouchEnabled;
}

void CWidget::updateWidget(float dt)
{
	if( m_bLongClickedUpdate && m_bLongClickEnabled )
	{
		if( m_fLongClickTimeCounter > CCWIDGET_LONGPRESS_TIME )
		{
			interruptTouchCascade(m_pLongClickLastTouch, m_fLongClickLastTouchDuration);
			if( executeLongClick() )
			{
				setLongClickTouchHandlerWidget(m_pWidgetNode);
			}
			m_bLongClickedUpdate = false;
			stopScheduleUpdate();
		}
		else
		{
			m_fLongClickTimeCounter += dt;
		}
	}
}

//void CWidget::performTouchedUpdate()
//{
//	if( !m_bTouchedUpdate )
//	{
//		m_bTouchedUpdate = true;
//	}
//}
//
//void CWidget::stopTouchedUpdate()
//{
//	if( m_bTouchedUpdate )
//	{
//		m_bTouchedUpdate = false;
//	}
//}

void CWidget::setClickSelector(CCObject *pTarget, SEL_ClickHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pClickListener = pTarget;
		m_pClickHandler = pHandler;
	}
}

void CWidget::executeClick()
{
	if( m_pClickListener && m_pClickHandler )
	{
		(m_pClickListener->*m_pClickHandler)(m_pWidgetNode);
	}
}

void CWidget::setLongClickSelector(CCObject* pTarget, SEL_LongClickHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pLongClickListener = pTarget;
		m_pLongClickHandler = pHandler;
		m_bLongClickEnabled = true;
	}
	else
	{
		m_bLongClickEnabled = false;
	}
}

bool CWidget::executeLongClick()
{
	if( m_pLongClickListener && m_pLongClickHandler )
	{
		return (m_pLongClickListener->*m_pLongClickHandler)(m_pWidgetNode);
	}
	return false;
}

CWidgetTouchModel CWidget::executeTouchBegan(CCTouch *pTouch)
{
	m_pLongClickLastTouch = NULL;
	m_fLongClickTimeCounter = 0.0f;
	m_bTouchInterrupt = false;
    
    if( m_pTouchBeganListener && m_pTouchBeganHandler )
    {
        if( (m_pTouchBeganListener->*m_pTouchBeganHandler)(m_pWidgetNode, pTouch) == eWidgetTouchNone )
        {
			return eWidgetTouchNone;
		}
    }
	
	if( m_bLongClickEnabled )
	{
		m_bLongClickedUpdate = true;
		performScheduleUpdate();
	}

    return this->onTouchBegan(pTouch);
}

void CWidget::executeTouchMoved(CCTouch *pTouch, float fDuration)
{
    if( m_pTouchMovedListener && m_pTouchMovedHandler )
    {
        if( !(m_pTouchMovedListener->*m_pTouchMovedHandler)(m_pWidgetNode, pTouch, fDuration) )
        {
            return;
        }
    }

	if( m_bLongClickEnabled )
	{
		m_pLongClickLastTouch = pTouch;
		m_fLongClickLastTouchDuration = fDuration;

		CCPoint tMovePoint = m_pWidgetNode->getParent()->convertToNodeSpace(pTouch->getLocation());
		if( !m_pWidgetNode->boundingBox().containsPoint(tMovePoint) )
		{
			m_bLongClickedUpdate = false;
			stopScheduleUpdate();
		}
	}

    return this->onTouchMoved(pTouch, fDuration);
}

void CWidget::executeTouchEnded(CCTouch *pTouch, float fDuration)
{
    if( m_pTouchEndedListener && m_pTouchEndedHandler )
    {
        if( !(m_pTouchEndedListener->*m_pTouchEndedHandler)(m_pWidgetNode, pTouch, fDuration) )
        {
            return;
        }
    }

	if( m_bLongClickEnabled )
	{
		m_fLongClickTimeCounter = 0.0f;
		m_pLongClickLastTouch = NULL;
		m_bLongClickedUpdate = false;
		stopScheduleUpdate();
	}

    return this->onTouchEnded(pTouch, fDuration);
}

void CWidget::executeTouchCancelled(CCTouch *pTouch, float fDuration)
{
    if( m_pTouchCancelledListener && m_pTouchCancelledHandler )
    {
        if( !(m_pTouchCancelledListener->*m_pTouchCancelledHandler)(m_pWidgetNode, pTouch, fDuration) )
        {
            return;
        }
    }

	if( m_bLongClickEnabled )
	{
		m_fLongClickTimeCounter = 0.0f;
		m_pLongClickLastTouch = NULL;
		m_bLongClickedUpdate = false;
		stopScheduleUpdate();
	}

    return this->onTouchCancelled(pTouch, fDuration);
}

void CWidget::setTouchBeganSelector(CCObject *pTarget, SEL_TouchBeganHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchBeganListener = pTarget;
        m_pTouchBeganHandler = pHandler;
    }
}

void CWidget::setTouchMovedSelector(CCObject *pTarget, SEL_TouchHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchMovedListener = pTarget;
        m_pTouchMovedHandler = pHandler;
    }
}

void CWidget::setTouchEndedSelector(CCObject *pTarget, SEL_TouchHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchEndedListener = pTarget;
        m_pTouchEndedHandler = pHandler;
    }
}

void CWidget::setTouchCancelledSelector(CCObject *pTarget, SEL_TouchHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchCancelledListener = pTarget;
        m_pTouchCancelledHandler = pHandler;
    }
}

void CWidget::interruptTouch(CCTouch* pTouch, float fDuration)
{
    if( !m_bTouchInterrupt )
    {
        m_bTouchInterrupt = true;
        executeTouchCancelled(pTouch, fDuration);
    }
}

void CWidget::interruptTouchCascade(CCTouch* pTouch, float fDuration)
{
	for(CCNode* pNode = m_pWidgetNode; pNode != NULL; pNode = pNode->getParent())
	{
		CWidget* pWidgetParent = dynamic_cast<CWidget*>(pNode);
		if( pWidgetParent )
		{
			pWidgetParent->interruptTouch(pTouch, fDuration);
		}
	}
}

void CWidget::setLongClickTouchHandlerWidget(CCNode* pWidget)
{
	for(CCNode* pNode = m_pWidgetNode; pNode != NULL; pNode = pNode->getParent())
	{
		CWidgetLayout* pWidgetLayoutParent = dynamic_cast<CWidgetLayout*>(pNode);
		if( pWidgetLayoutParent )
		{
			pWidgetLayoutParent->setLongClickTouchHandlerWidget(pWidget);
			return;
		}
	}
}

bool CWidget::isTouchInterrupted()
{
    return m_bTouchInterrupt;
}

void CWidget::setBackgroundNode(CCNode* pNode)
{
	if( pNode )
	{
		if( m_pBackgroundNode )
		{
			m_pWidgetNode->removeChild(m_pBackgroundNode, true);
		}
		m_pBackgroundNode = pNode;
		m_pBackgroundNode->setAnchorPoint(CCPoint(0.5f, 0.5f));
		updateBackgroundNodePosition();
		m_pWidgetNode->addChild(m_pBackgroundNode, -1);
	}
}

void CWidget::updateBackgroundNodePosition()
{
	if( m_pBackgroundNode )
	{
		m_pBackgroundNode->setPosition(
			m_pWidgetNode->getContentSize().width / 2,
			m_pWidgetNode->getContentSize().height / 2);
	}
}

CCNode* CWidget::getBackgroundNode() const
{
	return m_pBackgroundNode;
}


NS_CC_WIDGET_END