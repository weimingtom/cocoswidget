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
#ifndef __CCWIDGET_CHECKBOX_H__
#define __CCWIDGET_CHECKBOX_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Button.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

class CCheckBox : public CCNodeRGBA
, public CWidget
, public CCheckableProtocol
, public CClickableProtocol
, public CLongClickableProtocol
{
public:
	CCheckBox();
	virtual ~CCheckBox();
	virtual bool init();
	static CCheckBox* create();

	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 触摸开始时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 * 输出 : eWidgetTouchTransient
	 */
	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchMoved()
	 * 功能 : 触摸过程移动时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 触摸完成时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchCancelled()
	 * 功能 : 触摸被中断时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : setChecked()
	 * 功能 : 设置是否选中，并执行选中事件
	 * 输入 : bChecked - 是否选中
	 * 输出 : 
	 */
	virtual void setChecked(bool bChecked);

	/**
	 * 名称 : setEnabled()
	 * 功能 : 设置控件是否可用，不可用时不能接收触摸事件
	 * 输入 : bEnabled - 是否可能
	 * 输出 : 
	 */
	virtual void setEnabled(bool bEnabled);

	virtual void setContentSize(const CCSize& tContentSize);

	virtual void setNormalImage(const char* pFile);
	virtual void setNormalPressImage(const char* pFile);
	virtual void setCheckedImage(const char* pFile);
	virtual void setCheckedPressImage(const char* pFile);
	virtual void setDisabledNormalImage(const char* pFile);
	virtual void setDisabledCheckedImage(const char* pFile);

	virtual void setNormalSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setNormalPressSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setCheckedSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setCheckedPressSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setDisabledNormalSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setDisabledCheckedSpriteFrame(CCSpriteFrame* pFrame);

	virtual void setNormalTexture(CCTexture2D *pTexture);
	virtual void setNormalPressTexture(CCTexture2D *pTexture);
	virtual void setCheckedTexture(CCTexture2D *pTexture);
	virtual void setCheckedPressTexture(CCTexture2D *pTexture);
	virtual void setDisabledNormalTexture(CCTexture2D *pTexture);
	virtual void setDisabledCheckedTexture(CCTexture2D *pTexture);

	virtual void setNormalSpriteFrameName(const char* pSpriteName);
	virtual void setNormalPressSpriteFrameName(const char* pSpriteName);
	virtual void setCheckedSpriteFrameName(const char* pSpriteName);
	virtual void setCheckedPressSpriteFrameName(const char* pSpriteName);
	virtual void setDisabledNormalSpriteFrameName(const char* pSpriteName);
	virtual void setDisabledCheckedSpriteFrameName(const char* pSpriteName);

	CC_WIDGET_LONGCLICK_SCHEDULE(CCheckBox);

protected:
	CCSprite* m_pNormal;
	CCSprite* m_pNormalPress;
	CCSprite* m_pChecked;
	CCSprite* m_pCheckedPress;
	CCSprite* m_pDisabledNormal;
	CCSprite* m_pDisabledChecked;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_CHECKBOX_H__