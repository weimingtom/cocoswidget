/*
** Lua binding: Lua_cocos2dx_widget
** Generated automatically by tolua++-1.0.92 on 12/10/13 19:18:40.
*/

/****************************************************************************
 Copyright (c) 2013 Viva-Lijunlin

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

extern "C" {
#include "tolua_fix.h"
}

#include "lua_cocoswidget.h"
#include "cocoswidget/cocos-widget.h"
#include <map>
#include <string>
#include "cocos2d.h"
#include "CCLuaEngine.h"

using namespace cocos2d;
using namespace cocos2d::cocoswidget;

/* Exported function */
TOLUA_API int  tolua_Lua_cocos2dx_widget_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CPageView (lua_State* tolua_S)
{
 CPageView* self = (CPageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCheckableProtocol (lua_State* tolua_S)
{
 CCheckableProtocol* self = (CCheckableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLabel (lua_State* tolua_S)
{
 CLabel* self = (CLabel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CPageViewCell (lua_State* tolua_S)
{
 CPageViewCell* self = (CPageViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLongClickableProtocol (lua_State* tolua_S)
{
 CLongClickableProtocol* self = (CLongClickableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CPanel (lua_State* tolua_S)
{
 CPanel* self = (CPanel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CClickableProtocol (lua_State* tolua_S)
{
 CClickableProtocol* self = (CClickableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCheckBox (lua_State* tolua_S)
{
 CCheckBox* self = (CCheckBox*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GLubyte (lua_State* tolua_S)
{
 GLubyte* self = (GLubyte*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CTableView (lua_State* tolua_S)
{
 CTableView* self = (CTableView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CDataSourceAdapterProtocol (lua_State* tolua_S)
{
 CDataSourceAdapterProtocol* self = (CDataSourceAdapterProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CWidgetLayout (lua_State* tolua_S)
{
 CWidgetLayout* self = (CWidgetLayout*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CImageViewScale9 (lua_State* tolua_S)
{
 CImageViewScale9* self = (CImageViewScale9*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CButton (lua_State* tolua_S)
{
 CButton* self = (CButton*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CImageView (lua_State* tolua_S)
{
 CImageView* self = (CImageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLabelAtlas (lua_State* tolua_S)
{
 CLabelAtlas* self = (CLabelAtlas*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CListView (lua_State* tolua_S)
{
 CListView* self = (CListView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridPageViewPage (lua_State* tolua_S)
{
 CGridPageViewPage* self = (CGridPageViewPage*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CSlider (lua_State* tolua_S)
{
 CSlider* self = (CSlider*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridPageView (lua_State* tolua_S)
{
 CGridPageView* self = (CGridPageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CToggleView (lua_State* tolua_S)
{
 CToggleView* self = (CToggleView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLabelBMFont (lua_State* tolua_S)
{
 CLabelBMFont* self = (CLabelBMFont*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridPageViewCell (lua_State* tolua_S)
{
 CGridPageViewCell* self = (CGridPageViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridView (lua_State* tolua_S)
{
 CGridView* self = (CGridView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CScrollView (lua_State* tolua_S)
{
 CScrollView* self = (CScrollView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccBlendFunc (lua_State* tolua_S)
{
 ccBlendFunc* self = (ccBlendFunc*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CWidget (lua_State* tolua_S)
{
 CWidget* self = (CWidget*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridViewCell (lua_State* tolua_S)
{
 CGridViewCell* self = (CGridViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CProgressEndedProtocol (lua_State* tolua_S)
{
 CProgressEndedProtocol* self = (CProgressEndedProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CControlableProtocol (lua_State* tolua_S)
{
 CControlableProtocol* self = (CControlableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CProgressBar (lua_State* tolua_S)
{
 CProgressBar* self = (CProgressBar*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CPageChangeableProtocol (lua_State* tolua_S)
{
 CPageChangeableProtocol* self = (CPageChangeableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CValueChangeableProtocol (lua_State* tolua_S)
{
 CValueChangeableProtocol* self = (CValueChangeableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CTableViewCell (lua_State* tolua_S)
{
 CTableViewCell* self = (CTableViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CScrollableProtocol (lua_State* tolua_S)
{
 CScrollableProtocol* self = (CScrollableProtocol*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CPanelColor (lua_State* tolua_S)
{
 CPanelColor* self = (CPanelColor*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"CCTexture2D");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"CCheckableProtocol");
 tolua_usertype(tolua_S,"CLabel");
 tolua_usertype(tolua_S,"CCTextAlignment");
 tolua_usertype(tolua_S,"CLongClickableProtocol");
 tolua_usertype(tolua_S,"SEL_DataSoucreAdapterHandler");
 tolua_usertype(tolua_S,"CPageViewCell");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CPanel");
 tolua_usertype(tolua_S,"CClickableProtocol");
 tolua_usertype(tolua_S,"CCheckBox");
 tolua_usertype(tolua_S,"CCNodeRGBA");
 tolua_usertype(tolua_S,"CProgressEndedProtocol");
 tolua_usertype(tolua_S,"CTableView");
 tolua_usertype(tolua_S,"CCBlendProtocol");
 tolua_usertype(tolua_S,"CDataSourceAdapterProtocol");
 tolua_usertype(tolua_S,"CCLabelAtlas");
 tolua_usertype(tolua_S,"CWidgetLayout");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CPageChangeableProtocol");
 tolua_usertype(tolua_S,"CImageViewScale9");
 tolua_usertype(tolua_S,"CButton");
 tolua_usertype(tolua_S,"CCLabelBMFont");
 tolua_usertype(tolua_S,"CCRect");
 tolua_usertype(tolua_S,"CLabelAtlas");
 tolua_usertype(tolua_S,"CListView");
 tolua_usertype(tolua_S,"CWidgetTouchProtocol");
 tolua_usertype(tolua_S,"CPanelColor");
 tolua_usertype(tolua_S,"GLubyte");
 tolua_usertype(tolua_S,"CGridPageViewPage");
 tolua_usertype(tolua_S,"CGridViewCell");
 tolua_usertype(tolua_S,"CGridPageView");
 tolua_usertype(tolua_S,"CScale9Sprite");
 tolua_usertype(tolua_S,"CToggleView");
 tolua_usertype(tolua_S,"CLabelBMFont");
 tolua_usertype(tolua_S,"CTableViewCell");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"CGridPageViewCell");
 tolua_usertype(tolua_S,"ccColor4B");
 tolua_usertype(tolua_S,"CSlider");
 tolua_usertype(tolua_S,"ccColor3B");
 tolua_usertype(tolua_S,"CCArray");
 tolua_usertype(tolua_S,"CScrollViewContainer");
 tolua_usertype(tolua_S,"CProgressBar");
 tolua_usertype(tolua_S,"CGridView");
 tolua_usertype(tolua_S,"CCLabelTTF");
 tolua_usertype(tolua_S,"CScrollView");
 tolua_usertype(tolua_S,"ccBlendFunc");
 tolua_usertype(tolua_S,"CWidget");
 tolua_usertype(tolua_S,"CCTouchDelegate");
 tolua_usertype(tolua_S,"CPageView");
 tolua_usertype(tolua_S,"CControlableProtocol");
 tolua_usertype(tolua_S,"CCVerticalTextAlignment");
 tolua_usertype(tolua_S,"CCSprite");
 tolua_usertype(tolua_S,"CValueChangeableProtocol");
 tolua_usertype(tolua_S,"CCSpriteFrame");
 tolua_usertype(tolua_S,"CScrollableProtocol");
 tolua_usertype(tolua_S,"CImageView");
}

/* method: new of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_new00
static int tolua_Lua_cocos2dx_widget_CButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CButton* tolua_ret = (CButton*)  Mtolua_new((CButton)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_new00_local
static int tolua_Lua_cocos2dx_widget_CButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CButton* tolua_ret = (CButton*)  Mtolua_new((CButton)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CButton");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_delete00
static int tolua_Lua_cocos2dx_widget_CButton_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_init00
static int tolua_Lua_cocos2dx_widget_CButton_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setContentSize00
static int tolua_Lua_cocos2dx_widget_CButton_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*contentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setEnabled00
static int tolua_Lua_cocos2dx_widget_CButton_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLabelOffset of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setLabelOffset00
static int tolua_Lua_cocos2dx_widget_CButton_setLabelOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* tOffset = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLabelOffset'", NULL);
#endif
  {
   self->setLabelOffset(*tOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLabelOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLabel of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getLabel00
static int tolua_Lua_cocos2dx_widget_CButton_getLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLabel'", NULL);
#endif
  {
   CLabel* tolua_ret = (CLabel*)  self->getLabel();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isScale9Enabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_isScale9Enabled00
static int tolua_Lua_cocos2dx_widget_CButton_isScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isScale9Enabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isScale9Enabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setScale9Enabled00
static int tolua_Lua_cocos2dx_widget_CButton_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWith9Sprite of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_initWith9Sprite00
static int tolua_Lua_cocos2dx_widget_CButton_initWith9Sprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,4,0));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWith9Sprite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWith9Sprite(*tSize,pNormal,pSelected,pDisabled);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWith9Sprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_initWithFile00
static int tolua_Lua_cocos2dx_widget_CButton_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(pNormal,pSelected,pDisabled);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateCascadeLabelContentSize of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize00
static int tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateCascadeLabelContentSize'", NULL);
#endif
  {
   self->updateCascadeLabelContentSize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateCascadeLabelContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateCascadeLabelContentSize of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize01
static int tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tOffsetSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateCascadeLabelContentSize'", NULL);
#endif
  {
   self->updateCascadeLabelContentSize(*tOffsetSize);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalImage00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalImage'", NULL);
#endif
  {
   self->setNormalImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedImage00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedImage'", NULL);
#endif
  {
   self->setSelectedImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledImage00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledImage'", NULL);
#endif
  {
   self->setDisabledImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalTexture of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalTexture00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTexture'", NULL);
#endif
  {
   self->setNormalTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedTexture of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedTexture00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTexture'", NULL);
#endif
  {
   self->setSelectedTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledTexture of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledTexture00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledTexture'", NULL);
#endif
  {
   self->setDisabledTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrameName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrameName'", NULL);
#endif
  {
   self->setNormalSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedSpriteFrameName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedSpriteFrameName'", NULL);
#endif
  {
   self->setSelectedSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledSpriteFrameName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledSpriteFrameName'", NULL);
#endif
  {
   self->setDisabledSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrame of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrame'", NULL);
#endif
  {
   self->setNormalSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedSpriteFrame of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedSpriteFrame'", NULL);
#endif
  {
   self->setSelectedSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledSpriteFrame of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledSpriteFrame'", NULL);
#endif
  {
   self->setDisabledSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNormalImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getNormalImage00
static int tolua_Lua_cocos2dx_widget_CButton_getNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalImage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getNormalImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelectedImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getSelectedImage00
static int tolua_Lua_cocos2dx_widget_CButton_getSelectedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedImage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getSelectedImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisabledImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getDisabledImage00
static int tolua_Lua_cocos2dx_widget_CButton_getDisabledImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledImage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getDisabledImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_create00
static int tolua_Lua_cocos2dx_widget_CButton_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CButton* tolua_ret = (CButton*)  CButton::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_create01
static int tolua_Lua_cocos2dx_widget_CButton_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  {
   CButton* tolua_ret = (CButton*)  CButton::create(pNormal,pSelected,pDisabled);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CButton_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWith9Sprite of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_createWith9Sprite00
static int tolua_Lua_cocos2dx_widget_CButton_createWith9Sprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,5,NULL));
  {
   CButton* tolua_ret = (CButton*)  CButton::createWith9Sprite(*tSize,pNormal,pSelected,pDisabled);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWith9Sprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CButton */
#ifndef TOLUA_DISABLE_tolua_get_CButton___CWidget__
static int tolua_get_CButton___CWidget__(lua_State* tolua_S)
{
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CButton */
#ifndef TOLUA_DISABLE_tolua_get_CButton___CClickableProtocol__
static int tolua_get_CButton___CClickableProtocol__(lua_State* tolua_S)
{
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CButton */
#ifndef TOLUA_DISABLE_tolua_get_CButton___CLongClickableProtocol__
static int tolua_get_CButton___CLongClickableProtocol__(lua_State* tolua_S)
{
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_new00
static int tolua_Lua_cocos2dx_widget_CCheckBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckBox* tolua_ret = (CCheckBox*)  Mtolua_new((CCheckBox)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_new00_local
static int tolua_Lua_cocos2dx_widget_CCheckBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckBox* tolua_ret = (CCheckBox*)  Mtolua_new((CCheckBox)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCheckBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_delete00
static int tolua_Lua_cocos2dx_widget_CCheckBox_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_init00
static int tolua_Lua_cocos2dx_widget_CCheckBox_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChecked of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setChecked00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool bChecked = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChecked'", NULL);
#endif
  {
   self->setChecked(bChecked);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setEnabled00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setContentSize00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tContentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tContentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalImage'", NULL);
#endif
  {
   self->setNormalImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressImage'", NULL);
#endif
  {
   self->setNormalPressImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedImage'", NULL);
#endif
  {
   self->setCheckedImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressImage'", NULL);
#endif
  {
   self->setCheckedPressImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalImage'", NULL);
#endif
  {
   self->setDisabledNormalImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedImage'", NULL);
#endif
  {
   self->setDisabledCheckedImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrame'", NULL);
#endif
  {
   self->setNormalSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressSpriteFrame'", NULL);
#endif
  {
   self->setNormalPressSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedSpriteFrame'", NULL);
#endif
  {
   self->setCheckedSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressSpriteFrame'", NULL);
#endif
  {
   self->setCheckedPressSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalSpriteFrame'", NULL);
#endif
  {
   self->setDisabledNormalSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedSpriteFrame'", NULL);
#endif
  {
   self->setDisabledCheckedSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTexture'", NULL);
#endif
  {
   self->setNormalTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressTexture'", NULL);
#endif
  {
   self->setNormalPressTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedTexture'", NULL);
#endif
  {
   self->setCheckedTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressTexture'", NULL);
#endif
  {
   self->setCheckedPressTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalTexture'", NULL);
#endif
  {
   self->setDisabledNormalTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedTexture'", NULL);
#endif
  {
   self->setDisabledCheckedTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrameName'", NULL);
#endif
  {
   self->setNormalSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressSpriteFrameName'", NULL);
#endif
  {
   self->setNormalPressSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedSpriteFrameName'", NULL);
#endif
  {
   self->setCheckedSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressSpriteFrameName'", NULL);
#endif
  {
   self->setCheckedPressSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalSpriteFrameName'", NULL);
#endif
  {
   self->setDisabledNormalSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedSpriteFrameName'", NULL);
#endif
  {
   self->setDisabledCheckedSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_create00
static int tolua_Lua_cocos2dx_widget_CCheckBox_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckBox* tolua_ret = (CCheckBox*)  CCheckBox::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CWidget__
static int tolua_get_CCheckBox___CWidget__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCheckableProtocol__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CCheckableProtocol__
static int tolua_get_CCheckBox___CCheckableProtocol__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCheckableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCheckableProtocol*>(self), "CCheckableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCheckableProtocol*)self), "CCheckableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CClickableProtocol__
static int tolua_get_CCheckBox___CClickableProtocol__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CLongClickableProtocol__
static int tolua_get_CCheckBox___CLongClickableProtocol__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewPage* tolua_ret = (CGridPageViewPage*)  Mtolua_new((CGridPageViewPage)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageViewPage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewPage* tolua_ret = (CGridPageViewPage*)  Mtolua_new((CGridPageViewPage)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageViewPage");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_delete00
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageViewPage* self = (CGridPageViewPage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGirdCells of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_getGirdCells00
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_getGirdCells00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageViewPage* self = (CGridPageViewPage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGirdCells'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getGirdCells();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGirdCells'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00
static int tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewCell* tolua_ret = (CGridPageViewCell*)  Mtolua_new((CGridPageViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewCell* tolua_ret = (CGridPageViewCell*)  Mtolua_new((CGridPageViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewCell_delete00
static int tolua_Lua_cocos2dx_widget_CGridPageViewCell_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageViewCell* self = (CGridPageViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_new00
static int tolua_Lua_cocos2dx_widget_CGridPageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageView* tolua_ret = (CGridPageView*)  Mtolua_new((CGridPageView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_new00_local
static int tolua_Lua_cocos2dx_widget_CGridPageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageView* tolua_ret = (CGridPageView*)  Mtolua_new((CGridPageView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_delete00
static int tolua_Lua_cocos2dx_widget_CGridPageView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_create00
static int tolua_Lua_cocos2dx_widget_CGridPageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CGridPageView* tolua_ret = (CGridPageView*)  CGridPageView::create(*tViewSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_create01
static int tolua_Lua_cocos2dx_widget_CGridPageView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"SEL_DataSoucreAdapterHandler",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const CCSize* tCellSize = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
  unsigned int uCellCount = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  CCObject* pListener = ((CCObject*)  tolua_tousertype(tolua_S,5,0));
  SEL_DataSoucreAdapterHandler pHandler = *((SEL_DataSoucreAdapterHandler*)  tolua_tousertype(tolua_S,6,0));
  {
   CGridPageView* tolua_ret = (CGridPageView*)  CGridPageView::create(*tViewSize,*tCellSize,uCellCount,pListener,pHandler);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridPageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CGridPageView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCountOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uCellsCount = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCountOfCell'", NULL);
#endif
  {
   self->setCountOfCell(uCellsCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountOfCell'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCountOfCell();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tCellsSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeOfCell'", NULL);
#endif
  {
   self->setSizeOfCell(*tCellsSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeOfCell'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSizeOfCell();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRows of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setRows00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uRows = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRows'", NULL);
#endif
  {
   self->setRows(uRows);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRows of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getRows00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRows'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRows();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColumns of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setColumns00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uColumns = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumns'", NULL);
#endif
  {
   self->setColumns(uColumns);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColumns of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getColumns00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumns'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getColumns();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_reloadData00
static int tolua_Lua_cocos2dx_widget_CGridPageView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CPageChangeableProtocol__ of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_get_CGridPageView___CPageChangeableProtocol__
static int tolua_get_CGridPageView___CPageChangeableProtocol__(lua_State* tolua_S)
{
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CPageChangeableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CPageChangeableProtocol*>(self), "CPageChangeableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CPageChangeableProtocol*)self), "CPageChangeableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_new00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  Mtolua_new((CGridViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  Mtolua_new((CGridViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_delete00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdx of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_getIdx00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_getIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridViewCell* self = (const CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdx'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getIdx();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIdx of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_setIdx00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_setIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIdx'", NULL);
#endif
  {
   self->setIdx(uIdx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRow of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_getRow00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_getRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridViewCell* self = (const CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRow'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRow();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRow of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_setRow00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_setRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uRow = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRow'", NULL);
#endif
  {
   self->setRow(uRow);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_reset00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_new00
static int tolua_Lua_cocos2dx_widget_CGridView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridView* tolua_ret = (CGridView*)  Mtolua_new((CGridView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_new00_local
static int tolua_Lua_cocos2dx_widget_CGridView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridView* tolua_ret = (CGridView*)  Mtolua_new((CGridView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_delete00
static int tolua_Lua_cocos2dx_widget_CGridView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCountOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_setCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uCellsCount = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCountOfCell'", NULL);
#endif
  {
   self->setCountOfCell(uCellsCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_getCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountOfCell'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCountOfCell();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_setSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tCellsSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeOfCell'", NULL);
#endif
  {
   self->setSizeOfCell(*tCellsSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_getSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeOfCell'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSizeOfCell();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColumns of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setColumns00
static int tolua_Lua_cocos2dx_widget_CGridView_setColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uColumns = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumns'", NULL);
#endif
  {
   self->setColumns(uColumns);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColumns of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getColumns00
static int tolua_Lua_cocos2dx_widget_CGridView_getColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumns'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getColumns();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRows of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getRows00
static int tolua_Lua_cocos2dx_widget_CGridView_getRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRows'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRows();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAutoRelocate of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_isAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CGridView_isAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoRelocate'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAutoRelocate();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRelocate of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CGridView_setAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  bool bAuto = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRelocate'", NULL);
#endif
  {
   self->setAutoRelocate(bAuto);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCells of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getCells00
static int tolua_Lua_cocos2dx_widget_CGridView_getCells00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCells'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getCells();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCells'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cellAtIndex of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_cellAtIndex00
static int tolua_Lua_cocos2dx_widget_CGridView_cellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cellAtIndex'", NULL);
#endif
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  self->cellAtIndex(idx);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dequeueCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_dequeueCell00
static int tolua_Lua_cocos2dx_widget_CGridView_dequeueCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dequeueCell'", NULL);
#endif
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  self->dequeueCell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dequeueCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_reloadData00
static int tolua_Lua_cocos2dx_widget_CGridView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_create00
static int tolua_Lua_cocos2dx_widget_CGridView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CGridView* tolua_ret = (CGridView*)  CGridView::create(*tViewSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_create01
static int tolua_Lua_cocos2dx_widget_CGridView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"SEL_DataSoucreAdapterHandler",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const CCSize* tCellSize = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
  unsigned int uCellCount = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  CCObject* pListener = ((CCObject*)  tolua_tousertype(tolua_S,5,0));
  SEL_DataSoucreAdapterHandler pHandler = *((SEL_DataSoucreAdapterHandler*)  tolua_tousertype(tolua_S,6,0));
  {
   CGridView* tolua_ret = (CGridView*)  CGridView::create(*tViewSize,*tCellSize,uCellCount,pListener,pHandler);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGridView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CGridView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithParams of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_initWithParams00
static int tolua_Lua_cocos2dx_widget_CGridView_initWithParams00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"SEL_DataSoucreAdapterHandler",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const CCSize* tCellSize = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
  unsigned int uCellCount = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  CCObject* pListener = ((CCObject*)  tolua_tousertype(tolua_S,5,0));
  SEL_DataSoucreAdapterHandler pHandler = *((SEL_DataSoucreAdapterHandler*)  tolua_tousertype(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithParams'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithParams(*tViewSize,*tCellSize,uCellCount,pListener,pHandler);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithParams'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CDataSourceAdapterProtocol__ of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_get_CGridView___CDataSourceAdapterProtocol__
static int tolua_get_CGridView___CDataSourceAdapterProtocol__(lua_State* tolua_S)
{
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CDataSourceAdapterProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CDataSourceAdapterProtocol*>(self), "CDataSourceAdapterProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CDataSourceAdapterProtocol*)self), "CDataSourceAdapterProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_new00
static int tolua_Lua_cocos2dx_widget_CImageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageView* tolua_ret = (CImageView*)  Mtolua_new((CImageView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_new00_local
static int tolua_Lua_cocos2dx_widget_CImageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageView* tolua_ret = (CImageView*)  Mtolua_new((CImageView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_create00
static int tolua_Lua_cocos2dx_widget_CImageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_create01
static int tolua_Lua_cocos2dx_widget_CImageView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::create(pszFileName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_create02
static int tolua_Lua_cocos2dx_widget_CImageView_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::create(pszFileName,*rect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageView_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00
static int tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithTexture(pTexture);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithTexture01
static int tolua_Lua_cocos2dx_widget_CImageView_createWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithTexture(pTexture,*rect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithSpriteFrame(pSpriteFrame);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszSpriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithSpriteFrameName(pszSpriteFrameName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_get_CImageView___CWidget__
static int tolua_get_CImageView___CWidget__(lua_State* tolua_S)
{
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_get_CImageView___CClickableProtocol__
static int tolua_get_CImageView___CClickableProtocol__(lua_State* tolua_S)
{
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_get_CImageView___CLongClickableProtocol__
static int tolua_get_CImageView___CLongClickableProtocol__(lua_State* tolua_S)
{
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_new00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  Mtolua_new((CImageViewScale9)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  Mtolua_new((CImageViewScale9)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,4,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(file,rect,capInsets);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(file,rect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create02
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(capInsets,file);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create03
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(file);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrame(spriteFrame,capInsets);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrame(spriteFrame);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrameName(spriteFrameName,capInsets);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrameName(spriteFrameName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithTexture(pTexture);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithTexture(pTexture,capInsets);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create04
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_get_CImageViewScale9___CWidget__
static int tolua_get_CImageViewScale9___CWidget__(lua_State* tolua_S)
{
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_get_CImageViewScale9___CClickableProtocol__
static int tolua_get_CImageViewScale9___CClickableProtocol__(lua_State* tolua_S)
{
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_get_CImageViewScale9___CLongClickableProtocol__
static int tolua_get_CImageViewScale9___CLongClickableProtocol__(lua_State* tolua_S)
{
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_new00
static int tolua_Lua_cocos2dx_widget_CLabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabel* tolua_ret = (CLabel*)  Mtolua_new((CLabel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_new00_local
static int tolua_Lua_cocos2dx_widget_CLabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabel* tolua_ret = (CLabel*)  Mtolua_new((CLabel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_delete00
static int tolua_Lua_cocos2dx_widget_CLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create00
static int tolua_Lua_cocos2dx_widget_CLabel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create01
static int tolua_Lua_cocos2dx_widget_CLabel_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create(pString,pFontName,fFontSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabel_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create02
static int tolua_Lua_cocos2dx_widget_CLabel_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  const CCSize* tDimensions = ((const CCSize*)  tolua_tousertype(tolua_S,5,0));
  CCTextAlignment hAlignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,6,0));
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create(pString,pFontName,fFontSize,*tDimensions,hAlignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabel_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create03
static int tolua_Lua_cocos2dx_widget_CLabel_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCTextAlignment",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"CCVerticalTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  const CCSize* tDimensions = ((const CCSize*)  tolua_tousertype(tolua_S,5,0));
  CCTextAlignment hAlignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,6,0));
  CCVerticalTextAlignment vAlignment = *((CCVerticalTextAlignment*)  tolua_tousertype(tolua_S,7,0));
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create(pString,pFontName,fFontSize,*tDimensions,hAlignment,vAlignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabel_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_get_CLabel___CWidget__
static int tolua_get_CLabel___CWidget__(lua_State* tolua_S)
{
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_get_CLabel___CClickableProtocol__
static int tolua_get_CLabel___CClickableProtocol__(lua_State* tolua_S)
{
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_get_CLabel___CLongClickableProtocol__
static int tolua_get_CLabel___CLongClickableProtocol__(lua_State* tolua_S)
{
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_new00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  Mtolua_new((CLabelAtlas)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  Mtolua_new((CLabelAtlas)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_delete00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_create00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* charMapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  unsigned int itemWidth = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int itemHeight = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  unsigned int startCharMap = ((unsigned int)  tolua_tonumber(tolua_S,6,0));
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  CLabelAtlas::create(pString,charMapFile,itemWidth,itemHeight,startCharMap);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_create01
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  CLabelAtlas::create(pString,fntFile);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelAtlas");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelAtlas_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_get_CLabelAtlas___CWidget__
static int tolua_get_CLabelAtlas___CWidget__(lua_State* tolua_S)
{
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_get_CLabelAtlas___CClickableProtocol__
static int tolua_get_CLabelAtlas___CClickableProtocol__(lua_State* tolua_S)
{
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_get_CLabelAtlas___CLongClickableProtocol__
static int tolua_get_CLabelAtlas___CLongClickableProtocol__(lua_State* tolua_S)
{
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_new00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  Mtolua_new((CLabelBMFont)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  Mtolua_new((CLabelBMFont)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_delete00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCTextAlignment",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,5,0));
  CCPoint imageOffset = *((CCPoint*)  tolua_tousertype(tolua_S,6,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile,width,alignment,imageOffset);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create01
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,5,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile,width,alignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create02
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile,width);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create03
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create04
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CLabelBMFont___CWidget__
static int tolua_get_CLabelBMFont___CWidget__(lua_State* tolua_S)
{
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CLabelBMFont___CClickableProtocol__
static int tolua_get_CLabelBMFont___CClickableProtocol__(lua_State* tolua_S)
{
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CLabelBMFont___CLongClickableProtocol__
static int tolua_get_CLabelBMFont___CLongClickableProtocol__(lua_State* tolua_S)
{
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_new00
static int tolua_Lua_cocos2dx_widget_CListView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CListView* tolua_ret = (CListView*)  Mtolua_new((CListView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_new00_local
static int tolua_Lua_cocos2dx_widget_CListView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CListView* tolua_ret = (CListView*)  Mtolua_new((CListView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CListView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_delete00
static int tolua_Lua_cocos2dx_widget_CListView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_create00
static int tolua_Lua_cocos2dx_widget_CListView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CListView* tolua_ret = (CListView*)  CListView::create(*contentSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNodeAtLast of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNodeAtLast00
static int tolua_Lua_cocos2dx_widget_CListView_insertNodeAtLast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNodeAtLast'", NULL);
#endif
  {
   self->insertNodeAtLast(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertNodeAtLast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNodeAtFront of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNodeAtFront00
static int tolua_Lua_cocos2dx_widget_CListView_insertNodeAtFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNodeAtFront'", NULL);
#endif
  {
   self->insertNodeAtFront(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertNodeAtFront'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNode00
static int tolua_Lua_cocos2dx_widget_CListView_insertNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCNode* pTarget = ((CCNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNode'", NULL);
#endif
  {
   self->insertNode(pNode,pTarget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNode01
static int tolua_Lua_cocos2dx_widget_CListView_insertNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNode'", NULL);
#endif
  {
   self->insertNode(pNode,idx);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CListView_insertNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeNode00
static int tolua_Lua_cocos2dx_widget_CListView_removeNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNode'", NULL);
#endif
  {
   self->removeNode(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeNode01
static int tolua_Lua_cocos2dx_widget_CListView_removeNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNode'", NULL);
#endif
  {
   self->removeNode(pNode);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CListView_removeNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFrontNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeFrontNode00
static int tolua_Lua_cocos2dx_widget_CListView_removeFrontNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFrontNode'", NULL);
#endif
  {
   self->removeFrontNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFrontNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLastNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeLastNode00
static int tolua_Lua_cocos2dx_widget_CListView_removeLastNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLastNode'", NULL);
#endif
  {
   self->removeLastNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLastNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllNodes of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeAllNodes00
static int tolua_Lua_cocos2dx_widget_CListView_removeAllNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllNodes'", NULL);
#endif
  {
   self->removeAllNodes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodes of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_getNodes00
static int tolua_Lua_cocos2dx_widget_CListView_getNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodes'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getNodes();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeCount of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_getNodeCount00
static int tolua_Lua_cocos2dx_widget_CListView_getNodeCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CListView* self = (const CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getNodeCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageViewCell_new00
static int tolua_Lua_cocos2dx_widget_CPageViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageViewCell* tolua_ret = (CPageViewCell*)  Mtolua_new((CPageViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageViewCell* tolua_ret = (CPageViewCell*)  Mtolua_new((CPageViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_new00
static int tolua_Lua_cocos2dx_widget_CPageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageView* tolua_ret = (CPageView*)  Mtolua_new((CPageView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_new00_local
static int tolua_Lua_cocos2dx_widget_CPageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageView* tolua_ret = (CPageView*)  Mtolua_new((CPageView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_create00
static int tolua_Lua_cocos2dx_widget_CPageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tPageSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CPageView* tolua_ret = (CPageView*)  CPageView::create(*tPageSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_create01
static int tolua_Lua_cocos2dx_widget_CPageView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"SEL_DataSoucreAdapterHandler",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CCSize* tPageSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  unsigned int uPageCount = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  CCObject* pListener = ((CCObject*)  tolua_tousertype(tolua_S,4,0));
  SEL_DataSoucreAdapterHandler pHandler = *((SEL_DataSoucreAdapterHandler*)  tolua_tousertype(tolua_S,5,0));
  {
   CPageView* tolua_ret = (CPageView*)  CPageView::create(*tPageSize,uPageCount,pListener,pHandler);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CPageView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CPageChangeableProtocol__ of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_get_CPageView___CPageChangeableProtocol__
static int tolua_get_CPageView___CPageChangeableProtocol__(lua_State* tolua_S)
{
  CPageView* self = (CPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CPageChangeableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CPageChangeableProtocol*>(self), "CPageChangeableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CPageChangeableProtocol*)self), "CPageChangeableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_new00
static int tolua_Lua_cocos2dx_widget_CPanel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPanel* tolua_ret = (CPanel*)  Mtolua_new((CPanel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_new00_local
static int tolua_Lua_cocos2dx_widget_CPanel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPanel* tolua_ret = (CPanel*)  Mtolua_new((CPanel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_delete00
static int tolua_Lua_cocos2dx_widget_CPanel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_init00
static int tolua_Lua_cocos2dx_widget_CPanel_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_setContentSize00
static int tolua_Lua_cocos2dx_widget_CPanel_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tContentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tContentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_create00
static int tolua_Lua_cocos2dx_widget_CPanel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPanel* tolua_ret = (CPanel*)  CPanel::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundImage of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_setBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CPanel_setBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundImage'", NULL);
#endif
  {
   self->setBackgroundImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundTexture of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_setBackgroundTexture00
static int tolua_Lua_cocos2dx_widget_CPanel_setBackgroundTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundTexture'", NULL);
#endif
  {
   self->setBackgroundTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrame of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_setBackgroundSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CPanel_setBackgroundSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrame'", NULL);
#endif
  {
   self->setBackgroundSpriteFrame(pSpriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrameName of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_setBackgroundSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CPanel_setBackgroundSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
  const char* pFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrameName'", NULL);
#endif
  {
   self->setBackgroundSpriteFrameName(pFrameName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundImage of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_getBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CPanel_getBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CPanel* self = (const CPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundImage'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getBackgroundImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundImage of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanel_removeBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CPanel_removeBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundImage'", NULL);
#endif
  {
   self->removeBackgroundImage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CPanel */
#ifndef TOLUA_DISABLE_tolua_get_CPanel___CWidget__
static int tolua_get_CPanel___CWidget__(lua_State* tolua_S)
{
  CPanel* self = (CPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_new00
static int tolua_Lua_cocos2dx_widget_CPanelColor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPanelColor* tolua_ret = (CPanelColor*)  Mtolua_new((CPanelColor)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanelColor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_new00_local
static int tolua_Lua_cocos2dx_widget_CPanelColor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPanelColor* tolua_ret = (CPanelColor*)  Mtolua_new((CPanelColor)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanelColor");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_delete00
static int tolua_Lua_cocos2dx_widget_CPanelColor_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_create00
static int tolua_Lua_cocos2dx_widget_CPanelColor_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPanelColor* tolua_ret = (CPanelColor*)  CPanelColor::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanelColor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_create01
static int tolua_Lua_cocos2dx_widget_CPanelColor_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const ccColor4B* color = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   CPanelColor* tolua_ret = (CPanelColor*)  CPanelColor::create(*color);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPanelColor");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CPanelColor_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_init00
static int tolua_Lua_cocos2dx_widget_CPanelColor_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithColor of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_initWithColor00
static int tolua_Lua_cocos2dx_widget_CPanelColor_initWithColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* color = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithColor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithColor(*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_draw00
static int tolua_Lua_cocos2dx_widget_CPanelColor_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setContentSize00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* var = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_getOpacity00
static int tolua_Lua_cocos2dx_widget_CPanelColor_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayedOpacity of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_getDisplayedOpacity00
static int tolua_Lua_cocos2dx_widget_CPanelColor_getDisplayedOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayedOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getDisplayedOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayedOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setOpacity00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateDisplayedOpacity of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_updateDisplayedOpacity00
static int tolua_Lua_cocos2dx_widget_CPanelColor_updateDisplayedOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  GLubyte parentOpacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateDisplayedOpacity'", NULL);
#endif
  {
   self->updateDisplayedOpacity(parentOpacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateDisplayedOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCascadeOpacityEnabled of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_isCascadeOpacityEnabled00
static int tolua_Lua_cocos2dx_widget_CPanelColor_isCascadeOpacityEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCascadeOpacityEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCascadeOpacityEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCascadeOpacityEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeOpacityEnabled of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setCascadeOpacityEnabled00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setCascadeOpacityEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  bool cascadeOpacityEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeOpacityEnabled'", NULL);
#endif
  {
   self->setCascadeOpacityEnabled(cascadeOpacityEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeOpacityEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_getColor00
static int tolua_Lua_cocos2dx_widget_CPanelColor_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayedColor of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_getDisplayedColor00
static int tolua_Lua_cocos2dx_widget_CPanelColor_getDisplayedColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayedColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getDisplayedColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayedColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setColor00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateDisplayedColor of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_updateDisplayedColor00
static int tolua_Lua_cocos2dx_widget_CPanelColor_updateDisplayedColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* parentColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateDisplayedColor'", NULL);
#endif
  {
   self->updateDisplayedColor(*parentColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateDisplayedColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCascadeColorEnabled of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_isCascadeColorEnabled00
static int tolua_Lua_cocos2dx_widget_CPanelColor_isCascadeColorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCascadeColorEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCascadeColorEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCascadeColorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeColorEnabled of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setCascadeColorEnabled00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setCascadeColorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  bool cascadeColorEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeColorEnabled'", NULL);
#endif
  {
   self->setCascadeColorEnabled(cascadeColorEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeColorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacityModifyRGB of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setOpacityModifyRGB00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacityModifyRGB'", NULL);
#endif
  {
   self->setOpacityModifyRGB(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isOpacityModifyRGB of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_isOpacityModifyRGB00
static int tolua_Lua_cocos2dx_widget_CPanelColor_isOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isOpacityModifyRGB'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isOpacityModifyRGB();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendFunc of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_getBlendFunc00
static int tolua_Lua_cocos2dx_widget_CPanelColor_getBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendFunc'", NULL);
#endif
  {
   ccBlendFunc tolua_ret = (ccBlendFunc)  self->getBlendFunc();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccBlendFunc)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccBlendFunc));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPanelColor_setBlendFunc00
static int tolua_Lua_cocos2dx_widget_CPanelColor_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPanelColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccBlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
  ccBlendFunc tBlendFunc = *((ccBlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(tBlendFunc);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCBlendProtocol__ of class  CPanelColor */
#ifndef TOLUA_DISABLE_tolua_get_CPanelColor___CCBlendProtocol__
static int tolua_get_CPanelColor___CCBlendProtocol__(lua_State* tolua_S)
{
  CPanelColor* self = (CPanelColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCBlendProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCBlendProtocol*>(self), "CCBlendProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCBlendProtocol*)self), "CCBlendProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_new00
static int tolua_Lua_cocos2dx_widget_CProgressBar_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressBar* tolua_ret = (CProgressBar*)  Mtolua_new((CProgressBar)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CProgressBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_new00_local
static int tolua_Lua_cocos2dx_widget_CProgressBar_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressBar* tolua_ret = (CProgressBar*)  Mtolua_new((CProgressBar)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CProgressBar");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_delete00
static int tolua_Lua_cocos2dx_widget_CProgressBar_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_init00
static int tolua_Lua_cocos2dx_widget_CProgressBar_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_initWithFile00
static int tolua_Lua_cocos2dx_widget_CProgressBar_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(pProgress);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setContentSize00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'", NULL);
#endif
  {
   self->setValue(nValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setMaxValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setMaxValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nMaxValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxValue'", NULL);
#endif
  {
   self->setMaxValue(nMaxValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getMaxValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getMaxValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setMinValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setMinValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nMinValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinValue'", NULL);
#endif
  {
   self->setMinValue(nMinValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getMinValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getMinValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMinValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setDirection00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CProgressBarDirection eDirection = ((CProgressBarDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(eDirection);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getDirection00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   CProgressBarDirection tolua_ret = (CProgressBarDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startProgress of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_startProgress00
static int tolua_Lua_cocos2dx_widget_CProgressBar_startProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nValue = ((int)  tolua_tonumber(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startProgress'", NULL);
#endif
  {
   self->startProgress(nValue,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startProgress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startProgressFromTo of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_startProgressFromTo00
static int tolua_Lua_cocos2dx_widget_CProgressBar_startProgressFromTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nFromValue = ((int)  tolua_tonumber(tolua_S,2,0));
  int nToValue = ((int)  tolua_tonumber(tolua_S,3,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startProgressFromTo'", NULL);
#endif
  {
   self->startProgressFromTo(nFromValue,nToValue,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startProgressFromTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopProgress of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_stopProgress00
static int tolua_Lua_cocos2dx_widget_CProgressBar_stopProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopProgress'", NULL);
#endif
  {
   self->stopProgress();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopProgress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercentage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getPercentage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getPercentage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercentage'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPercentage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercentage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isProgressEnded of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_isProgressEnded00
static int tolua_Lua_cocos2dx_widget_CProgressBar_isProgressEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isProgressEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isProgressEnded();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isProgressEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressImage'", NULL);
#endif
  {
   self->setProgressImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressTexture of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressTexture00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressTexture'", NULL);
#endif
  {
   self->setProgressTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressSpriteFrame of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressSpriteFrame'", NULL);
#endif
  {
   self->setProgressSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressSpriteFrameName of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressSpriteFrameName'", NULL);
#endif
  {
   self->setProgressSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_create00
static int tolua_Lua_cocos2dx_widget_CProgressBar_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressBar* tolua_ret = (CProgressBar*)  CProgressBar::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CProgressBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_create01
static int tolua_Lua_cocos2dx_widget_CProgressBar_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CProgressBar* tolua_ret = (CProgressBar*)  CProgressBar::create(pProgress);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CProgressBar");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CProgressBar_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundImage'", NULL);
#endif
  {
   self->setBackgroundImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundTexture of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundTexture00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundTexture'", NULL);
#endif
  {
   self->setBackgroundTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrame of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrame'", NULL);
#endif
  {
   self->setBackgroundSpriteFrame(pSpriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrameName of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrameName'", NULL);
#endif
  {
   self->setBackgroundSpriteFrameName(pFrameName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundImage'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getBackgroundImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundImage'", NULL);
#endif
  {
   self->removeBackgroundImage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CProgressEndedProtocol__ of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_get_CProgressBar___CProgressEndedProtocol__
static int tolua_get_CProgressBar___CProgressEndedProtocol__(lua_State* tolua_S)
{
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CProgressEndedProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CProgressEndedProtocol*>(self), "CProgressEndedProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CProgressEndedProtocol*)self), "CProgressEndedProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CValueChangeableProtocol__ of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_get_CProgressBar___CValueChangeableProtocol__
static int tolua_get_CProgressBar___CValueChangeableProtocol__(lua_State* tolua_S)
{
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CValueChangeableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CValueChangeableProtocol*>(self), "CValueChangeableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CValueChangeableProtocol*)self), "CValueChangeableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CScrollViewContainer */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollViewContainer_reset00
static int tolua_Lua_cocos2dx_widget_CScrollViewContainer_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollViewContainer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollViewContainer* self = (CScrollViewContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_new00
static int tolua_Lua_cocos2dx_widget_CScrollView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScrollView* tolua_ret = (CScrollView*)  Mtolua_new((CScrollView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_new00_local
static int tolua_Lua_cocos2dx_widget_CScrollView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScrollView* tolua_ret = (CScrollView*)  Mtolua_new((CScrollView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CScrollView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_delete00
static int tolua_Lua_cocos2dx_widget_CScrollView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_init00
static int tolua_Lua_cocos2dx_widget_CScrollView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_create00
static int tolua_Lua_cocos2dx_widget_CScrollView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CScrollView* tolua_ret = (CScrollView*)  CScrollView::create(*contentSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_initWithSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_initWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSize(*tSize);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContainerSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContainerSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCSize tSize = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContainerSize'", NULL);
#endif
  {
   self->setContainerSize(tSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainerSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getContainerSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_getContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainerSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContainerSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getDirection00
static int tolua_Lua_cocos2dx_widget_CScrollView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   CScrollViewDirection tolua_ret = (CScrollViewDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setDirection00
static int tolua_Lua_cocos2dx_widget_CScrollView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CScrollViewDirection eDirection = ((CScrollViewDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(eDirection);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainer of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getContainer00
static int tolua_Lua_cocos2dx_widget_CScrollView_getContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainer'", NULL);
#endif
  {
   CScrollViewContainer* tolua_ret = (CScrollViewContainer*)  self->getContainer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CScrollViewContainer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*contentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getContentOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_getContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentOffset'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getContentOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBounceable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setBounceable00
static int tolua_Lua_cocos2dx_widget_CScrollView_setBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bBounceable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBounceable'", NULL);
#endif
  {
   self->setBounceable(bBounceable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBounceable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isBounceable00
static int tolua_Lua_cocos2dx_widget_CScrollView_isBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBounceable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBounceable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeaccelerateable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setDeaccelerateable00
static int tolua_Lua_cocos2dx_widget_CScrollView_setDeaccelerateable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bDeaccelerateable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeaccelerateable'", NULL);
#endif
  {
   self->setDeaccelerateable(bDeaccelerateable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeaccelerateable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDeaccelerateable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isDeaccelerateable00
static int tolua_Lua_cocos2dx_widget_CScrollView_isDeaccelerateable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDeaccelerateable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDeaccelerateable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDeaccelerateable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDragable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setDragable00
static int tolua_Lua_cocos2dx_widget_CScrollView_setDragable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bDragable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragable'", NULL);
#endif
  {
   self->setDragable(bDragable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDragable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDragable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isDragable00
static int tolua_Lua_cocos2dx_widget_CScrollView_isDragable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDragable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDragable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDragable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchMoved of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isTouchMoved00
static int tolua_Lua_cocos2dx_widget_CScrollView_isTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchMoved();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopContainerAnimation of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_stopContainerAnimation00
static int tolua_Lua_cocos2dx_widget_CScrollView_stopContainerAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopContainerAnimation'", NULL);
#endif
  {
   self->stopContainerAnimation();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopContainerAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getMaxOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_getMaxOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxOffset'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getMaxOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getMinOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_getMinOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinOffset'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getMinOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToTop of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTop00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToTop'", NULL);
#endif
  {
   self->setContentOffsetToTop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToTopInDuration of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopInDuration00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  float fDuration = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToTopInDuration'", NULL);
#endif
  {
   self->setContentOffsetToTopInDuration(fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToTopInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToTopEaseIn of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopEaseIn00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopEaseIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  float fDuration = ((float)  tolua_tonumber(tolua_S,2,0));
  float fRate = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToTopEaseIn'", NULL);
#endif
  {
   self->setContentOffsetToTopEaseIn(fDuration,fRate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToTopEaseIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToBottom of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToBottom00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToBottom'", NULL);
#endif
  {
   self->setContentOffsetToBottom();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToRight of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToRight00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToRight'", NULL);
#endif
  {
   self->setContentOffsetToRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToLeft of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToLeft00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToLeft'", NULL);
#endif
  {
   self->setContentOffsetToLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: relocateContainer of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_relocateContainer00
static int tolua_Lua_cocos2dx_widget_CScrollView_relocateContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relocateContainer'", NULL);
#endif
  {
   self->relocateContainer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'relocateContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffset'", NULL);
#endif
  {
   self->setContentOffset(tOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetInDuration of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetInDuration00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetInDuration'", NULL);
#endif
  {
   self->setContentOffsetInDuration(tOffset,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetEaseIn of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetEaseIn00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetEaseIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
  float fRate = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetEaseIn'", NULL);
#endif
  {
   self->setContentOffsetEaseIn(tOffset,fDuration,fRate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetEaseIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CScrollableProtocol__ of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_get_CScrollView___CScrollableProtocol__
static int tolua_get_CScrollView___CScrollableProtocol__(lua_State* tolua_S)
{
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CScrollableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CScrollableProtocol*>(self), "CScrollableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CScrollableProtocol*)self), "CScrollableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_new00
static int tolua_Lua_cocos2dx_widget_CSlider_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSlider* tolua_ret = (CSlider*)  Mtolua_new((CSlider)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSlider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_new00_local
static int tolua_Lua_cocos2dx_widget_CSlider_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSlider* tolua_ret = (CSlider*)  Mtolua_new((CSlider)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSlider");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_delete00
static int tolua_Lua_cocos2dx_widget_CSlider_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSlider of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_initWithSlider00
static int tolua_Lua_cocos2dx_widget_CSlider_initWithSlider00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pSlider = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSlider'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSlider(pSlider,pProgress);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithSlider'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setContentSize00
static int tolua_Lua_cocos2dx_widget_CSlider_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderImage of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderImage00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderImage'", NULL);
#endif
  {
   self->setSliderImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderTexture of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderTexture00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderTexture'", NULL);
#endif
  {
   self->setSliderTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderSpriteFrame of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderSpriteFrame'", NULL);
#endif
  {
   self->setSliderSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderSpriteFrameName of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderSpriteFrameName'", NULL);
#endif
  {
   self->setSliderSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_create00
static int tolua_Lua_cocos2dx_widget_CSlider_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSlider* tolua_ret = (CSlider*)  CSlider::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSlider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_create01
static int tolua_Lua_cocos2dx_widget_CSlider_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pSlider = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CSlider* tolua_ret = (CSlider*)  CSlider::create(pSlider,pProgress);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSlider");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CSlider_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_get_CSlider___CWidget__
static int tolua_get_CSlider___CWidget__(lua_State* tolua_S)
{
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_new00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  Mtolua_new((CTableViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  Mtolua_new((CTableViewCell)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_delete00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdx of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_getIdx00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_getIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdx'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getIdx();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIdx of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_setIdx00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_setIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIdx'", NULL);
#endif
  {
   self->setIdx(uIdx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_reset00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_new00
static int tolua_Lua_cocos2dx_widget_CTableView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableView* tolua_ret = (CTableView*)  Mtolua_new((CTableView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_new00_local
static int tolua_Lua_cocos2dx_widget_CTableView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableView* tolua_ret = (CTableView*)  Mtolua_new((CTableView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_delete00
static int tolua_Lua_cocos2dx_widget_CTableView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCountOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setCountOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_setCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uCellsCount = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCountOfCell'", NULL);
#endif
  {
   self->setCountOfCell(uCellsCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getCountOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_getCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountOfCell'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCountOfCell();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_setSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tCellsSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeOfCell'", NULL);
#endif
  {
   self->setSizeOfCell(*tCellsSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_getSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeOfCell'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSizeOfCell();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAutoRelocate of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_isAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CTableView_isAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoRelocate'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAutoRelocate();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRelocate of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  bool bAuto = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRelocate'", NULL);
#endif
  {
   self->setAutoRelocate(bAuto);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoRelocateSpeed of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getAutoRelocateSpeed00
static int tolua_Lua_cocos2dx_widget_CTableView_getAutoRelocateSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoRelocateSpeed'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAutoRelocateSpeed();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoRelocateSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRelocateSpeed of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocateSpeed00
static int tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocateSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  float fSpeed = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRelocateSpeed'", NULL);
#endif
  {
   self->setAutoRelocateSpeed(fSpeed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRelocateSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCells of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getCells00
static int tolua_Lua_cocos2dx_widget_CTableView_getCells00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCells'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getCells();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCells'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cellAtIndex of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_cellAtIndex00
static int tolua_Lua_cocos2dx_widget_CTableView_cellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cellAtIndex'", NULL);
#endif
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  self->cellAtIndex(idx);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dequeueCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_dequeueCell00
static int tolua_Lua_cocos2dx_widget_CTableView_dequeueCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dequeueCell'", NULL);
#endif
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  self->dequeueCell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dequeueCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_reloadData00
static int tolua_Lua_cocos2dx_widget_CTableView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithParams of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_initWithParams00
static int tolua_Lua_cocos2dx_widget_CTableView_initWithParams00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"SEL_DataSoucreAdapterHandler",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const CCSize* tCellSize = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
  unsigned int uCellCount = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  CCObject* pListener = ((CCObject*)  tolua_tousertype(tolua_S,5,0));
  SEL_DataSoucreAdapterHandler pHandler = *((SEL_DataSoucreAdapterHandler*)  tolua_tousertype(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithParams'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithParams(*tViewSize,*tCellSize,uCellCount,pListener,pHandler);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithParams'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_create00
static int tolua_Lua_cocos2dx_widget_CTableView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CTableView* tolua_ret = (CTableView*)  CTableView::create(*tViewSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_create01
static int tolua_Lua_cocos2dx_widget_CTableView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"SEL_DataSoucreAdapterHandler",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const CCSize* tCellSize = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
  unsigned int uCellCount = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  CCObject* pListener = ((CCObject*)  tolua_tousertype(tolua_S,5,0));
  SEL_DataSoucreAdapterHandler pHandler = *((SEL_DataSoucreAdapterHandler*)  tolua_tousertype(tolua_S,6,0));
  {
   CTableView* tolua_ret = (CTableView*)  CTableView::create(*tViewSize,*tCellSize,uCellCount,pListener,pHandler);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTableView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CTableView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CDataSourceAdapterProtocol__ of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_get_CTableView___CDataSourceAdapterProtocol__
static int tolua_get_CTableView___CDataSourceAdapterProtocol__(lua_State* tolua_S)
{
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CDataSourceAdapterProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CDataSourceAdapterProtocol*>(self), "CDataSourceAdapterProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CDataSourceAdapterProtocol*)self), "CDataSourceAdapterProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_new00
static int tolua_Lua_cocos2dx_widget_CToggleView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CToggleView* tolua_ret = (CToggleView*)  Mtolua_new((CToggleView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_new00_local
static int tolua_Lua_cocos2dx_widget_CToggleView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CToggleView* tolua_ret = (CToggleView*)  Mtolua_new((CToggleView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CToggleView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_delete00
static int tolua_Lua_cocos2dx_widget_CToggleView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_setEnabled00
static int tolua_Lua_cocos2dx_widget_CToggleView_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChecked of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_setChecked00
static int tolua_Lua_cocos2dx_widget_CToggleView_setChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
  bool bChecked = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChecked'", NULL);
#endif
  {
   self->setChecked(bChecked);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_create00
static int tolua_Lua_cocos2dx_widget_CToggleView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CToggleView* tolua_ret = (CToggleView*)  CToggleView::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_create01
static int tolua_Lua_cocos2dx_widget_CToggleView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  {
   CToggleView* tolua_ret = (CToggleView*)  CToggleView::create(pNormal,pSelected,pDisabled);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CToggleView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWith9Sprite of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_createWith9Sprite00
static int tolua_Lua_cocos2dx_widget_CToggleView_createWith9Sprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,5,NULL));
  {
   CToggleView* tolua_ret = (CToggleView*)  CToggleView::createWith9Sprite(*tSize,pNormal,pSelected,pDisabled);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWith9Sprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCheckableProtocol__ of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_get_CToggleView___CCheckableProtocol__
static int tolua_get_CToggleView___CCheckableProtocol__(lua_State* tolua_S)
{
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCheckableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCheckableProtocol*>(self), "CCheckableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCheckableProtocol*)self), "CCheckableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_new00
static int tolua_Lua_cocos2dx_widget_CWidget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidget* tolua_ret = (CWidget*)  Mtolua_new((CWidget)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_new00_local
static int tolua_Lua_cocos2dx_widget_CWidget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidget* tolua_ret = (CWidget*)  Mtolua_new((CWidget)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWidget");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_delete00
static int tolua_Lua_cocos2dx_widget_CWidget_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_getUserTag00
static int tolua_Lua_cocos2dx_widget_CWidget_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CWidget* self = (const CWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_setUserTag00
static int tolua_Lua_cocos2dx_widget_CWidget_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_getId00
static int tolua_Lua_cocos2dx_widget_CWidget_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_setId00
static int tolua_Lua_cocos2dx_widget_CWidget_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_isEnabled00
static int tolua_Lua_cocos2dx_widget_CWidget_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_setEnabled00
static int tolua_Lua_cocos2dx_widget_CWidget_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidget_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidget_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CWidget_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CWidget_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CWidget */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidget_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CWidget_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidget* self = (CWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_new00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidgetLayout* tolua_ret = (CWidgetLayout*)  Mtolua_new((CWidgetLayout)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWidgetLayout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_new00_local
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidgetLayout* tolua_ret = (CWidgetLayout*)  Mtolua_new((CWidgetLayout)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWidgetLayout");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_delete00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_init00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchPriority of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_getTouchPriority00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_getTouchPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTouchPriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchPriority of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_setTouchPriority00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_setTouchPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
  int nTouchPriority = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchPriority'", NULL);
#endif
  {
   self->setTouchPriority(nTouchPriority);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: findViewById of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_findViewById00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_findViewById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findViewById'", NULL);
#endif
  {
   CCObject* tolua_ret = (CCObject*)  self->findViewById(id);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findViewById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMultiTouchEnabled of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_isMultiTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_isMultiTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CWidgetLayout* self = (const CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMultiTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMultiTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMultiTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMultiTouchEnabled of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_setMultiTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_setMultiTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMultiTouchEnabled'", NULL);
#endif
  {
   self->setMultiTouchEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMultiTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetLayout_create00
static int tolua_Lua_cocos2dx_widget_CWidgetLayout_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidgetLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidgetLayout* tolua_ret = (CWidgetLayout*)  CWidgetLayout::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWidgetLayout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTouchDelegate__ of class  CWidgetLayout */
#ifndef TOLUA_DISABLE_tolua_get_CWidgetLayout___CCTouchDelegate__
static int tolua_get_CWidgetLayout___CCTouchDelegate__(lua_State* tolua_S)
{
  CWidgetLayout* self = (CWidgetLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCTouchDelegate__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCTouchDelegate*>(self), "CCTouchDelegate");
#else
   tolua_pushusertype(tolua_S,(void*)((CCTouchDelegate*)self), "CCTouchDelegate");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  CWidgetTouchProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchBegan00
static int tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetTouchProtocol",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetTouchProtocol* self = (CWidgetTouchProtocol*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   CWidgetTouchModel tolua_ret = (CWidgetTouchModel)  self->onTouchBegan(pTouch);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  CWidgetTouchProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchMoved00
static int tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetTouchProtocol",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetTouchProtocol* self = (CWidgetTouchProtocol*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  CWidgetTouchProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchEnded00
static int tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetTouchProtocol",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetTouchProtocol* self = (CWidgetTouchProtocol*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  CWidgetTouchProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchCancelled00
static int tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetTouchProtocol",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetTouchProtocol* self = (CWidgetTouchProtocol*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CDataSourceAdapterProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00
static int tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CDataSourceAdapterProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CDataSourceAdapterProtocol* tolua_ret = (CDataSourceAdapterProtocol*)  Mtolua_new((CDataSourceAdapterProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CDataSourceAdapterProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CDataSourceAdapterProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CDataSourceAdapterProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CDataSourceAdapterProtocol* tolua_ret = (CDataSourceAdapterProtocol*)  Mtolua_new((CDataSourceAdapterProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CDataSourceAdapterProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPageChangeableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageChangeableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageChangeableProtocol* tolua_ret = (CPageChangeableProtocol*)  Mtolua_new((CPageChangeableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageChangeableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPageChangeableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageChangeableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageChangeableProtocol* tolua_ret = (CPageChangeableProtocol*)  Mtolua_new((CPageChangeableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPageChangeableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CScrollableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScrollableProtocol* tolua_ret = (CScrollableProtocol*)  Mtolua_new((CScrollableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CScrollableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CScrollableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScrollableProtocol* tolua_ret = (CScrollableProtocol*)  Mtolua_new((CScrollableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CScrollableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CProgressEndedProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00
static int tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressEndedProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressEndedProtocol* tolua_ret = (CProgressEndedProtocol*)  Mtolua_new((CProgressEndedProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CProgressEndedProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CProgressEndedProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressEndedProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressEndedProtocol* tolua_ret = (CProgressEndedProtocol*)  Mtolua_new((CProgressEndedProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CProgressEndedProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CValueChangeableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CValueChangeableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CValueChangeableProtocol* tolua_ret = (CValueChangeableProtocol*)  Mtolua_new((CValueChangeableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CValueChangeableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CValueChangeableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CValueChangeableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CValueChangeableProtocol* tolua_ret = (CValueChangeableProtocol*)  Mtolua_new((CValueChangeableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CValueChangeableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CClickableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CClickableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CClickableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CClickableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CClickableProtocol* tolua_ret = (CClickableProtocol*)  Mtolua_new((CClickableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CClickableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CClickableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CClickableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CClickableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CClickableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CClickableProtocol* tolua_ret = (CClickableProtocol*)  Mtolua_new((CClickableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CClickableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLongClickableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLongClickableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLongClickableProtocol* tolua_ret = (CLongClickableProtocol*)  Mtolua_new((CLongClickableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLongClickableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLongClickableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLongClickableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLongClickableProtocol* tolua_ret = (CLongClickableProtocol*)  Mtolua_new((CLongClickableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CLongClickableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCheckableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckableProtocol* tolua_ret = (CCheckableProtocol*)  Mtolua_new((CCheckableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCheckableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCheckableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckableProtocol* tolua_ret = (CCheckableProtocol*)  Mtolua_new((CCheckableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCheckableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChecked of class  CCheckableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckableProtocol_setChecked00
static int tolua_Lua_cocos2dx_widget_CCheckableProtocol_setChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckableProtocol",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckableProtocol* self = (CCheckableProtocol*)  tolua_tousertype(tolua_S,1,0);
  bool bChecked = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChecked'", NULL);
#endif
  {
   self->setChecked(bChecked);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isChecked of class  CCheckableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckableProtocol_isChecked00
static int tolua_Lua_cocos2dx_widget_CCheckableProtocol_isChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCheckableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCheckableProtocol* self = (const CCheckableProtocol*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isChecked'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isChecked();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExclusion of class  CCheckableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckableProtocol_setExclusion00
static int tolua_Lua_cocos2dx_widget_CCheckableProtocol_setExclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckableProtocol",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckableProtocol* self = (CCheckableProtocol*)  tolua_tousertype(tolua_S,1,0);
  int nExclusion = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExclusion'", NULL);
#endif
  {
   self->setExclusion(nExclusion);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExclusion of class  CCheckableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckableProtocol_getExclusion00
static int tolua_Lua_cocos2dx_widget_CCheckableProtocol_getExclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCheckableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCheckableProtocol* self = (const CCheckableProtocol*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExclusion'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getExclusion();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CControlableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlableProtocol_new00
static int tolua_Lua_cocos2dx_widget_CControlableProtocol_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CControlableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CControlableProtocol* tolua_ret = (CControlableProtocol*)  Mtolua_new((CControlableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CControlableProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CControlableProtocol */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlableProtocol_new00_local
static int tolua_Lua_cocos2dx_widget_CControlableProtocol_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CControlableProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CControlableProtocol* tolua_ret = (CControlableProtocol*)  Mtolua_new((CControlableProtocol)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CControlableProtocol");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Lua_cocos2dx_widget_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CButton","CButton","CCNodeRGBA",tolua_collect_CButton);
  #else
  tolua_cclass(tolua_S,"CButton","CButton","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CButton");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CButton_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CButton_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CButton_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CButton_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CButton_init00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CButton_setContentSize00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CButton_setEnabled00);
   tolua_function(tolua_S,"setLabelOffset",tolua_Lua_cocos2dx_widget_CButton_setLabelOffset00);
   tolua_function(tolua_S,"getLabel",tolua_Lua_cocos2dx_widget_CButton_getLabel00);
   tolua_function(tolua_S,"isScale9Enabled",tolua_Lua_cocos2dx_widget_CButton_isScale9Enabled00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_Lua_cocos2dx_widget_CButton_setScale9Enabled00);
   tolua_function(tolua_S,"initWith9Sprite",tolua_Lua_cocos2dx_widget_CButton_initWith9Sprite00);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CButton_initWithFile00);
   tolua_function(tolua_S,"updateCascadeLabelContentSize",tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize00);
   tolua_function(tolua_S,"updateCascadeLabelContentSize",tolua_Lua_cocos2dx_widget_CButton_updateCascadeLabelContentSize01);
   tolua_function(tolua_S,"setNormalImage",tolua_Lua_cocos2dx_widget_CButton_setNormalImage00);
   tolua_function(tolua_S,"setSelectedImage",tolua_Lua_cocos2dx_widget_CButton_setSelectedImage00);
   tolua_function(tolua_S,"setDisabledImage",tolua_Lua_cocos2dx_widget_CButton_setDisabledImage00);
   tolua_function(tolua_S,"setNormalTexture",tolua_Lua_cocos2dx_widget_CButton_setNormalTexture00);
   tolua_function(tolua_S,"setSelectedTexture",tolua_Lua_cocos2dx_widget_CButton_setSelectedTexture00);
   tolua_function(tolua_S,"setDisabledTexture",tolua_Lua_cocos2dx_widget_CButton_setDisabledTexture00);
   tolua_function(tolua_S,"setNormalSpriteFrameName",tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrameName00);
   tolua_function(tolua_S,"setSelectedSpriteFrameName",tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrameName00);
   tolua_function(tolua_S,"setDisabledSpriteFrameName",tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrameName00);
   tolua_function(tolua_S,"setNormalSpriteFrame",tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrame00);
   tolua_function(tolua_S,"setSelectedSpriteFrame",tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrame00);
   tolua_function(tolua_S,"setDisabledSpriteFrame",tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrame00);
   tolua_function(tolua_S,"getNormalImage",tolua_Lua_cocos2dx_widget_CButton_getNormalImage00);
   tolua_function(tolua_S,"getSelectedImage",tolua_Lua_cocos2dx_widget_CButton_getSelectedImage00);
   tolua_function(tolua_S,"getDisabledImage",tolua_Lua_cocos2dx_widget_CButton_getDisabledImage00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CButton_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CButton_create01);
   tolua_function(tolua_S,"createWith9Sprite",tolua_Lua_cocos2dx_widget_CButton_createWith9Sprite00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CButton___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CButton___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CButton___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCheckBox","CCheckBox","CCNodeRGBA",tolua_collect_CCheckBox);
  #else
  tolua_cclass(tolua_S,"CCheckBox","CCheckBox","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCheckBox");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CCheckBox_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CCheckBox_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CCheckBox_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CCheckBox_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CCheckBox_init00);
   tolua_function(tolua_S,"setChecked",tolua_Lua_cocos2dx_widget_CCheckBox_setChecked00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CCheckBox_setEnabled00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CCheckBox_setContentSize00);
   tolua_function(tolua_S,"setNormalImage",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalImage00);
   tolua_function(tolua_S,"setNormalPressImage",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressImage00);
   tolua_function(tolua_S,"setCheckedImage",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedImage00);
   tolua_function(tolua_S,"setCheckedPressImage",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressImage00);
   tolua_function(tolua_S,"setDisabledNormalImage",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalImage00);
   tolua_function(tolua_S,"setDisabledCheckedImage",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedImage00);
   tolua_function(tolua_S,"setNormalSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrame00);
   tolua_function(tolua_S,"setNormalPressSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrame00);
   tolua_function(tolua_S,"setCheckedSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrame00);
   tolua_function(tolua_S,"setCheckedPressSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrame00);
   tolua_function(tolua_S,"setDisabledNormalSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrame00);
   tolua_function(tolua_S,"setDisabledCheckedSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrame00);
   tolua_function(tolua_S,"setNormalTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalTexture00);
   tolua_function(tolua_S,"setNormalPressTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressTexture00);
   tolua_function(tolua_S,"setCheckedTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedTexture00);
   tolua_function(tolua_S,"setCheckedPressTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressTexture00);
   tolua_function(tolua_S,"setDisabledNormalTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalTexture00);
   tolua_function(tolua_S,"setDisabledCheckedTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedTexture00);
   tolua_function(tolua_S,"setNormalSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrameName00);
   tolua_function(tolua_S,"setNormalPressSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrameName00);
   tolua_function(tolua_S,"setCheckedSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrameName00);
   tolua_function(tolua_S,"setCheckedPressSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrameName00);
   tolua_function(tolua_S,"setDisabledNormalSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrameName00);
   tolua_function(tolua_S,"setDisabledCheckedSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrameName00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CCheckBox_create00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CCheckBox___CWidget__,NULL);
   tolua_variable(tolua_S,"__CCheckableProtocol__",tolua_get_CCheckBox___CCheckableProtocol__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CCheckBox___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CCheckBox___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridPageViewPage","CGridPageViewPage","CTableViewCell",tolua_collect_CGridPageViewPage);
  #else
  tolua_cclass(tolua_S,"CGridPageViewPage","CGridPageViewPage","CTableViewCell",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridPageViewPage");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridPageViewPage_delete00);
   tolua_function(tolua_S,"getGirdCells",tolua_Lua_cocos2dx_widget_CGridPageViewPage_getGirdCells00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridPageViewCell","CGridPageViewCell","CTableViewCell",tolua_collect_CGridPageViewCell);
  #else
  tolua_cclass(tolua_S,"CGridPageViewCell","CGridPageViewCell","CTableViewCell",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridPageViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridPageViewCell_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridPageView","CGridPageView","CTableView",tolua_collect_CGridPageView);
  #else
  tolua_cclass(tolua_S,"CGridPageView","CGridPageView","CTableView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridPageView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridPageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridPageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridPageView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridPageView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGridPageView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGridPageView_create01);
   tolua_function(tolua_S,"setCountOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_setCountOfCell00);
   tolua_function(tolua_S,"getCountOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_getCountOfCell00);
   tolua_function(tolua_S,"setSizeOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_setSizeOfCell00);
   tolua_function(tolua_S,"getSizeOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_getSizeOfCell00);
   tolua_function(tolua_S,"setRows",tolua_Lua_cocos2dx_widget_CGridPageView_setRows00);
   tolua_function(tolua_S,"getRows",tolua_Lua_cocos2dx_widget_CGridPageView_getRows00);
   tolua_function(tolua_S,"setColumns",tolua_Lua_cocos2dx_widget_CGridPageView_setColumns00);
   tolua_function(tolua_S,"getColumns",tolua_Lua_cocos2dx_widget_CGridPageView_getColumns00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CGridPageView_reloadData00);
   tolua_variable(tolua_S,"__CPageChangeableProtocol__",tolua_get_CGridPageView___CPageChangeableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridViewCell","CGridViewCell","CPanel",tolua_collect_CGridViewCell);
  #else
  tolua_cclass(tolua_S,"CGridViewCell","CGridViewCell","CPanel",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridViewCell_delete00);
   tolua_function(tolua_S,"getIdx",tolua_Lua_cocos2dx_widget_CGridViewCell_getIdx00);
   tolua_function(tolua_S,"setIdx",tolua_Lua_cocos2dx_widget_CGridViewCell_setIdx00);
   tolua_function(tolua_S,"getRow",tolua_Lua_cocos2dx_widget_CGridViewCell_getRow00);
   tolua_function(tolua_S,"setRow",tolua_Lua_cocos2dx_widget_CGridViewCell_setRow00);
   tolua_function(tolua_S,"reset",tolua_Lua_cocos2dx_widget_CGridViewCell_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridView","CGridView","CScrollView",tolua_collect_CGridView);
  #else
  tolua_cclass(tolua_S,"CGridView","CGridView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridView_delete00);
   tolua_function(tolua_S,"setCountOfCell",tolua_Lua_cocos2dx_widget_CGridView_setCountOfCell00);
   tolua_function(tolua_S,"getCountOfCell",tolua_Lua_cocos2dx_widget_CGridView_getCountOfCell00);
   tolua_function(tolua_S,"setSizeOfCell",tolua_Lua_cocos2dx_widget_CGridView_setSizeOfCell00);
   tolua_function(tolua_S,"getSizeOfCell",tolua_Lua_cocos2dx_widget_CGridView_getSizeOfCell00);
   tolua_function(tolua_S,"setColumns",tolua_Lua_cocos2dx_widget_CGridView_setColumns00);
   tolua_function(tolua_S,"getColumns",tolua_Lua_cocos2dx_widget_CGridView_getColumns00);
   tolua_function(tolua_S,"getRows",tolua_Lua_cocos2dx_widget_CGridView_getRows00);
   tolua_function(tolua_S,"isAutoRelocate",tolua_Lua_cocos2dx_widget_CGridView_isAutoRelocate00);
   tolua_function(tolua_S,"setAutoRelocate",tolua_Lua_cocos2dx_widget_CGridView_setAutoRelocate00);
   tolua_function(tolua_S,"getCells",tolua_Lua_cocos2dx_widget_CGridView_getCells00);
   tolua_function(tolua_S,"cellAtIndex",tolua_Lua_cocos2dx_widget_CGridView_cellAtIndex00);
   tolua_function(tolua_S,"dequeueCell",tolua_Lua_cocos2dx_widget_CGridView_dequeueCell00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CGridView_reloadData00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGridView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGridView_create01);
   tolua_function(tolua_S,"initWithParams",tolua_Lua_cocos2dx_widget_CGridView_initWithParams00);
   tolua_variable(tolua_S,"__CDataSourceAdapterProtocol__",tolua_get_CGridView___CDataSourceAdapterProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CImageView","CImageView","CCSprite",tolua_collect_CImageView);
  #else
  tolua_cclass(tolua_S,"CImageView","CImageView","CCSprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CImageView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CImageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CImageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CImageView_new00_local);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageView_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageView_create02);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageView_createWithTexture01);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrame00);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrameName00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CImageView___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CImageView___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CImageView___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CImageViewScale9","CImageViewScale9","CScale9Sprite",tolua_collect_CImageViewScale9);
  #else
  tolua_cclass(tolua_S,"CImageViewScale9","CImageViewScale9","CScale9Sprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CImageViewScale9");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CImageViewScale9_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create03);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame01);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName01);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create04);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CImageViewScale9___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CImageViewScale9___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CImageViewScale9___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLabel","CLabel","CCLabelTTF",tolua_collect_CLabel);
  #else
  tolua_cclass(tolua_S,"CLabel","CLabel","CCLabelTTF",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLabel");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLabel_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLabel_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLabel_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLabel_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create03);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLabel___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CLabel___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CLabel___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLabelAtlas","CLabelAtlas","CCLabelAtlas",tolua_collect_CLabelAtlas);
  #else
  tolua_cclass(tolua_S,"CLabelAtlas","CLabelAtlas","CCLabelAtlas",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLabelAtlas");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLabelAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLabelAtlas_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelAtlas_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelAtlas_create01);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLabelAtlas___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CLabelAtlas___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CLabelAtlas___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLabelBMFont","CLabelBMFont","CCLabelBMFont",tolua_collect_CLabelBMFont);
  #else
  tolua_cclass(tolua_S,"CLabelBMFont","CLabelBMFont","CCLabelBMFont",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLabelBMFont");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLabelBMFont_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLabelBMFont_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create03);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create04);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLabelBMFont___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CLabelBMFont___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CLabelBMFont___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CListView","CListView","CScrollView",tolua_collect_CListView);
  #else
  tolua_cclass(tolua_S,"CListView","CListView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CListView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CListView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CListView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CListView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CListView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CListView_create00);
   tolua_function(tolua_S,"insertNodeAtLast",tolua_Lua_cocos2dx_widget_CListView_insertNodeAtLast00);
   tolua_function(tolua_S,"insertNodeAtFront",tolua_Lua_cocos2dx_widget_CListView_insertNodeAtFront00);
   tolua_function(tolua_S,"insertNode",tolua_Lua_cocos2dx_widget_CListView_insertNode00);
   tolua_function(tolua_S,"insertNode",tolua_Lua_cocos2dx_widget_CListView_insertNode01);
   tolua_function(tolua_S,"removeNode",tolua_Lua_cocos2dx_widget_CListView_removeNode00);
   tolua_function(tolua_S,"removeNode",tolua_Lua_cocos2dx_widget_CListView_removeNode01);
   tolua_function(tolua_S,"removeFrontNode",tolua_Lua_cocos2dx_widget_CListView_removeFrontNode00);
   tolua_function(tolua_S,"removeLastNode",tolua_Lua_cocos2dx_widget_CListView_removeLastNode00);
   tolua_function(tolua_S,"removeAllNodes",tolua_Lua_cocos2dx_widget_CListView_removeAllNodes00);
   tolua_function(tolua_S,"getNodes",tolua_Lua_cocos2dx_widget_CListView_getNodes00);
   tolua_function(tolua_S,"getNodeCount",tolua_Lua_cocos2dx_widget_CListView_getNodeCount00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPageViewCell","CPageViewCell","CTableViewCell",tolua_collect_CPageViewCell);
  #else
  tolua_cclass(tolua_S,"CPageViewCell","CPageViewCell","CTableViewCell",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPageViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPageViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPageView","CPageView","CTableView",tolua_collect_CPageView);
  #else
  tolua_cclass(tolua_S,"CPageView","CPageView","CTableView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPageView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPageView_new00_local);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CPageView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CPageView_create01);
   tolua_variable(tolua_S,"__CPageChangeableProtocol__",tolua_get_CPageView___CPageChangeableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPanel","CPanel","CCNodeRGBA",tolua_collect_CPanel);
  #else
  tolua_cclass(tolua_S,"CPanel","CPanel","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPanel");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPanel_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPanel_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPanel_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CPanel_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CPanel_init00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CPanel_setContentSize00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CPanel_create00);
   tolua_function(tolua_S,"setBackgroundImage",tolua_Lua_cocos2dx_widget_CPanel_setBackgroundImage00);
   tolua_function(tolua_S,"setBackgroundTexture",tolua_Lua_cocos2dx_widget_CPanel_setBackgroundTexture00);
   tolua_function(tolua_S,"setBackgroundSpriteFrame",tolua_Lua_cocos2dx_widget_CPanel_setBackgroundSpriteFrame00);
   tolua_function(tolua_S,"setBackgroundSpriteFrameName",tolua_Lua_cocos2dx_widget_CPanel_setBackgroundSpriteFrameName00);
   tolua_function(tolua_S,"getBackgroundImage",tolua_Lua_cocos2dx_widget_CPanel_getBackgroundImage00);
   tolua_function(tolua_S,"removeBackgroundImage",tolua_Lua_cocos2dx_widget_CPanel_removeBackgroundImage00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CPanel___CWidget__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPanelColor","CPanelColor","CPanel",tolua_collect_CPanelColor);
  #else
  tolua_cclass(tolua_S,"CPanelColor","CPanelColor","CPanel",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPanelColor");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPanelColor_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPanelColor_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPanelColor_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CPanelColor_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CPanelColor_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CPanelColor_create01);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CPanelColor_init00);
   tolua_function(tolua_S,"initWithColor",tolua_Lua_cocos2dx_widget_CPanelColor_initWithColor00);
   tolua_function(tolua_S,"draw",tolua_Lua_cocos2dx_widget_CPanelColor_draw00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CPanelColor_setContentSize00);
   tolua_function(tolua_S,"getOpacity",tolua_Lua_cocos2dx_widget_CPanelColor_getOpacity00);
   tolua_function(tolua_S,"getDisplayedOpacity",tolua_Lua_cocos2dx_widget_CPanelColor_getDisplayedOpacity00);
   tolua_function(tolua_S,"setOpacity",tolua_Lua_cocos2dx_widget_CPanelColor_setOpacity00);
   tolua_function(tolua_S,"updateDisplayedOpacity",tolua_Lua_cocos2dx_widget_CPanelColor_updateDisplayedOpacity00);
   tolua_function(tolua_S,"isCascadeOpacityEnabled",tolua_Lua_cocos2dx_widget_CPanelColor_isCascadeOpacityEnabled00);
   tolua_function(tolua_S,"setCascadeOpacityEnabled",tolua_Lua_cocos2dx_widget_CPanelColor_setCascadeOpacityEnabled00);
   tolua_function(tolua_S,"getColor",tolua_Lua_cocos2dx_widget_CPanelColor_getColor00);
   tolua_function(tolua_S,"getDisplayedColor",tolua_Lua_cocos2dx_widget_CPanelColor_getDisplayedColor00);
   tolua_function(tolua_S,"setColor",tolua_Lua_cocos2dx_widget_CPanelColor_setColor00);
   tolua_function(tolua_S,"updateDisplayedColor",tolua_Lua_cocos2dx_widget_CPanelColor_updateDisplayedColor00);
   tolua_function(tolua_S,"isCascadeColorEnabled",tolua_Lua_cocos2dx_widget_CPanelColor_isCascadeColorEnabled00);
   tolua_function(tolua_S,"setCascadeColorEnabled",tolua_Lua_cocos2dx_widget_CPanelColor_setCascadeColorEnabled00);
   tolua_function(tolua_S,"setOpacityModifyRGB",tolua_Lua_cocos2dx_widget_CPanelColor_setOpacityModifyRGB00);
   tolua_function(tolua_S,"isOpacityModifyRGB",tolua_Lua_cocos2dx_widget_CPanelColor_isOpacityModifyRGB00);
   tolua_function(tolua_S,"getBlendFunc",tolua_Lua_cocos2dx_widget_CPanelColor_getBlendFunc00);
   tolua_function(tolua_S,"setBlendFunc",tolua_Lua_cocos2dx_widget_CPanelColor_setBlendFunc00);
   tolua_variable(tolua_S,"__CCBlendProtocol__",tolua_get_CPanelColor___CCBlendProtocol__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"eProgressBarDirectionLeftToRight",eProgressBarDirectionLeftToRight);
  tolua_constant(tolua_S,"eProgressBarDirectionRightToLeft",eProgressBarDirectionRightToLeft);
  tolua_constant(tolua_S,"eProgressBarDirectionBottomToTop",eProgressBarDirectionBottomToTop);
  tolua_constant(tolua_S,"eProgressBarDirectionTopToBottom",eProgressBarDirectionTopToBottom);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CProgressBar","CProgressBar","CCNodeRGBA",tolua_collect_CProgressBar);
  #else
  tolua_cclass(tolua_S,"CProgressBar","CProgressBar","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CProgressBar");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CProgressBar_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CProgressBar_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CProgressBar_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CProgressBar_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CProgressBar_init00);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CProgressBar_initWithFile00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CProgressBar_setContentSize00);
   tolua_function(tolua_S,"setValue",tolua_Lua_cocos2dx_widget_CProgressBar_setValue00);
   tolua_function(tolua_S,"getValue",tolua_Lua_cocos2dx_widget_CProgressBar_getValue00);
   tolua_function(tolua_S,"setMaxValue",tolua_Lua_cocos2dx_widget_CProgressBar_setMaxValue00);
   tolua_function(tolua_S,"getMaxValue",tolua_Lua_cocos2dx_widget_CProgressBar_getMaxValue00);
   tolua_function(tolua_S,"setMinValue",tolua_Lua_cocos2dx_widget_CProgressBar_setMinValue00);
   tolua_function(tolua_S,"getMinValue",tolua_Lua_cocos2dx_widget_CProgressBar_getMinValue00);
   tolua_function(tolua_S,"setDirection",tolua_Lua_cocos2dx_widget_CProgressBar_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_Lua_cocos2dx_widget_CProgressBar_getDirection00);
   tolua_function(tolua_S,"startProgress",tolua_Lua_cocos2dx_widget_CProgressBar_startProgress00);
   tolua_function(tolua_S,"startProgressFromTo",tolua_Lua_cocos2dx_widget_CProgressBar_startProgressFromTo00);
   tolua_function(tolua_S,"stopProgress",tolua_Lua_cocos2dx_widget_CProgressBar_stopProgress00);
   tolua_function(tolua_S,"getPercentage",tolua_Lua_cocos2dx_widget_CProgressBar_getPercentage00);
   tolua_function(tolua_S,"isProgressEnded",tolua_Lua_cocos2dx_widget_CProgressBar_isProgressEnded00);
   tolua_function(tolua_S,"setProgressImage",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressImage00);
   tolua_function(tolua_S,"setProgressTexture",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressTexture00);
   tolua_function(tolua_S,"setProgressSpriteFrame",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrame00);
   tolua_function(tolua_S,"setProgressSpriteFrameName",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrameName00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CProgressBar_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CProgressBar_create01);
   tolua_function(tolua_S,"setBackgroundImage",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundImage00);
   tolua_function(tolua_S,"setBackgroundTexture",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundTexture00);
   tolua_function(tolua_S,"setBackgroundSpriteFrame",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrame00);
   tolua_function(tolua_S,"setBackgroundSpriteFrameName",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrameName00);
   tolua_function(tolua_S,"getBackgroundImage",tolua_Lua_cocos2dx_widget_CProgressBar_getBackgroundImage00);
   tolua_function(tolua_S,"removeBackgroundImage",tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundImage00);
   tolua_variable(tolua_S,"__CProgressEndedProtocol__",tolua_get_CProgressBar___CProgressEndedProtocol__,NULL);
   tolua_variable(tolua_S,"__CValueChangeableProtocol__",tolua_get_CProgressBar___CValueChangeableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"eScrollViewDirectionHorizontal",eScrollViewDirectionHorizontal);
  tolua_constant(tolua_S,"eScrollViewDirectionVertical",eScrollViewDirectionVertical);
  tolua_constant(tolua_S,"eScrollViewDirectionBoth",eScrollViewDirectionBoth);
  tolua_cclass(tolua_S,"CScrollViewContainer","CScrollViewContainer","CPanel",NULL);
  tolua_beginmodule(tolua_S,"CScrollViewContainer");
   tolua_function(tolua_S,"reset",tolua_Lua_cocos2dx_widget_CScrollViewContainer_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CScrollView","CScrollView","CPanel",tolua_collect_CScrollView);
  #else
  tolua_cclass(tolua_S,"CScrollView","CScrollView","CPanel",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CScrollView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CScrollView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CScrollView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CScrollView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CScrollView_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CScrollView_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScrollView_create00);
   tolua_function(tolua_S,"initWithSize",tolua_Lua_cocos2dx_widget_CScrollView_initWithSize00);
   tolua_function(tolua_S,"setContainerSize",tolua_Lua_cocos2dx_widget_CScrollView_setContainerSize00);
   tolua_function(tolua_S,"getContainerSize",tolua_Lua_cocos2dx_widget_CScrollView_getContainerSize00);
   tolua_function(tolua_S,"getDirection",tolua_Lua_cocos2dx_widget_CScrollView_getDirection00);
   tolua_function(tolua_S,"setDirection",tolua_Lua_cocos2dx_widget_CScrollView_setDirection00);
   tolua_function(tolua_S,"getContainer",tolua_Lua_cocos2dx_widget_CScrollView_getContainer00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CScrollView_setContentSize00);
   tolua_function(tolua_S,"getContentOffset",tolua_Lua_cocos2dx_widget_CScrollView_getContentOffset00);
   tolua_function(tolua_S,"setBounceable",tolua_Lua_cocos2dx_widget_CScrollView_setBounceable00);
   tolua_function(tolua_S,"isBounceable",tolua_Lua_cocos2dx_widget_CScrollView_isBounceable00);
   tolua_function(tolua_S,"setDeaccelerateable",tolua_Lua_cocos2dx_widget_CScrollView_setDeaccelerateable00);
   tolua_function(tolua_S,"isDeaccelerateable",tolua_Lua_cocos2dx_widget_CScrollView_isDeaccelerateable00);
   tolua_function(tolua_S,"setDragable",tolua_Lua_cocos2dx_widget_CScrollView_setDragable00);
   tolua_function(tolua_S,"isDragable",tolua_Lua_cocos2dx_widget_CScrollView_isDragable00);
   tolua_function(tolua_S,"isTouchMoved",tolua_Lua_cocos2dx_widget_CScrollView_isTouchMoved00);
   tolua_function(tolua_S,"stopContainerAnimation",tolua_Lua_cocos2dx_widget_CScrollView_stopContainerAnimation00);
   tolua_function(tolua_S,"getMaxOffset",tolua_Lua_cocos2dx_widget_CScrollView_getMaxOffset00);
   tolua_function(tolua_S,"getMinOffset",tolua_Lua_cocos2dx_widget_CScrollView_getMinOffset00);
   tolua_function(tolua_S,"setContentOffsetToTop",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTop00);
   tolua_function(tolua_S,"setContentOffsetToTopInDuration",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopInDuration00);
   tolua_function(tolua_S,"setContentOffsetToTopEaseIn",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopEaseIn00);
   tolua_function(tolua_S,"setContentOffsetToBottom",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToBottom00);
   tolua_function(tolua_S,"setContentOffsetToRight",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToRight00);
   tolua_function(tolua_S,"setContentOffsetToLeft",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToLeft00);
   tolua_function(tolua_S,"relocateContainer",tolua_Lua_cocos2dx_widget_CScrollView_relocateContainer00);
   tolua_function(tolua_S,"setContentOffset",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffset00);
   tolua_function(tolua_S,"setContentOffsetInDuration",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetInDuration00);
   tolua_function(tolua_S,"setContentOffsetEaseIn",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetEaseIn00);
   tolua_variable(tolua_S,"__CScrollableProtocol__",tolua_get_CScrollView___CScrollableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CSlider","CSlider","CProgressBar",tolua_collect_CSlider);
  #else
  tolua_cclass(tolua_S,"CSlider","CSlider","CProgressBar",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CSlider");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CSlider_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CSlider_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CSlider_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CSlider_delete00);
   tolua_function(tolua_S,"initWithSlider",tolua_Lua_cocos2dx_widget_CSlider_initWithSlider00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CSlider_setContentSize00);
   tolua_function(tolua_S,"setSliderImage",tolua_Lua_cocos2dx_widget_CSlider_setSliderImage00);
   tolua_function(tolua_S,"setSliderTexture",tolua_Lua_cocos2dx_widget_CSlider_setSliderTexture00);
   tolua_function(tolua_S,"setSliderSpriteFrame",tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrame00);
   tolua_function(tolua_S,"setSliderSpriteFrameName",tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrameName00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CSlider_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CSlider_create01);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CSlider___CWidget__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CTableViewCell","CTableViewCell","CPanel",tolua_collect_CTableViewCell);
  #else
  tolua_cclass(tolua_S,"CTableViewCell","CTableViewCell","CPanel",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CTableViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CTableViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CTableViewCell_delete00);
   tolua_function(tolua_S,"getIdx",tolua_Lua_cocos2dx_widget_CTableViewCell_getIdx00);
   tolua_function(tolua_S,"setIdx",tolua_Lua_cocos2dx_widget_CTableViewCell_setIdx00);
   tolua_function(tolua_S,"reset",tolua_Lua_cocos2dx_widget_CTableViewCell_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CTableView","CTableView","CScrollView",tolua_collect_CTableView);
  #else
  tolua_cclass(tolua_S,"CTableView","CTableView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CTableView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CTableView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CTableView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CTableView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CTableView_delete00);
   tolua_function(tolua_S,"setCountOfCell",tolua_Lua_cocos2dx_widget_CTableView_setCountOfCell00);
   tolua_function(tolua_S,"getCountOfCell",tolua_Lua_cocos2dx_widget_CTableView_getCountOfCell00);
   tolua_function(tolua_S,"setSizeOfCell",tolua_Lua_cocos2dx_widget_CTableView_setSizeOfCell00);
   tolua_function(tolua_S,"getSizeOfCell",tolua_Lua_cocos2dx_widget_CTableView_getSizeOfCell00);
   tolua_function(tolua_S,"isAutoRelocate",tolua_Lua_cocos2dx_widget_CTableView_isAutoRelocate00);
   tolua_function(tolua_S,"setAutoRelocate",tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocate00);
   tolua_function(tolua_S,"getAutoRelocateSpeed",tolua_Lua_cocos2dx_widget_CTableView_getAutoRelocateSpeed00);
   tolua_function(tolua_S,"setAutoRelocateSpeed",tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocateSpeed00);
   tolua_function(tolua_S,"getCells",tolua_Lua_cocos2dx_widget_CTableView_getCells00);
   tolua_function(tolua_S,"cellAtIndex",tolua_Lua_cocos2dx_widget_CTableView_cellAtIndex00);
   tolua_function(tolua_S,"dequeueCell",tolua_Lua_cocos2dx_widget_CTableView_dequeueCell00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CTableView_reloadData00);
   tolua_function(tolua_S,"initWithParams",tolua_Lua_cocos2dx_widget_CTableView_initWithParams00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CTableView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CTableView_create01);
   tolua_variable(tolua_S,"__CDataSourceAdapterProtocol__",tolua_get_CTableView___CDataSourceAdapterProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CToggleView","CToggleView","CButton",tolua_collect_CToggleView);
  #else
  tolua_cclass(tolua_S,"CToggleView","CToggleView","CButton",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CToggleView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CToggleView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CToggleView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CToggleView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CToggleView_delete00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CToggleView_setEnabled00);
   tolua_function(tolua_S,"setChecked",tolua_Lua_cocos2dx_widget_CToggleView_setChecked00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CToggleView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CToggleView_create01);
   tolua_function(tolua_S,"createWith9Sprite",tolua_Lua_cocos2dx_widget_CToggleView_createWith9Sprite00);
   tolua_variable(tolua_S,"__CCheckableProtocol__",tolua_get_CToggleView___CCheckableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CWidget","CWidget","CWidgetTouchProtocol",tolua_collect_CWidget);
  #else
  tolua_cclass(tolua_S,"CWidget","CWidget","CWidgetTouchProtocol",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CWidget");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CWidget_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CWidget_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CWidget_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CWidget_delete00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CWidget_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CWidget_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CWidget_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CWidget_setId00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CWidget_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CWidget_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CWidget_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CWidget_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CWidget_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CWidget_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CWidget_isTouchInterrupted00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CWidgetLayout","CWidgetLayout","CCNodeRGBA",tolua_collect_CWidgetLayout);
  #else
  tolua_cclass(tolua_S,"CWidgetLayout","CWidgetLayout","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CWidgetLayout");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CWidgetLayout_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CWidgetLayout_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CWidgetLayout_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CWidgetLayout_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CWidgetLayout_init00);
   tolua_function(tolua_S,"getTouchPriority",tolua_Lua_cocos2dx_widget_CWidgetLayout_getTouchPriority00);
   tolua_function(tolua_S,"setTouchPriority",tolua_Lua_cocos2dx_widget_CWidgetLayout_setTouchPriority00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetLayout_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetLayout_setTouchEnabled00);
   tolua_function(tolua_S,"findViewById",tolua_Lua_cocos2dx_widget_CWidgetLayout_findViewById00);
   tolua_function(tolua_S,"isMultiTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetLayout_isMultiTouchEnabled00);
   tolua_function(tolua_S,"setMultiTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetLayout_setMultiTouchEnabled00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CWidgetLayout_create00);
   tolua_variable(tolua_S,"__CCTouchDelegate__",tolua_get_CWidgetLayout___CCTouchDelegate__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"eWidgetTouchNone",eWidgetTouchNone);
  tolua_constant(tolua_S,"eWidgetTouchTransient",eWidgetTouchTransient);
  tolua_constant(tolua_S,"eWidgetTouchSustained",eWidgetTouchSustained);
  tolua_cclass(tolua_S,"CWidgetTouchProtocol","CWidgetTouchProtocol","",NULL);
  tolua_beginmodule(tolua_S,"CWidgetTouchProtocol");
   tolua_function(tolua_S,"onTouchBegan",tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_Lua_cocos2dx_widget_CWidgetTouchProtocol_onTouchCancelled00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CDataSourceAdapterProtocol","CDataSourceAdapterProtocol","",tolua_collect_CDataSourceAdapterProtocol);
  #else
  tolua_cclass(tolua_S,"CDataSourceAdapterProtocol","CDataSourceAdapterProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CDataSourceAdapterProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CDataSourceAdapterProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPageChangeableProtocol","CPageChangeableProtocol","",tolua_collect_CPageChangeableProtocol);
  #else
  tolua_cclass(tolua_S,"CPageChangeableProtocol","CPageChangeableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPageChangeableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPageChangeableProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CScrollableProtocol","CScrollableProtocol","",tolua_collect_CScrollableProtocol);
  #else
  tolua_cclass(tolua_S,"CScrollableProtocol","CScrollableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CScrollableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CScrollableProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CProgressEndedProtocol","CProgressEndedProtocol","",tolua_collect_CProgressEndedProtocol);
  #else
  tolua_cclass(tolua_S,"CProgressEndedProtocol","CProgressEndedProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CProgressEndedProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CProgressEndedProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CValueChangeableProtocol","CValueChangeableProtocol","",tolua_collect_CValueChangeableProtocol);
  #else
  tolua_cclass(tolua_S,"CValueChangeableProtocol","CValueChangeableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CValueChangeableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CValueChangeableProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CClickableProtocol","CClickableProtocol","",tolua_collect_CClickableProtocol);
  #else
  tolua_cclass(tolua_S,"CClickableProtocol","CClickableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CClickableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CClickableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CClickableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CClickableProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLongClickableProtocol","CLongClickableProtocol","",tolua_collect_CLongClickableProtocol);
  #else
  tolua_cclass(tolua_S,"CLongClickableProtocol","CLongClickableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLongClickableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLongClickableProtocol_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCheckableProtocol","CCheckableProtocol","",tolua_collect_CCheckableProtocol);
  #else
  tolua_cclass(tolua_S,"CCheckableProtocol","CCheckableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCheckableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CCheckableProtocol_new00_local);
   tolua_function(tolua_S,"setChecked",tolua_Lua_cocos2dx_widget_CCheckableProtocol_setChecked00);
   tolua_function(tolua_S,"isChecked",tolua_Lua_cocos2dx_widget_CCheckableProtocol_isChecked00);
   tolua_function(tolua_S,"setExclusion",tolua_Lua_cocos2dx_widget_CCheckableProtocol_setExclusion00);
   tolua_function(tolua_S,"getExclusion",tolua_Lua_cocos2dx_widget_CCheckableProtocol_getExclusion00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CControlableProtocol","CControlableProtocol","",tolua_collect_CControlableProtocol);
  #else
  tolua_cclass(tolua_S,"CControlableProtocol","CControlableProtocol","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CControlableProtocol");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CControlableProtocol_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CControlableProtocol_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CControlableProtocol_new00_local);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Lua_cocos2dx_widget (lua_State* tolua_S) {
 return tolua_Lua_cocos2dx_widget_open(tolua_S);
};
#endif

