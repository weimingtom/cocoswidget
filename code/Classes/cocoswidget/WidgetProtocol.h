﻿#ifndef __CCWIDGET_WIDGETPROTOCOL_H__
#define __CCWIDGET_WIDGETPROTOCOL_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"

#define CC_WIDGET_LONGPRESS_TIME 0.5f
#define CC_WIDGET_NONE_EXCLUSION -1

NS_CC_WIDGET_BEGIN

typedef void (CCObject::*SEL_ClickHandler)(CCObject *pSender);
typedef bool (CCObject::*SEL_LongClickHandler)(CCObject* pSender, CCTouch* pTouch);
typedef void (CCObject::*SEL_AfterLongClickHandler)(CCObject* pSender, CCTouch* pTouch, float fDuration);
typedef void (CCObject::*SEL_CheckHandler)(CCObject *pSender, bool bChecked);
typedef void (CCObject::*SEL_ControlHandler)(CCObject* pSender, float fx, float fy);
typedef void (CCObject::*SEL_ValueChangedHandler)(CCObject* pSender, int nValue);
typedef void (CCObject::*SEL_ProgressEndedHandler)(CCObject* pSender);
typedef void (CCObject::*SEL_ScrollingHandler)(CCObject* pSender);
typedef void (CCObject::*SEL_PageChangedHandler)(CCObject* pSender, unsigned int nPageIdx);
typedef CCObject* (CCObject::*SEL_DataSoucreAdapterHandler)(CCObject* pConvertCell, unsigned int uIdx);



#define ccw_click_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ClickHandler)(&_SELECTOR_)
#define ccw_longclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_LongClickHandler)(&_SELECTOR_)
#define ccw_afterlongclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_AfterLongClickHandler)(&_SELECTOR_)
#define ccw_check_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_CheckHandler)(&_SELECTOR_)
#define ccw_control_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ControlHandler)(&_SELECTOR_)
#define ccw_valuechanged_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ValueChangedHandler)(&_SELECTOR_)
#define ccw_progressended_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ProgressEndedHandler)(&_SELECTOR_)
#define ccw_scrolling_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ScrollingHandler)(&_SELECTOR_)
#define ccw_pagechanged_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_PageChangedHandler)(&_SELECTOR_)
#define ccw_datasource_adapter_selector(__SELECTOR__) (cocos2d::cocoswidget::SEL_DataSoucreAdapterHandler)(&__SELECTOR__)


