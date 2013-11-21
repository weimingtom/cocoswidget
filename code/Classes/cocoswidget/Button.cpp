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
#include "Button.h"

NS_CC_WIDGET_BEGIN

#define CC_CENTER_POS(__SIZE__) CCPoint(__SIZE__.width / 2, __SIZE__.height / 2)
#define CC_SAFE_SET_VISIBLE(__ITEM__, __VAR__) if( __ITEM__ ) __ITEM__->setVisible(__VAR__)
#define CC_SAFE_REMOVE(__ITEM__) if(__ITEM__) removeChild(__ITEM__)
#define CC_SAFE_REMOVE_9ELSE(__ITEM__) if(__ITEM__ && !(dynamic_cast<CScale9Sprite*>(__ITEM__))) removeChild(__ITEM__)
#define CC_SAFE_REMOVE_9SPRITE(__ITEM__) if(__ITEM__ && dynamic_cast<CScale9Sprite*>(__ITEM__)) removeChild(__ITEM__)
#define CC_IS_9SPRITE(__ITEM__) __ITEM__ && dynamic_cast<CScale9Sprite*>(__ITEM__) ? true : false


CButton::CButton()
: m_pNormalImage(NULL)
, m_pDisabledImage(NULL)
, m_pSelectedImage(NULL)
, m_bScale9Enabled(false)
, m_tTextOffset(CCPointZero)
, m_pLabel(NULL)
{
	setWidgetNode(this);
}

CButton::~CButton()
{
	
}

CButton* CButton::create()
{
	CButton *pRet = new CButton();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CButton* CButton::createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CButton* pRet = new CButton();
	if( pRet && pRet->initWith9Sprite(tSize, pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CButton* CButton::create(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CButton* pRet = new CButton();
	if( pRet && pRet->initWithFile(pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CButton::init()
{
	setContentSize(CCSizeMake(100, 100));
	setPosition(CCPointZero);
	setAnchorPoint(CCPoint(0.5f, 0.5f));
	return CCNode::init();
}

bool CButton::initWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	if( !init() || !pNormal )
	{
		return false;
	}
	setScale9Enabled(true);
	setContentSize(tSize);

	m_pNormalImage = CScale9Sprite::create(pNormal);
	m_pNormalImage->setContentSize(tSize);
	m_pNormalImage->setPosition(CCPoint(tSize.width/2, tSize.height/2));
	addChild(m_pNormalImage);

	if( pSelected && strlen(pSelected) )
	{
		m_pSelectedImage = CScale9Sprite::create(pSelected);
		m_pSelectedImage->setContentSize(tSize);
		m_pSelectedImage->setPosition(CCPoint(tSize.width/2, tSize.height/2));
		m_pSelectedImage->setVisible(false);
		addChild(m_pSelectedImage);
	}

	if( pDisabled && strlen(pDisabled) )
	{
		m_pDisabledImage = CScale9Sprite::create(pDisabled);
		m_pDisabledImage->setContentSize(tSize);
		m_pDisabledImage->setPosition(CCPoint(tSize.width/2, tSize.height/2));
		m_pDisabledImage->setVisible(false);
		addChild(m_pDisabledImage);
	}

	return true;
}

bool CButton::initWithFile(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	if( !init() || !pNormal || strlen(pNormal) == 0 )
	{
		return false;
	}
	setScale9Enabled(false);

	m_pNormalImage = CCSprite::create(pNormal);
	setContentSize(m_pNormalImage->getContentSize());
	m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	addChild(m_pNormalImage);

	if( pSelected && strlen(pSelected) )
	{
		m_pSelectedImage = CCSprite::create(pSelected);
		m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
		m_pSelectedImage->setVisible(false);
		addChild(m_pSelectedImage);
	}

	if( pDisabled && strlen(pDisabled) )
	{
		m_pDisabledImage = CCSprite::create(pDisabled);
		m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
		m_pDisabledImage->setVisible(false);
		addChild(m_pDisabledImage);
	}

	return true;
}

void CButton::updateCascadeTextContentSize()
{
	updateCascadeTextContentSize(CCSizeZero);
}

void CButton::updateCascadeTextContentSize(const CCSize& tOffsetSize)
{
	if( m_bScale9Enabled && m_pLabel )
	{
		const CCSize& tTextSize = m_pLabel->getContentSize();
		const CCSize tConSize = tTextSize + tOffsetSize;
		setContentSize(tConSize);
	}
}

void CButton::setNormalSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pNormalImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pNormalImage;
				pImage->initWithSpriteFrame(pFrame);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCSprite* pImage = (CCSprite*) m_pNormalImage;
				pImage->setDisplayFrame(pFrame);
				setContentSize(pImage->getContentSize());
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pNormalImage = CScale9Sprite::createWithSpriteFrame(pFrame);
				m_pNormalImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pNormalImage = CCSprite::createWithSpriteFrame(pFrame);
				setContentSize(m_pNormalImage->getContentSize());
			}

			m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			addChild(m_pNormalImage);
		}
	}
}

void CButton::setSelectedSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pSelectedImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pSelectedImage;
				pImage->initWithSpriteFrame(pFrame);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCSprite* pImage = (CCSprite*) m_pSelectedImage;
				pImage->setDisplayFrame(pFrame);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pSelectedImage = CScale9Sprite::createWithSpriteFrame(pFrame);
				m_pSelectedImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pSelectedImage = CCSprite::createWithSpriteFrame(pFrame);
			}

			m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pSelectedImage->setVisible(false);
			addChild(m_pSelectedImage);
		}
	}
}

