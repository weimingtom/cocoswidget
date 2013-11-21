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
#ifndef __CCWIDGET_IMAGEVIEW_H__
#define __CCWIDGET_IMAGEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"

NS_CC_WIDGET_BEGIN

/**
 * 类名 : CImageView
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 可接收触摸事件的精灵
 */
class CImageView : public CCSprite, public CWidget
{
public:
	CImageView();

	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 改变返回值为 暂时性处理事件
	 * 输入 : 
	 * 输出 : eWidgetTouchTransient
	 */
	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 触摸结束时调用
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 触摸开始后距现在经过的时间
	 * 输出 : 判断是否执行Click
	 */
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);

	static CImageView* create();
	static CImageView* create(const char *pszFileName);
	static CImageView* create(const char *pszFileName, const CCRect& rect);
	static CImageView* createWithTexture(CCTexture2D *pTexture);
	static CImageView* createWithTexture(CCTexture2D *pTexture, const CCRect& rect);
	static CImageView* createWithSpriteFrame(CCSpriteFrame *pSpriteFrame);
	static CImageView* createWithSpriteFrameName(const char *pszSpriteFrameName);

	WIDGET_CHILDE_SCHEDULE(CImageView);
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_IMAGEVIEW_H__