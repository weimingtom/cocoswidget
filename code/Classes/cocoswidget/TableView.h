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
#ifndef __CCWIDGET_TABLEVIEW_H__
#define __CCWIDGET_TABLEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// Update : [1] changed text "SEL_TableViewDataSourceHandler" to "SEL_TableViewDataSourceHandler"
/// Update : [2] changed text "tabledatasource_selector" to "tableviewdatasource_selector"
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <list>
#include <vector>
#include <set>

NS_CC_WIDGET_BEGIN

class CTableView;
class CTableViewCell;


/**
 * 类名 : CTableViewCell
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 列表项控件，分发事件
 */
class CTableViewCell : public CPanel
{
public:
    CTableViewCell();
    virtual ~CTableViewCell();

	/**
	 * 名称 : getIdx()
	 * 功能 : 获取列表项的下标
	 * 输入 : 
	 * 输出 : 下标
	 */
    unsigned int getIdx() { return m_uIdx; }

	/**
	 * 名称 : setIdx()
	 * 功能 : 设置列表项的下标
	 * 输入 : uIdx - 下标
	 * 输出 : 
	 */
    void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }

	/**
	 * 名称 : reset()
	 * 功能 : 当列表项被加入空闲状态组时，清空状态
	 * 输入 : 
	 * 输出 : 
	 */
    virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
	/// 列表下标
    unsigned int m_uIdx;
};

/**
 * 类名 : CTableView
 * 作者 : Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 列表控件
 */
class CTableView : public CScrollView, public CDataSourceAdapterProtocol
{
public:
    CTableView();
    virtual ~CTableView();

	/**
	 * 名称 : setCountOfCell()
	 * 功能 : 设置列表项的数量 需要reloadData生效
	 * 输入 : uCellsCount - 数量
	 * 输出 : 
	 */
    void setCountOfCell(unsigned int uCellsCount);

	/**
	 * 名称 : getCountOfCell()
	 * 功能 : 获取列表项的数量 需要reloadData生效
	 * 输入 : 
	 * 输出 : 数量
	 */
    unsigned int getCountOfCell() const;

	/**
	 * 名称 : setSizeOfCell()
	 * 功能 : 设置列表项的大小 需要reloadData生效
	 * 输入 : tCellsSize - 列表项的大小
	 * 输出 : 
	 */
    void setSizeOfCell(const CCSize& tCellsSize);

	/**
	 * 名称 : getSizeOfCell()
	 * 功能 : 获取列表项的大小 需要reloadData生效
	 * 输入 : 
	 * 输出 : 列表项的大小
	 */
    const CCSize& getSizeOfCell() const;

	/**
	 * 名称 : isAutoRelocate()
	 * 功能 : 获取是否自动对齐到Cell;
	 * 输入 : 
	 * 输出 : 是否自动对齐
	 */
	bool isAutoRelocate() const;

	/**
	 * 名称 : setAutoRelocate()
	 * 功能 : 设置是否自动对齐到Cell;
	 * 输入 : bAuto - 是否自动对齐
	 * 输出 : 
	 */
	void setAutoRelocate(bool bAuto);

	/**
	 * 名称 : getAutoRelocateSpeed()
	 * 功能 : 获取自动对齐cell时的速度
	 * 输入 : 
	 * 输出 : 自动对齐的速度
	 */
	float getAutoRelocateSpeed() const;

	/**
	 * 名称 : setAutoRelocateSpeed()
	 * 功能 : 设置自动对齐cell时的速度
	 * 输入 : fSpeed - 自动对齐的速度
	 * 输出 : 
	 */
	void setAutoRelocateSpeed(float fSpeed);

	/**
	 * 名称 : initWithParams()
	 * 功能 : 通过参数初始化
	 * 输入 : tViewSize - 可视范围大小
	 *        tCellSize - 每一项的大小
	 *        uCellCount - 总共有多少项
	 *        pTarget - 数据函数处理对象
	 *        pDataSourceHandler - 数据函数
	 * 输出 : 是否初始化成功
	 */
	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
		
    static CTableView* create(const CCSize& tViewSize);
	static CTableView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

public:
	/**
	 * 名称 : getCells()
	 * 功能 : 获取所有列表项
	 * 输入 : 
	 * 输出 : 所有列表项
	 */
	CCArray* getCells();

	/**
	 * 名称 : cellAtIndex()
	 * 功能 : 获取列表项 通过下标，如果这个cell没有被使用，则返回NULL
	 * 输入 : idx - 下标
	 * 输出 : 列表项
	 */
	CTableViewCell* cellAtIndex(unsigned int idx);

	/**
	 * 名称 : dequeueCell()
	 * 功能 : 弹出控件列表项队列头部的列表项
	 * 输入 : 
	 * 输出 : 列表项
	 */
    CTableViewCell* dequeueCell();

	/**
	 * 名称 : reloadData()
	 * 功能 : 重新加载数据
	 * 输入 : 
	 * 输出 : 
	 */
	void reloadData();
    
protected:

	/**
	 * 名称 : onScrolling()
	 * 功能 : 当滚动控件滚动时调用
	 * 输入 : 
	 * 输出 : 
	 */
    virtual void onScrolling();

	/**
	 * 名称 : onDeaccelerateScrollEnded()
	 * 功能 : 当滚动控件减速滚动完成时调用
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onDeaccelerateScrollEnded();

	/**
	 * 名称 : onDeaccelerateScrollEnded()
	 * 功能 : 当滚动控件拖拽滚动完成时调用
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onDraggingScrollEnded();

protected:
	void removeAllFromUsed();
    void removeAllFromFreed();
	void insertSortableCell(CTableViewCell* pCell, unsigned int idx);
	unsigned int cellBeginIndexFromOffset(const CCPoint& offset);
	unsigned int cellEndIndexFromOffset(const CCPoint& offset);
	CCPoint cellPositionFromIndex(unsigned int idx);
	virtual void updateCellAtIndex(unsigned int idx);
	void updatePositions();

protected:
    CCSize m_tCellsSize;
    unsigned int m_uCellsCount;
	bool m_bAutoRelocate;
	float m_fAutoRelocateSpeed;
    
	std::set<unsigned int>* m_pIndices;
	std::vector<float>* m_pPositions;
	std::list<CTableViewCell*>* m_pCellsUsed;
	std::list<CTableViewCell*>* m_pCellsFreed;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_TABLEVIEW_H__
