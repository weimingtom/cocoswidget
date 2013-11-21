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
#ifndef __CCWIDGET_PAGEVIEW_H__
#define __CCWIDGET_PAGEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// Update : [1] changed text "SEL_PageDataSourceHandler" to "SEL_PageViewDataSourceHandler"
/// Update : [2] changed text "SEL_PageChangedHandler" to "SEL_PageViewChangedHandler"
/// Update : [3] changed text "pagedatasource_selector" to "pageviewdatasource_selector"
/// Update : [4] changed text "pagechanged_selector" to "pageviewchanged_selector"
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "TableView.h"

NS_CC_WIDGET_BEGIN

class CPageView;
class CPageViewCell;

/**
 * 名称 : SEL_PageViewDataSourceHandler
 * 功能 : 页控件的页面项的外部回调函数
 * 输入 : pPage - 页控件
 *        nPageIdx - 当前正在处理第几页
 * 输出 : 页面项
 */
typedef CPageViewCell* (CCObject::*SEL_PageViewDataSourceHandler)(CPageView* pPage, unsigned int nPageIdx);

/**
 * 名称 : SEL_PageViewChangedHandler
 * 功能 : 当页码发生变化时的外部处理函数
 * 输入 : pPage - 页控件
 *        nPageIdx - 变化后的页码
 * 输出 : 
 */
typedef void (CCObject::*SEL_PageViewChangedHandler)(CPageView* pPage, unsigned int nPageIndx);

#define pageviewdatasource_selector(__SELECTOR__) (cocos2d::cocoswidget::SEL_PageViewDataSourceHandler)(&__SELECTOR__)
#define pageviewchanged_selector(__SELECTOR__) (cocos2d::cocoswidget::SEL_PageViewChangedHandler)(&__SELECTOR__)

/**
 * 类名 : CPageViewCell
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 网格项定义，继承自列表项
 */
class CPageViewCell : public CTableViewCell
{
public:
	CPageViewCell(){};
};

/**
 * 类名 : CPageView
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 滑动页面控件
 */
class CPageView : public CTableView
{
public:
	CPageView();
	static CPageView* create(const CCSize& tPageSize);
	static CPageView* create(const CCSize& tPageSize, unsigned int uPageCount, CCObject* pTarget, SEL_PageViewDataSourceHandler pDataSourceHandler);

	/**
	 * 名称 : dequeuePage()
	 * 功能 : 弹出一个闲置的页面项
	 * 输入 : 
	 * 输出 : 页面项
	 */
    CPageViewCell* dequeuePage();

	/**
	 * 名称 : reloadData()
	 * 功能 : 覆盖重新加载数据
	 * 输入 : 
	 * 输出 : 
	 */
	void reloadData();

	/**
	 * 名称 : setPageChangedSelector()
	 * 功能 : 设置当页码发生变化时的外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	void setPageChangedSelector(CCObject* pTarget, SEL_PageViewChangedHandler pHandler);

	/**
	 * 名称 : setDataSourceSelector()
	 * 功能 : 设置外部数据处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	void setDataSourceSelector(CCObject* pTarget, SEL_PageViewDataSourceHandler pHandler);

protected:
	/**
	 * 名称 : tableDataSource()
	 * 功能 : 实现父类的外部数据回调
	 * 输入 : pTable - 父类控件
	 *        idx - 当前第几个cell
	 * 输出 : 列表项
	 */
	CTableViewCell* tableDataSource(CTableView* pTable, unsigned int idx);

	/**
	 * 名称 : onScrolling()
	 * 功能 : 当滚动控件滚动时调用
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onScrolling();

	/**
	 * 名称 : executePageChanged()
	 * 功能 : 执行当页码发生变化时的外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	void executePageChanged(CPageView* pPage, unsigned int nPageIndx);

protected:
	/// 当前在第几页
	unsigned int m_nPageIndex;

	CCObject* m_pPageChangedListener;
	CCObject* m_pPageDataSourceListener;
	SEL_PageViewChangedHandler m_pPageChangedHandler;
	SEL_PageViewDataSourceHandler m_pPageDataSourceHandler;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_PAGEVIEW_H__