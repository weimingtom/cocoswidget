﻿/****************************************************************************
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
#ifndef __CCWIDGET_LABELBMFONT_H__
#define __CCWIDGET_LABELBMFONT_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * 类名 : CLabelBMFont
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 可接收事件的图形文本
 */
class CLabelBMFont : public CCLabelBMFont
, public CWidget
, public CClickableProtocol
, public CLongClickableProtocol
{
public:
	CLabelBMFont();
	virtual ~CLabelBMFont();

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

    static CLabelBMFont* create(const char *str, const char *fntFile, float width, CCTextAlignment alignment, CCPoint imageOffset);
	static CLabelBMFont* create(const char *str, const char *fntFile, float width, CCTextAlignment alignment);
	static CLabelBMFont* create(const char *str, const char *fntFile, float width);
	static CLabelBMFont* create(const char *str, const char *fntFile);
    static CLabelBMFont* create();

	CC_WIDGET_LONGCLICK_SCHEDULE(CLabelBMFont);
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_LABELBMFONT_H__