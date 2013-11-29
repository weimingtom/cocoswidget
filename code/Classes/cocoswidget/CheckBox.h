#ifndef __CCWIDGET_CHECKBOX_H__
#define __CCWIDGET_CHECKBOX_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Button.h"

NS_CC_WIDGET_BEGIN

class CCheckBox : public CCNode, public CCheckableProtocol
{
public:
	CCheckBox();
	virtual ~CCheckBox();
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_CHECKBOX_H__