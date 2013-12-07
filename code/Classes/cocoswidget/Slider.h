#ifndef __CCWIDGET_SLIDER_H__
#define __CCWIDGET_SLIDER_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ProgressBar.h"

NS_CC_WIDGET_BEGIN

class CSlider : public CProgressBar, public CWidget
{
public:
	CSlider();
	virtual ~CSlider();
	virtual bool initWithSlider(const char* pSlider, const char* pProgress);
	static CSlider* create();
	static CSlider* create(const char* pSlider, const char* pProgress);

	virtual void setContentSize(const CCSize& tSize);

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	virtual void setSliderImage(const char* pFile);
	virtual void setSliderTexture(CCTexture2D* pTexture);
	virtual void setSliderSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setSliderSpriteFrameName(const char* pSpriteName);

protected:
	int valueFromPoint(const CCPoint& tPoint);
	int valueFromPercent(float fPercentage);
	void pointFromValue(int nValue, CCPoint& tOutPoint);

protected:
	virtual void changeValueAndExecuteEvent(int nValue, bool bExeEvent);

protected:
	bool m_bDrag;
	CCSprite* m_pSlider;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_SLIDER_H__