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
#ifndef __CCWIDGET_GRIDPAGEVIEW_H__
#define __CCWIDGET_GRIDPAGEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// Update : [1] changed text "SEL_TableGridViewDataSourceHandler" to 
///              "SEL_TableGridViewDataSourceHandler"
/// Update : [2] changed text "tablegirddatasource_selector" to
///              "tablegirdviewdatasource_selector"
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "TableView.h"
#include "WidgetProtocol.h"
#include <vector>

NS_CC_WIDGET_BEGIN

class CGridPageView;
class CGridPageViewCell;
class CGridPageViewPage;

class CGridPageViewPage : public CTableViewCell
{
public:
	CGridPageViewPage();
	virtual ~CGridPageViewPage();
	CCArray* getGirdCells();

protected:
	/// 网格列表项的集合
	CCArray* m_pGirdCells;
};

/**
 * 类名 : CGridPageViewCell
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 网格列表项
 */
class CGridPageViewCell : public CTableViewCell
{
public:
	CGridPageViewCell();
	virtual ~CGridPageViewCell();
};

/**
 * 类名 : CGridPageView
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 网格列表控件
 */
class CGridPageView : public CTableView, public CPageChangeableProtocol
{
public:
	CGridPageView();
	virtual ~CGridPageView();

	static CGridPageView* create(const CCSize& tViewSize);
	static CGridPageView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

public:
	void setCountOfCell(unsigned int uCellsCount);
    unsigned int getCountOfCell() const;
    void setSizeOfCell(const CCSize& tCellsSize);
    const CCSize& getSizeOfCell() const;
	void setRows(unsigned int uRows);
	unsigned int getRows() const;
	void setColumns(unsigned int uColumns);
	unsigned int getColumns() const;
	void reloadData();

protected:
	virtual void onScrolling();
	void updateGridCellsPosition();
	void updatePageCount();
	virtual void updateCellAtIndex(unsigned int idx);

protected:
	CCSize m_tGridCellsSize;
	unsigned int m_uGridCellsCount;
	unsigned int m_uColumns;
	unsigned int m_uRows;
	unsigned int m_uCellsMaxCountInPage;

	std::vector<CCPoint> m_vGridCellsPosition;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_GRIDPAGEVIEW_H__