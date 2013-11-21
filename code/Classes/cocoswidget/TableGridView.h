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
#ifndef __CCWIDGET_TABLEGRIDVIEW_H__
#define __CCWIDGET_TABLEGRIDVIEW_H__

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
#include <vector>

NS_CC_WIDGET_BEGIN

class CTableGridView;
class CTableGridViewCell;
class CTableGridViewPage;

/**
 * 名称 : SEL_TableGridViewDataSourceHandler
 * 功能 : 网格列表控件的数据项外部回调函数
 * 输入 : pTableGrid - 调用本函数的控件
 *        pCell - 需要处理的网格列表项
 *        idx - 目前正在处理第几个网格列表项
 * 输出 : 网格列表项
 */
typedef CTableGridViewCell* (CCObject::*SEL_TableGridViewDataSourceHandler)(CTableGridView* pTableGrid, CTableGridViewCell* pCell, unsigned int idx);
#define tablegirdviewdatasource_selector(__SELECTOR__) (cocos2d::cocoswidget::SEL_TableGridViewDataSourceHandler)(&__SELECTOR__)

/**
 * 类名 : CTableGridViewPage
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 继承列表项，实现的网格列表页，用于包含网格列表项
 */
class CTableGridViewPage : public CTableViewCell
{
public:
	CTableGridViewPage();
	virtual ~CTableGridViewPage();

	/**
	 * 名称 : getGirdCells()
	 * 功能 : 获取用于本页内存储网格列表项的集合
	 * 输入 : 
	 * 输出 : 网格列表项的集合
	 */
	CCArray* getGirdCells();

protected:
	/// 网格列表项的集合
	CCArray* m_pGirdCells;
};

/**
 * 类名 : CTableGridViewCell
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 网格列表项
 */
class CTableGridViewCell : public CTableViewCell
{
public:
	CTableGridViewCell();
	virtual ~CTableGridViewCell();
};

/**
 * 类名 : CTableGridView
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 网格列表控件
 */
class CTableGridView : public CTableView
{
public:
	CTableGridView();
	virtual ~CTableGridView();

	static CTableGridView* create(const CCSize& tViewSize);
	static CTableGridView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pTarget, SEL_TableGridViewDataSourceHandler pDataSourceHandler);

public:
	/**
	 * 名称 : setCountOfCell()
	 * 功能 : 设置网格列表项的数量 需要reloadData生效
	 * 输入 : uCellsCount - 数量
	 * 输出 : 
	 */
	void setCountOfCell(unsigned int uCellsCount);

	/**
	 * 名称 : getCountOfCell()
	 * 功能 : 获取网格列表项的数量 需要reloadData生效
	 * 输入 : 
	 * 输出 : 数量
	 */
    unsigned int getCountOfCell() const;

	/**
	 * 名称 : setSizeOfCell()
	 * 功能 : 设置网格列表项的大小 需要reloadData生效
	 * 输入 : tCellsSize - 网格列表项的大小
	 * 输出 : 
	 */
    void setSizeOfCell(const CCSize& tCellsSize);

	/**
	 * 名称 : getSizeOfCell()
	 * 功能 : 获取网格列表项的大小 需要reloadData生效
	 * 输入 : 
	 * 输出 : 网格列表项的大小
	 */
    const CCSize& getSizeOfCell() const;

	/**
	 * 名称 : setRows()
	 * 功能 : 设置在每一个网格列表页中，最多容纳多少行网格列表项
	 * 输入 : uRows - 行数
	 * 输出 : 
	 */
	void setRows(unsigned int uRows);

	/**
	 * 名称 : getRows()
	 * 功能 : 获取在每一个网格列表页中，最多容纳多少行网格列表项
	 * 输入 : 
	 * 输出 : 行数
	 */
	unsigned int getRows() const;

	/**
	 * 名称 : setColumns()
	 * 功能 : 设置在每一个网格列表页中，最多容纳多少列网格列表项
	 * 输入 : uColumns - 列数
	 * 输出 : 
	 */
	void setColumns(unsigned int uColumns);

	/**
	 * 名称 : getColumns()
	 * 功能 : 设置在每一个网格列表页中，最多容纳多少列网格列表项
	 * 输入 : 
	 * 输出 : 列数
	 */
	unsigned int getColumns() const;

	/**
	 * 名称 : setDataSourceSelector()
	 * 功能 : 设置网格列表的外部数据处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	void setDataSourceSelector(CCObject* pTarget, SEL_TableGridViewDataSourceHandler pHandler);

	/**
	 * 名称 : reloadData()
	 * 功能 : 重新加载数据
	 * 输入 : 
	 * 输出 : 
	 */
	void reloadData();

protected:
	void updateGridCellsPosition();
	void updatePageCount();
	CTableGridViewCell* executeDataSource(CTableGridView* pTableGrid, CTableGridViewCell* pCell, unsigned int idx);
	CTableViewCell* tableDataSource(CTableView* pTable, unsigned int page);

protected:
	CCSize m_tGridCellsSize;
	unsigned int m_uGridCellsCount;
	unsigned int m_uColumns;
	unsigned int m_uRows;
	unsigned int m_uCellsMaxCountInPage;

	std::vector<CCPoint> m_vGridCellsPosition;
		
	SEL_TableGridViewDataSourceHandler m_pTableGridDataSourceHandler;
	CCObject* m_pTableGridDataSourceListener;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_TABLEGRIDVIEW_H__