class CDataSourceAdapterProtocol
{
public:
	CDataSourceAdapterProtocol();
	virtual void setDataSourceAdapter(CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

protected:
	CCObject* m_pDataSourceAdapterListener;
	SEL_DataSoucreAdapterHandler m_pDataSourceAdapterHandler;
	virtual CCObject* executeDataSourceAdapterHandler(CCObject* pConvertCell, unsigned int uIdx);
};


class CPageChangeableProtocol
{
public:
	CPageChangeableProtocol();
	void setOnPageChangedListener(CCObject* pListener, SEL_PageChangedHandler pHandler);

protected:
	unsigned int m_nPageIndex;
	CCObject* m_pPageChangedListener;
	SEL_PageChangedHandler m_pPageChangedHandler;
	void executePageChangedHandler(CCObject* pSender, unsigned int uPageIdx);
};




class CScrollableProtocol
{
public:
	CScrollableProtocol();
	void setOnScrollingListener(CCObject* pListener, SEL_ScrollingHandler pHandler);

protected:
	CCObject* m_pScrollingListener;
	SEL_ScrollingHandler m_pScrollingHandler;
	void executeScrollingHandler(CCObject* pSender);
};



class CProgressEndedProtocol
{
public:
	CProgressEndedProtocol();
	void setOnProgressEndedListener(CCObject* pListener, SEL_ProgressEndedHandler pHandler);

protected:
	CCObject* m_pProgressEndedListener;
	SEL_ProgressEndedHandler m_pProgressEndedHandler;
	void executeProgressEndedHandler(CCObject* pSender);
};


class CValueChangeableProtocol
{
public:
	CValueChangeableProtocol();
	void setOnValueChangedListener(CCObject* pListener, SEL_ValueChangedHandler pHandler);

protected:
	int m_nValue;
	CCObject* m_pValueChangedListener;
	SEL_ValueChangedHandler m_pValueChangedHandler;
	void executeValueChangedHandler(CCObject* pSender, int nValue);
};


class CClickableProtocol
{
public:
	CClickableProtocol();
	void setOnClickListener(CCObject* pListener, SEL_ClickHandler pHandler);

protected:
	CCObject* m_pClickListener;
	SEL_ClickHandler m_pClickHandler;
	void executeClickHandler(CCObject* pSender);
};



#ifndef CC_WIDGET_LONGCLICK_SCHEDULE
#define CC_WIDGET_LONGCLICK_SCHEDULE(__CHILDE__) \
protected: \
\
void performLongClickUpdate() \
{ \
	schedule(schedule_selector(__CHILDE__::onLongClickUpdate)); \
} \
\
void stopLongClickUpdate() \
{ \
	unschedule(schedule_selector(__CHILDE__::onLongClickUpdate)); \
} \
\
void onLongClickUpdate(float dt) \
{ \
	if( m_bLongClickedUpdate && m_bLongClickEnabled ) \
	{ \
		if( m_fLongClickTimeCounter > CC_WIDGET_LONGPRESS_TIME ) \
		{ \
			CCTouch* pTempTouch = m_pLongClickLastTouch; \
			interruptTouchCascade(pTempTouch, m_fLongClickLastTouchDuration); \
			if( executeLongClickHandler(this, pTempTouch) ) \
			{ \
				setLongClickTouchHandlerWidget(this, pTempTouch->getID()); \
			} \
			m_bLongClickedUpdate = false; \
			stopLongClickUpdate(); \
		} \
		else \
		{ \
			m_fLongClickTimeCounter += dt; \
		} \
	} \
}
#endif //CC_WIDGET_LONGCLICK_SCHEDULE

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHBEGAN
#define CC_WIDGET_LONGCLICK_ONTOUCHBEGAN \
m_pLongClickLastTouch = NULL; \
m_fLongClickTimeCounter = 0.0f; \
if( m_bLongClickEnabled ) \
{ \
	m_pLongClickLastTouch = pTouch; \
	m_fLongClickLastTouchDuration = 0.0f; \
	m_bLongClickedUpdate = true; \
	performLongClickUpdate(); \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHBEGAN

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHMOVED
#define CC_WIDGET_LONGCLICK_ONTOUCHMOVED \
if( m_bLongClickEnabled ) \
{ \
	m_pLongClickLastTouch = pTouch; \
	m_fLongClickLastTouchDuration = fDuration; \
	\
	CCPoint tMovePoint = getParent()->convertToNodeSpace(pTouch->getLocation()); \
	if( !boundingBox().containsPoint(tMovePoint) ) \
	{ \
		m_bLongClickedUpdate = false; \
		stopLongClickUpdate(); \
	} \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHMOVED

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHENDED
#define CC_WIDGET_LONGCLICK_ONTOUCHENDED \
if( m_bLongClickEnabled ) \
{ \
	m_fLongClickTimeCounter = 0.0f; \
	m_pLongClickLastTouch = NULL; \
	m_bLongClickedUpdate = false; \
	stopLongClickUpdate(); \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHENDED

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED
#define CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED \
if( m_bLongClickEnabled ) \
{ \
	m_fLongClickTimeCounter = 0.0f; \
	m_pLongClickLastTouch = NULL; \
	m_bLongClickedUpdate = false; \
	stopLongClickUpdate(); \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED



class CLongClickableProtocol
{
public:
	CLongClickableProtocol();
	void setOnLongClickListener(CCObject* pListener, SEL_LongClickHandler pHandler);

protected:
	CCObject* m_pLongClickListener;
	SEL_LongClickHandler m_pLongClickHandler;
	bool executeLongClickHandler(CCObject* pSender, CCTouch* pTouch);

protected:
	bool m_bLongClickedUpdate;
	float m_fLongClickTimeCounter;
	bool m_bLongClickEnabled;

	float m_fLongClickLastTouchDuration;
	CCTouch* m_pLongClickLastTouch;
};


class CCheckableProtocol
{
public:
	CCheckableProtocol();
	virtual void setChecked(bool bChecked);
	bool isChecked() const;
	virtual void setExclusion(int nExclusion);
	int getExclusion() const;
	void setOnCheckListener(CCObject* pListener, SEL_CheckHandler pHandler);

protected:
	virtual void executeCheckHandler(CCObject* pSender, bool bChecked);
	void setUnCheckedForOtherWidgetsByExclusion(CCNode* pParent);

protected:
	bool m_bChecked;
	int  m_nExclusion;

	CCObject* m_pCheckListener;
	SEL_CheckHandler m_pCheckHandler;
};


class CControlableProtocol
{
public:
	CControlableProtocol();
	void setOnControlListener(CCObject* pListener, SEL_ControlHandler pHandler);

protected:
	CCObject* m_pControlListener;
	SEL_ControlHandler m_pControlHandler;
	void executeControlHandler(CCObject* pSender, float cx, float cy);
};

#ifndef CC_WIDGET_UPDATE_BACKGROUND_POS
#define CC_WIDGET_UPDATE_BACKGROUND_POS \
if(m_pBackgroundImage) m_pBackgroundImage->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2))
#endif //CC_WIDGET_UPDATE_BACKGROUND_POS

#ifndef CC_WIDGET_BACKGROUND
#define CC_WIDGET_BACKGROUND \
public: \
	void setBackgroundImage(const char* pFile) \
	{ \
		CCAssert(pFile && strlen(pFile), "pFile nil"); \
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile); \
		setBackgroundTexture(pTexture); \
	} \
	\
	void setBackgroundTexture(CCTexture2D* pTexture) \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			CCRect rect; \
			rect.origin = CCPointZero; \
			rect.size = pTexture->getContentSize(); \
			\
			m_pBackgroundImage->setTexture(pTexture); \
			m_pBackgroundImage->setTextureRect(rect); \
		} \
		else \
		{ \
			m_pBackgroundImage = CCSprite::createWithTexture(pTexture); \
			m_pBackgroundImage->setZOrder(-128); \
			addChild(m_pBackgroundImage); \
		} \
		m_pBackgroundImage->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
	} \
	\
	void setBackgroundSpriteFrame(CCSpriteFrame* pSpriteFrame) \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			m_pBackgroundImage->setDisplayFrame(pSpriteFrame); \
		} \
		else \
		{ \
			m_pBackgroundImage = CCSprite::createWithSpriteFrame(pSpriteFrame); \
			m_pBackgroundImage->setZOrder(-128); \
			addChild(m_pBackgroundImage); \
		} \
		m_pBackgroundImage->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
	} \
	\
	void setBackgroundSpriteFrameName(const char* pFrameName) \
	{ \
		CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pFrameName); \
		return setBackgroundSpriteFrame(pFrame); \
	} \
	\
	CCSprite* getBackgroundImage() const \
	{ \
		return m_pBackgroundImage; \
	} \
	\
	void removeBackgroundImage() \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			removeChild(m_pBackgroundImage); \
		} \
	} \
	\
protected: \
	CCSprite* m_pBackgroundImage; \

#endif //CC_WIDGET_BACKGROUND


NS_CC_WIDGET_END

#endif //__CCWIDGET_EVENT_MACROS_H__