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
#include "TableGridView.h"
using namespace std;

NS_CC_WIDGET_BEGIN

#define CTABLEGRIDVIEW_AUTO_RELOCATE_SPPED 900.0f

CTableGridViewPage::CTableGridViewPage()
{
	m_pGirdCells = new CCArray();
	m_pGirdCells->initWithCapacity(20);
}

CTableGridViewPage::~CTableGridViewPage()
{
	CC_SAFE_DELETE(m_pGirdCells);
}

CCArray* CTableGridViewPage::getGirdCells()
{
	return m_pGirdCells;
}

CTableGridViewCell::CTableGridViewCell()
{

}

CTableGridViewCell::~CTableGridViewCell()
{

}

CTableGridView::CTableGridView()
: m_uGridCellsCount(0)
, m_uColumns(0)
, m_uRows(0)
, m_tGridCellsSize(CCSizeZero)
, m_pTableGridDataSourceHandler(NULL)
, m_pTableGridDataSourceListener(NULL)
, m_uCellsMaxCountInPage(0)
{
	m_fAutoRelocateSpeed = CTABLEGRIDVIEW_AUTO_RELOCATE_SPPED;
}

CTableGridView::~CTableGridView()
{

}

CTableGridView* CTableGridView::create(const CCSize& tViewSize)
{
	CTableGridView * pRet = new CTableGridView();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CTableGridView* CTableGridView::create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pTarget, SEL_TableGridViewDataSourceHandler pDataSourceHandler)
{
	CTableGridView * pRet = new CTableGridView();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->setSizeOfCell(tCellSize);
		pRet->setCountOfCell(uCellCount);
		pRet->setDataSourceSelector(pTarget, pDataSourceHandler);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CTableGridView::setCountOfCell(unsigned int uCellsCount)
{
	m_uGridCellsCount = uCellsCount;
}

unsigned int CTableGridView::getCountOfCell() const
{
	return m_uGridCellsCount;
}

void CTableGridView::setSizeOfCell(const CCSize& tCellsSize)
{
	m_tGridCellsSize = tCellsSize;
	CTableView::setSizeOfCell(m_obContentSize);
}

const CCSize& CTableGridView::getSizeOfCell() const
{
	return m_tGridCellsSize;
}

void CTableGridView::setRows(unsigned int uRows)
{
	m_uRows = uRows;
}

unsigned int CTableGridView::getRows() const
{
	return m_uRows;
}

void CTableGridView::setColumns(unsigned int uColumns)
{
	m_uColumns = uColumns;
}

unsigned int CTableGridView::getColumns() const
{
	return m_uColumns;
}

void CTableGridView::setDataSourceSelector(CCObject* pTarget, SEL_TableGridViewDataSourceHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pTableGridDataSourceListener = pTarget;
		m_pTableGridDataSourceHandler = pHandler;
	}
}

CTableGridViewCell* CTableGridView::executeDataSource(CTableGridView* pTableGrid, CTableGridViewCell* pCell, unsigned int idx)
{
	if( m_pTableGridDataSourceHandler && m_pTableGridDataSourceListener )
	{
		return (m_pTableGridDataSourceListener->*m_pTableGridDataSourceHandler)(pTableGrid, pCell, idx);
	}
	return NULL;
}

void CTableGridView::updateGridCellsPosition()
{
	float x = 0.0f;
	float y = m_obContentSize.height - m_tGridCellsSize.height;

	for(unsigned int i = 0; i < m_uCellsMaxCountInPage; ++i)
	{
		if( i != 0 && i % m_uColumns == 0 )
		{
			x = 0.0f;
			y = y - m_tGridCellsSize.height;
		}
		m_vGridCellsPosition.push_back(CCPoint(x, y));
		x += m_tGridCellsSize.width;
	}
}

void CTableGridView::updatePageCount()
{
	m_uCellsMaxCountInPage = m_uColumns * m_uRows;

	if( m_uGridCellsCount % m_uCellsMaxCountInPage == 0 )
	{
		m_uCellsCount = m_uGridCellsCount / m_uCellsMaxCountInPage;
	}
	else
	{
		m_uCellsCount = m_uGridCellsCount / m_uCellsMaxCountInPage + 1;
	}
}

void CTableGridView::reloadData()
{
	if( m_uColumns == 0 || m_uRows == 0 || m_uGridCellsCount == 0 || m_tGridCellsSize.width == 0 || m_tGridCellsSize.height == 0 )
	{
		return;
	}

	if( !m_pTableGridDataSourceHandler || !m_pTableGridDataSourceListener )
	{
		return;
	}

	CTableView::setDataSourceSelector(this, tableviewdatasource_selector(CTableGridView::tableDataSource));
	this->updatePageCount();
	this->updateGridCellsPosition();
	CTableView::reloadData();
}

CTableViewCell* CTableGridView::tableDataSource(CTableView* pTable, unsigned int page)
{
	CTableGridViewPage* pPageCell = (CTableGridViewPage*)(pTable->dequeueCell());
	if(!pPageCell)
	{
		pPageCell = new CTableGridViewPage();
		pPageCell->autorelease();

		CCArray* pGridCells = pPageCell->getGirdCells();
		unsigned int uBeginIdx = page * m_uCellsMaxCountInPage;
		unsigned int uEndIdx = uBeginIdx + m_uCellsMaxCountInPage;

		for( unsigned int idx = uBeginIdx, i = 0; idx < uEndIdx; ++idx, ++i )
		{
			CTableGridViewCell* pGridCell = NULL;
			if( idx < m_uGridCellsCount )
			{
				pGridCell = executeDataSource(this, NULL, idx);
				pGridCell->setAnchorPoint(CCPointZero);
				pGridCell->setContentSize(m_tGridCellsSize);
				pGridCell->setPosition(m_vGridCellsPosition[i]);
				pGridCell->setIdx(idx);
				pPageCell->addChild(pGridCell);
				pGridCells->addObject(pGridCell);
			}
			else
			{
				pGridCell = executeDataSource(this, NULL, CC_INVALID_INDEX);
				pGridCell->setAnchorPoint(CCPointZero);
				pGridCell->setContentSize(m_tGridCellsSize);
				pGridCell->setPosition(m_vGridCellsPosition[i]);
				pGridCell->setIdx(CC_INVALID_INDEX);
				pGridCell->reset();
				pPageCell->addChild(pGridCell);
				pGridCells->addObject(pGridCell);
			}
		}
	}
	else
	{
		CCArray* pGridCells = pPageCell->getGirdCells();
		unsigned int uBeginIdx = page * m_uCellsMaxCountInPage;
		unsigned int uEndIdx = uBeginIdx + m_uCellsMaxCountInPage;
		
		for( unsigned int idx = uBeginIdx, i = 0; idx < uEndIdx; ++idx, ++i )
		{
			CTableGridViewCell* pGridCell = (CTableGridViewCell*) pGridCells->objectAtIndex(i);
			if( idx < m_uGridCellsCount )
			{
				pGridCell->setIdx(idx);
				pGridCell = executeDataSource(this, pGridCell, idx);
			}
			else
			{
				pGridCell->setIdx(CC_INVALID_INDEX);
				pGridCell->reset();
				pGridCell = executeDataSource(this, pGridCell, CC_INVALID_INDEX);
			}
		}
	}
	return pPageCell;
}

NS_CC_WIDGET_END