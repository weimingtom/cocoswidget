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
#ifndef __CCWIDGET_WIDGET_H__
#define __CCWIDGET_WIDGET_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// Update : update every call type for on long click interface, visit to schedule
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"

NS_CC_WIDGET_BEGIN

class CWidget;

/**
 * 枚举 : CWidgetTouchModel
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : cocoswidget体系中的控件触摸模式
 */


enum CWidgetTouchModel
{
	eWidgetTouchNone,          // 不接收事件
	eWidgetTouchTransient,     // 暂时性接收事件，这个事件可能会被上级控件所中断。
	eWidgetTouchSustained,     // 持续性接收事件，这个事件不会被上级控件中断，只能由本控件自行中断
};

typedef CWidgetTouchModel (CCObject::*SEL_TouchBeganHandler)(CCObject* pSender, CCTouch* pTouch);
typedef bool (CCObject::*SEL_TouchEventHandler)(CCObject *pSender, CCTouch *pTouch, float fDuration);

#define ccw_touchbegan_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TouchBeganHandler)(&_SELECTOR_)
#define ccw_touchevent_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TouchEventHandler)(&_SELECTOR_)

class CWidgetTouchProtocol
{
public:
    virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch) = 0;
    virtual void onTouchMoved(CCTouch* pTouch, float fDuration) = 0;
    virtual void onTouchEnded(CCTouch* pTouch, float fDuration) = 0;
    virtual void onTouchCancelled(CCTouch* pTouch, float fDuration) = 0;
};

class CWidget : public CWidgetTouchProtocol
{
public:
	CWidget();
	virtual ~CWidget();

	int getUserTag() const;
	void setUserTag(int nTag);
	const char* getId();
	void setId(const char* id);

	virtual bool isEnabled();
	virtual void setEnabled(bool bEnabled);
	virtual bool isTouchEnabled();
	virtual void setTouchEnabled(bool bTouchEnabled);

	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch){ return eWidgetTouchNone; }
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration){}
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration){}
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration){}

	virtual CWidgetTouchModel executeTouchBeganHandler(CCTouch* pTouch);
	virtual void executeTouchMovedHandler(CCTouch* pTouch, float fDuration);
	virtual void executeTouchEndedHandler(CCTouch* pTouch, float fDuration);
    virtual void executeTouchCancelledHandler(CCTouch* pTouch, float fDuration);

    virtual void setOnTouchBeganListener(CCObject* pListener, SEL_TouchBeganHandler pHandler);
    virtual void setOnTouchMovedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);
    virtual void setOnTouchEndedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);
    virtual void setOnTouchCancelledListener(CCObject* pListener, SEL_TouchEventHandler pHandler);

	virtual void setLongClickTouchHandlerWidget(CCNode* pWidget, int id);

	virtual void interruptTouchCascade(CCTouch* pTouch, float fDuration);
    virtual void interruptTouch(CCTouch* pTouch, float fDuration);
    virtual bool isTouchInterrupted();

protected:
	void setThisObject(CCObject* pThis);

protected:
	std::string m_strId;
	int m_nUserTag;
	bool m_bEnabled;
	bool m_bTouchEnabled;
    bool m_bTouchInterrupt;

	CCObject* m_pThisObject;
    
    CCObject* m_pTouchBeganListener;
    CCObject* m_pTouchMovedListener;
    CCObject* m_pTouchEndedListener;
    CCObject* m_pTouchCancelledListener;

    SEL_TouchBeganHandler m_pTouchBeganHandler;
    SEL_TouchEventHandler m_pTouchMovedHandler;
    SEL_TouchEventHandler m_pTouchEndedHandler;
    SEL_TouchEventHandler m_pTouchCancelledHandler;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_WIDGET_H__