#ifndef __CCWIDGET_PROGRESSBAR_H__
#define __CCWIDGET_PROGRESSBAR_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN


enum CProgressBarDirection
{
	eProgressBarDirectionLeftToRight,
	eProgressBarDirectionRightToLeft,
	eProgressBarDirectionBottomToTop,
	eProgressBarDirectionTopToBottom
};

class CProgressBar : public CCNodeRGBA
, public CProgressEndedProtocol
, public CValueChangeableProtocol
{
public:
	CProgressBar();
	virtual ~CProgressBar();
	virtual bool init();
	virtual bool initWithFile(const char* pProgress);
	virtual void setContentSize(const CCSize& tSize);
	static CProgressBar* create();
	static CProgressBar* create(const char* pProgress);

	virtual void setProgressImage(const char* pFile);
	virtual void setProgressTexture(CCTexture2D* pTexture);
	virtual void setProgressSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setProgressSpriteFrameName(const char* pSpriteName);

	void setValue(int nValue);
	int getValue() const;
	void setMaxValue(int nMaxValue);
	int getMaxValue() const;
	void setMinValue(int nMinValue);
	int getMinValue() const;
	void setDirection(CProgressBarDirection eDirection);
	CProgressBarDirection getDirection() const;

	void startProgress(int nValue, float fDuration);
	void startProgressFromTo(int nFromValue, int nToValue, float fDuration);
	void stopProgress();
	float getPercentage() const;
	bool isProgressEnded() const;

	CC_WIDGET_BACKGROUND;
	
protected:
	void performProgressing();
	void onProgressing(float dt);
	void stoppedProgressing();

	void getScissorRectByPercentage(CCRect& tRect);
	virtual void changeValueAndExecuteEvent(int nValue, bool bExeEvent);	

protected:
	int m_nMaxValue;
	int m_nMinValue;
	int m_nValue;

	bool m_bProgressing;

	bool m_bFirstTick;
	float m_fLapsed;
	float m_fDuration;
	int m_nToValue;
	int m_nFromValue;

	CCSize m_tProgressSize;
	CCPoint m_tCenterPoint;

	CCSprite* m_pProgressSprite;
	CProgressBarDirection m_eDirection;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_PROGRESSBAR_H__