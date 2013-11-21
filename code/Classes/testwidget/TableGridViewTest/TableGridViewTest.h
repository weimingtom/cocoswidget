#ifndef __CTableGridViewGRIDTEST_H__
#define __CTableGridViewGRIDTEST_H__

#include "../../MenuScene.h"
#include <vector>

//////////////////////////////////////////////////////

class CTableGridViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CTableGridViewBasicTest : public CTableGridViewTestSceneBase
{
public:
	virtual bool init();
	CTableGridViewCell* tableviewDataSource(CTableGridView* pTable, CTableGridViewCell* pCell, unsigned int idx);
};

//////////////////////////////////////////////////////

class CTableGridViewBackPackTest : public CTableGridViewTestSceneBase
{
public:
	virtual bool init();
	CTableGridViewCell* tableviewDataSource(CTableGridView* pTable, CTableGridViewCell* pCell, unsigned int idx);
	std::vector<std::string> m_vData;
	CTableGridView* pTable;

public:
	CToggleView* m_pToggleImage;
	CCSprite* m_pSelectedSprite;
	bool onItemLongClick(CCObject* pSender);
	void onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
	void onLayoutTouchEndedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
};

//////////////////////////////////////////////////////

static int CTableGridView_test_idx;

static CCScene* getCTableGridViewTestScene()
{
	switch(CTableGridView_test_idx)
	{
	case 0:
		return new CTableGridViewBasicTest();
	case 1:
		return new CTableGridViewBackPackTest();
	default:
		CTableGridView_test_idx = 0;
		return new CTableGridViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCTableGridViewTestScene()
{
	CTableGridView_test_idx = 0;
	CCScene* pScene = getCTableGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCTableGridViewTestScene()
{
	CTableGridView_test_idx++;
	CCScene* pScene = getCTableGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCTableGridViewTestScene()
{
	CTableGridView_test_idx--;
	CCScene* pScene = getCTableGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCTableGridViewTestScene()
{
	CCScene* pScene = getCTableGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CTableGridViewGRIDTEST_H__