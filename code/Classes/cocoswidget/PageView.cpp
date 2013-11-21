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
#include "PageView.h"

NS_CC_WIDGET_BEGIN

CPageView::CPageView()
: m_nPageIndex(0)
, m_pPageChangedListener(NULL)
, m_pPageDataSourceListener(NULL)
, m_pPageChangedHandler(NULL)
, m_pPageDataSourceHandler(NULL)
{
	CTableView::setDataSourceSelector(this, tableviewdatasource_selector(CPageView::tableDataSource));
	CTableView::setAutoRelocate(true);
	CTableView::setAutoRelocateSpeed(700.0f);
}

CPageView* CPageView::create(const CCSize& tPageSize)
{
	CPageView * pRet = new CPageView();
	if( pRet && pRet->initWithSize(tPageSize) )
    {
		
		pRet->setSizeOfCell(tPageSize);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CPageView* CPageView::create(const CCSize& tPageSize, unsigned int uPageCount, CCObject* pTarget, SEL_PageViewDataSourceHandler pDataSourceHandler)
{
	CPageView* pRet = new CPageView();
	if( pRet && pRet->initWithParams(tPageSize, tPageSize, uPageCount, pRet, tableviewdatasource_selector(CPageView::tableDataSource)) )
	{
		pRet->setDataSourceSelector(pTarget, pDataSourceHandler);
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CPageView::onScrolling()
{
	CTableView::onScrolling();

	unsigned int nPage = cellBeginIndexFromOffset(getContentOffset());
	if( nPage != m_nPageIndex )
	{
		m_nPageIndex = nPage;
		executePageChanged(this, m_nPageIndex);
	}
}

void CPageView::setPageChangedSelector(CCObject* pTarget, SEL_PageViewChangedHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pPageChangedListener = pTarget;
		m_pPageChangedHandler = pHandler;
	}
}

void CPageView::setDataSourceSelector(CCObject* pTarget, SEL_PageViewDataSourceHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pPageDataSourceListener = pTarget;
		m_pPageDataSourceHandler = pHandler;
	}
}

void CPageView::executePageChanged(CPageView* pPage, unsigned int nPageIndx)
{
	if( m_pPageChangedListener && m_pPageChangedHandler )
	{
		(m_pPageChangedListener->*m_pPageChangedHandler)(pPage, nPageIndx);
	}
}

void CPageView::reloadData()
{
	if( !m_pPageDataSourceListener || !m_pPageDataSourceHandler )
	{
		return;
	}
	CTableView::reloadData();
}

CPageViewCell* CPageView::dequeuePage()
{
	return (CPageViewCell*) dequeueCell();
}

CTableViewCell* CPageView::tableDataSource(CTableView* pTable, unsigned int idx)
{
	return (m_pPageDataSourceListener->*m_pPageDataSourceHandler)(this, idx);
}

NS_CC_WIDGET_END