void CButton::setDisabledSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pDisabledImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pDisabledImage;
				pImage->initWithSpriteFrame(pFrame);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCSprite* pImage = (CCSprite*) m_pDisabledImage;
				pImage->setDisplayFrame(pFrame);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pDisabledImage = CScale9Sprite::createWithSpriteFrame(pFrame);
				m_pDisabledImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pDisabledImage = CCSprite::createWithSpriteFrame(pFrame);
			}

			m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pDisabledImage->setVisible(false);
			addChild(m_pDisabledImage);
		}
	}
}

void CButton::setNormalImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		if( m_pNormalImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pNormalImage;
				pImage->initWithFile(pFile);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pNormalImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
				setContentSize(pTexture->getContentSize());
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pNormalImage = CScale9Sprite::create(pFile);
				m_pNormalImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pNormalImage = CCSprite::create(pFile);
				setContentSize(m_pNormalImage->getContentSize());
			}

			m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			addChild(m_pNormalImage);
		}
	}
}

void CButton::setSelectedImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		if( m_pSelectedImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pSelectedImage;
				pImage->initWithFile(pFile);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pSelectedImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pSelectedImage = CScale9Sprite::create(pFile);
				m_pSelectedImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pSelectedImage = CCSprite::create(pFile);
			}

			m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pSelectedImage->setVisible(false);
			addChild(m_pSelectedImage);
		}
	}
}

void CButton::setDisabledTexture(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		if( m_pDisabledImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pDisabledImage;
				pImage->initWithFile(pFile);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pDisabledImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pDisabledImage = CScale9Sprite::create(pFile);
				m_pDisabledImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pDisabledImage = CCSprite::create(pFile);
			}

			m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pDisabledImage->setVisible(false);
			addChild(m_pDisabledImage);
		}
	}
}

void CButton::setNormalTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pNormalImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pNormalImage;
				pImage->setTexture(pTexture);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pNormalImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
				setContentSize(pTexture->getContentSize());
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pNormalImage = CScale9Sprite::createWithTexture(pTexture);
				m_pNormalImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect;
				rect.origin = CCPointZero;
				rect.size = pTexture->getContentSize();
				m_pNormalImage = CCSprite::createWithTexture(pTexture);
				setContentSize(pTexture->getContentSize());
			}

			m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			addChild(m_pNormalImage);
		}
	}
}

void CButton::setSelectedTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pSelectedImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pSelectedImage;
				pImage->setTexture(pTexture);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pSelectedImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pSelectedImage = CScale9Sprite::createWithTexture(pTexture);
				m_pSelectedImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect;
				rect.origin = CCPointZero;
				rect.size = pTexture->getContentSize();
				m_pSelectedImage = CCSprite::createWithTexture(pTexture);
			}

			m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pSelectedImage->setVisible(false);
			addChild(m_pSelectedImage);
		}
	}
}

