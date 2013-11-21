#include "PageViewTest.h"

void CPageViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCPageViewTestScene();
}

void CPageViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCPageViewTestScene();
}

void CPageViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCPageViewTestScene();
}

//////////////////////////////////////////////////////

bool CPageViewBasicTest::init()
{
	CPageViewTestSceneBase::init();
	setTitle("CPageViewBasicTest");
	setDescription("PageView basic test");

	CPageView* pPageView = CPageView::create(
		CCSize(484, 320),
		10, this,
		pageviewdatasource_selector(CPageViewBasicTest::pageviewDataSource));
	pPageView->setPageChangedSelector(this, pageviewchanged_selector(CPageViewBasicTest::onPageChanged));
	pPageView->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pPageView);
	pPageView->reloadData();

	m_pText = CLabel::create();
	m_pText->setAnchorPoint(CCPoint(0, 0.5));
	m_pText->setPosition(CCPoint(800, 320));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pLayout->addChild(m_pText);

	return true;
}

CPageViewCell* CPageViewBasicTest::pageviewDataSource(CPageView* pPage, unsigned int nPageIdx)
{
	CPageViewCell* pPageCell = pPage->dequeuePage();
	CButton* pButton = NULL;

	if( !pPageCell )
	{
		pPageCell = new CPageViewCell();
		pPageCell->autorelease();
		pPageCell->setBackgroundNode(CCSprite::create("background.png"));
		pPageCell->getBackgroundNode()->setPosition(484 / 2, 320 / 2);

		pButton = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->getLabel()->setFontSize(30.0f);
		pButton->setPosition(CCPoint(484 / 2, 320 / 2));
		pButton->setTag(1);
		pPageCell->addChild(pButton);
	}
	else
	{
		pButton = (CButton*) pPageCell->getChildByTag(1);
	}

	char buf[48] = {0};
	sprintf(buf, "%u", nPageIdx);
	pButton->getLabel()->setString(buf);

	return pPageCell;
}

void CPageViewBasicTest::onPageChanged(CPageView* pPage, unsigned int nPageIndx)
{
	char buf[48] = {0};
	sprintf(buf, "%u", nPageIndx);
	m_pText->setString(buf);
}

//////////////////////////////////////////////////////

bool CPageViewVerticalTest::init()
{
	CPageViewTestSceneBase::init();
	setTitle("CPageViewVerticalTest");
	setDescription("PageView in vertical");

	CPageView* pPageView = CPageView::create(
		CCSize(484, 320),
		10, this,
		pageviewdatasource_selector(CPageViewVerticalTest::pageviewDataSource));
	pPageView->setPageChangedSelector(this, pageviewchanged_selector(CPageViewVerticalTest::onPageChanged));
	pPageView->setPosition(CCPoint(480, 320));
	pPageView->setDirection(eScrollViewDirectionVertical);
	m_pLayout->addChild(pPageView);
	pPageView->reloadData();

	m_pText = CLabel::create();
	m_pText->setAnchorPoint(CCPoint(0, 0.5));
	m_pText->setPosition(CCPoint(800, 320));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pLayout->addChild(m_pText);

	return true;
}

CPageViewCell* CPageViewVerticalTest::pageviewDataSource(CPageView* pPage, unsigned int nPageIdx)
{
	CPageViewCell* pPageCell = pPage->dequeuePage();
	CButton* pButton = NULL;

	if( !pPageCell )
	{
		pPageCell = new CPageViewCell();
		pPageCell->autorelease();
		pPageCell->setBackgroundNode(CCSprite::create("background.png"));
		pPageCell->getBackgroundNode()->setPosition(484 / 2, 320 / 2);

		pButton = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->getLabel()->setFontSize(30.0f);
		pButton->setPosition(CCPoint(484 / 2, 320 / 2));
		pButton->setTag(1);
		pPageCell->addChild(pButton);
	}
	else
	{
		pButton = (CButton*) pPageCell->getChildByTag(1);
	}

	char buf[48] = {0};
	sprintf(buf, "%u", nPageIdx);
	pButton->getLabel()->setString(buf);

	return pPageCell;
}

void CPageViewVerticalTest::onPageChanged(CPageView* pPage, unsigned int nPageIndx)
{
	char buf[48] = {0};
	sprintf(buf, "%u", nPageIndx);
	m_pText->setString(buf);
}