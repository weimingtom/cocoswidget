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
#ifndef __CCWIDGET_BUTTON_H__
#define __CCWIDGET_BUTTON_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1] fix wrong positions after set content size.
/// Update : [1] changed function name "setTextOffset" to "setLabelOffset"
/// Update : [2] changed function name "getTextTTF" to "getLabel"
/// Update : [3] changed field name "m_pText" to "m_pLabel"
/// Update : [4] changed text "9Sprite" to "Scale9" in this whole file
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Scale9Sprite.h"
#include "Label.h"

NS_CC_WIDGET_BEGIN

/**
 * 类名 : CButton
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 按钮控件，可以设置3种状态
 */
class CButton : public CCNode, public CWidget
{
public:
	CButton();
	virtual ~CButton();
	virtual bool init();

	/**
	 * 名称 : setContentSize()
	 * 功能 : 覆盖setContentSize，每次设置大小时，更新内容大小
	 * 输入 : contentSize - 大小
	 * 输出 : 
	 */
	virtual void setContentSize(const CCSize& contentSize);

	/**
	 * 名称 : setEnabled()
	 * 功能 : 设置控件是否可用，切换图片
	 * 输入 : bEnabled - 是否可用
	 * 输出 : 
	 */
	virtual void setEnabled(bool bEnabled);

	/**
	 * 名称 : setLabelOffset()
	 * 功能 : 设置按钮上文字位置的偏移
	 * 输入 : tOffset - 偏移位置
	 * 输出 : 
	 */
	void setLabelOffset(const CCPoint& tOffset);

	/**
	 * 名称 : getLabel()
	 * 功能 : 获取按钮文字对象
	 * 输入 : 
	 * 输出 : 文字对象
	 */
	virtual CLabel* getLabel();

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : is9SpriteEnabled()
	 * 功能 : 获取是否开启了9Patch属性
	 * 输入 : 
	 * 输出 : 是否开启
	 */
	virtual bool isScale9Enabled();

	/**
	 * 名称 : setScale9Enabled()
	 * 功能 : 设置是否开启了9Patch属性
	 * 输入 : bEnabled - 是否开启
	 * 输出 : 
	 */
	virtual void setScale9Enabled(bool bEnabled);

	/**
	 * 名称 : initWith9Sprite()
	 * 功能 : 通过大小和状态图初始化按钮，并开启9Patch选项
	 * 输入 : tSize - 按钮大小
	 *        pNormal - 正常时的图片文件
	 *        pSelected - 选中时的图片文件
	 *        pDisabled - 不可用时的图片文件
	 * 输出 : 是否初始化成功
	 */
	virtual bool initWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled);

	/**
	 * 名称 : initWithFile()
	 * 功能 : 通过图片文件初始化按钮，按钮大小为pNormal图片的大小
	 * 输入 : pNormal - 正常时的图片文件
	 *        pSelected - 选中时的图片文件
	 *        pDisabled - 不可用时的图片文件
	 * 输出 : 是否初始化成功
	 */
	virtual bool initWithFile(const char* pNormal, const char* pSelected, const char* pDisabled);

	/**
	 * 名称 : updateCascadeTextContentSize()
	 * 功能 : 以文字大小改变按钮大小，当按钮文字改变后希望同时改变
	 *        按钮的大小使之能容纳文字时可以调用，只在9宫格按钮适用
	 * 输入 : tOffsetSize - 按钮比文字大多少
	 * 输出 : 
	 */
	virtual void updateCascadeTextContentSize(const CCSize& tOffsetSize);
	virtual void updateCascadeTextContentSize();
	
	virtual void setNormalSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setSelectedSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setDisabledSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setNormalImage(const char* pFile);
	virtual void setSelectedImage(const char* pFile);
	virtual void setDisabledTexture(const char* pFile);
	virtual void setNormalTexture(CCTexture2D *pTexture);
	virtual void setSelectedTexture(CCTexture2D *pTexture);
	virtual void setDisabledTexture(CCTexture2D *pTexture);
	virtual CCNode* getNormalImage();
	virtual CCNode* getSelectedImage();
	virtual CCNode* getDisabledImage();

	static CButton* create();
	static CButton* create(const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);
	static CButton* createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);

	WIDGET_CHILDE_SCHEDULE(CButton);

protected:
	/// 正常状态的图像
	CCNode* m_pNormalImage;
	/// 选中时的图像
	CCNode* m_pSelectedImage;
	/// 不可用时的图像
	CCNode* m_pDisabledImage;
	/// 9Patch属性
	bool m_bScale9Enabled;
	/// 按钮文字
	CLabel* m_pLabel;
	/// 按钮文字的偏移量
	CCPoint m_tTextOffset;
	
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_BUTTON_H__