void CButton::setDisabledTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pDisabledImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pDisabledImage;
				pImage->setTexture(pTexture);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pDisabledImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pDisabledImage = CScale9Sprite::createWithTexture(pTexture);
				m_pDisabledImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect;
				rect.origin = CCPointZero;
				rect.size = pTexture->getContentSize();
				m_pDisabledImage = CCSprite::createWithTexture(pTexture);
			}

			m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pDisabledImage->setVisible(false);
			addChild(m_pDisabledImage);
		}
	}
}

CCNode* CButton::getNormalImage()
{
	return m_pNormalImage;
}

CCNode* CButton::getSelectedImage()
{
	return m_pSelectedImage;
}

CCNode* CButton::getDisabledImage()
{
	return m_pDisabledImage;
}

void CButton::setContentSize(const CCSize& contentSize)
{
	CCNode::setContentSize(contentSize);

	if( m_pNormalImage )
	{
		if( CC_IS_9SPRITE(m_pNormalImage) )
		{
			m_pNormalImage->setContentSize(contentSize);
		}
		m_pNormalImage->setPosition(CC_CENTER_POS(contentSize));
	}

	if( m_pSelectedImage )
	{
		if( CC_IS_9SPRITE(m_pSelectedImage) )
		{
			m_pSelectedImage->setContentSize(contentSize);
		}
		m_pSelectedImage->setPosition(CC_CENTER_POS(contentSize));
	}

	if( m_pDisabledImage )
	{
		if( CC_IS_9SPRITE(m_pDisabledImage) )
		{
			m_pDisabledImage->setContentSize(contentSize);
		}
		m_pDisabledImage->setPosition(CC_CENTER_POS(contentSize));
	}

	if( m_pLabel )
	{
		m_pLabel->setPosition(CC_CENTER_POS(contentSize) + m_tTextOffset);
	}
}

CLabel* CButton::getLabel()
{
	if( !m_pLabel )
	{
		m_pLabel = CLabel::create();
		m_pLabel->setFontSize(25);
		m_pLabel->setPosition(CC_CENTER_POS(m_obContentSize));
		m_pLabel->setZOrder(1);
		addChild(m_pLabel);
	}
	return m_pLabel;
}

bool CButton::isScale9Enabled()
{
	return m_bScale9Enabled;
}

void CButton::setScale9Enabled(bool bEnabled)
{
	if( m_bScale9Enabled != bEnabled )
	{
		if( bEnabled )
		{
			CC_SAFE_REMOVE_9ELSE(m_pNormalImage);
			CC_SAFE_REMOVE_9ELSE(m_pSelectedImage);
			CC_SAFE_REMOVE_9ELSE(m_pDisabledImage);
		}
		else
		{
			CC_SAFE_REMOVE_9SPRITE(m_pNormalImage);
			CC_SAFE_REMOVE_9SPRITE(m_pSelectedImage);
			CC_SAFE_REMOVE_9SPRITE(m_pDisabledImage);
		}
		m_bScale9Enabled = bEnabled;
	}
}

void CButton::setEnabled(bool bEnabled)
{
	if( m_bEnabled != bEnabled )
	{
		m_bEnabled = bEnabled;
		if( bEnabled )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		}
		else
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, true);
		}
	}
}

void CButton::setLabelOffset(const CCPoint& tOffset)
{
	if( m_pLabel )
	{
		m_tTextOffset = tOffset;
		m_pLabel->setPosition(m_pLabel->getPosition() + m_tTextOffset);
	}
	else
	{
		getLabel();
		m_tTextOffset = tOffset;
		m_pLabel->setPosition(m_pLabel->getPosition() + m_tTextOffset);
	}
}

CWidgetTouchModel CButton::onTouchBegan(CCTouch *pTouch)
{
	if( m_pSelectedImage )
	{
		CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
		CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		m_pSelectedImage->setVisible(true);
	}
	return eWidgetTouchTransient;
}

void CButton::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	if( m_pSelectedImage )
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
			m_pSelectedImage->setVisible(true);
		}
		else
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
		}
	}
}

void CButton::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	if( m_pSelectedImage )
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
			executeClick();
		}
		else
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
		}
	}
	else
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			executeClick();
		}
		CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
	}
}

void CButton::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
	CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
}

NS_CC_WIDGET_END