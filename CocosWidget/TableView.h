/****************************************************************************
Copyright (c) 2013 viva-Lijunlin

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
/// 
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
 * class    : CTableViewCell
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : �б�ؼ���Ԫ��
 */
class CTableViewCell : public CPanel
{
public:
    CTableViewCell();
    virtual ~CTableViewCell();

	// ��ȡ��Ԫ���±�
    unsigned int getIdx() { return m_uIdx; }
	// ���õ�Ԫ���±�
    void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }
	// ��Ԫ�񱻼������״̬��ʱ�����״̬
    virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
	// ��Ԫ���±�
    unsigned int m_uIdx;
};

/**
 * class    : CTableView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : �б�ؼ�
 */
class CTableView : public CScrollView, public CDataSourceAdapterProtocol
{
public:
    CTableView();
    virtual ~CTableView();

	// ���õ�Ԫ������
    void setCountOfCell(unsigned int uCellsCount);
	// ��ȡ��Ԫ������
    unsigned int getCountOfCell() const;
	// ���õ�Ԫ���С
    void setSizeOfCell(const CCSize& tCellsSize);
	// ��ȡ��Ԫ���С
    const CCSize& getSizeOfCell() const;
	// �Ƿ��Զ����뵥Ԫ��
	bool isAutoRelocate() const;
	// �����Զ����뵥Ԫ��
	void setAutoRelocate(bool bAuto);

	// ��ȡ�Զ����뵽��Ԫ��ʱ���ٶ�
	float getAutoRelocateSpeed() const;
	// �����Զ����뵽��Ԫ��ʱ���ٶ�
	void setAutoRelocateSpeed(float fSpeed);

	// ��ȡ��������ʹ�õĵ�Ԫ��
	CCArray* getCells();
	// ͨ���±��ȡ��Ԫ��
	CTableViewCell* cellAtIndex(unsigned int idx);
	// ����һ�����еĵ�Ԫ��
    CTableViewCell* dequeueCell();
	// ���¼�������
	void reloadData();

	// ͨ�����ӷ�Χ��С����Ԫ���С����Ԫ��������������������ʼ��
	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
		
    static CTableView* create(const CCSize& tViewSize);
	static CTableView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
    
protected:
    virtual void onScrolling();
	virtual void onDeaccelerateScrollEnded();
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
