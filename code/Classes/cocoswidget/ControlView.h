#ifndef __CCWIDGET_CONTROLVIEW_H__
#define __CCWIDGET_CONTROLVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

class CControlView : public CCNodeRGBA, public CWidget, public CControlableProtocol
{
public:
	CControlView();
	virtual ~CControlView();
	virtual bool init();
	virtual bool initWithFile(const char* pBaseBoard, const char* pJoystick);
	virtual void setContentSize(const CCSize& tContentSize);
	static CControlView* create();
	static CControlView* create(const char* pBaseBoard, const char* pJoystick);

	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 触摸开始时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 * 输出 : 触摸模式
	 */
	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchMoved()
	 * 功能 : 触摸过程移动时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 触摸完成时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchCancelled()
	 * 功能 : 触摸被中断时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	void setRadius(float fRadius);
	float getRadius() const;
	void setRelocateWithAnimation(bool bAni);
	bool isRelocateWithAnimation() const;

	virtual void setBaseBoardImage(const char* pFile);
	virtual void setJoystickImage(const char* pFile);
	virtual void setBaseBoardSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setJoystickSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setBaseBoardTexture(CCTexture2D *pTexture);
	virtual void setJoystickTexture(CCTexture2D *pTexture);
	virtual void setBaseBoardSpriteFrameName(const char* pSpriteName);
	virtual void setJoystickSpriteFrameName(const char* pSpriteName);

protected:
	void relocateJoystick(bool bAni);
	virtual void onAnimateUpdate(float dt);
	void performAnimateUpdate();
	void stopAnimateUpdate();
	virtual void onExecuteEventUpdate(float dt);
	void performExecuteUpdate();
	void stopExecuteUpdate();

protected:
	CCSprite* m_pBaseBoard;
	CCSprite* m_pJoystick;
	CCPoint m_tCenterPoint;
	CCPoint m_tLastPoint;
	/// 可移动半径
	float m_fRadius;
	bool m_bExecuteEventUpdate;
	bool m_bAnimationUpdate;
	bool m_bRelocateWithAnimation;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_CONTROLVIEW_H__