<!DOCTYPE html>
<!-- saved from url=(0045)https://www.acmicpc.net/submit/10869/92001236 -->
<html lang="ko"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	<title>10869번 제출</title><meta name="viewport" content="width=device-width, initial-scale=1.0"><meta name="author" content="스타트링크 (Startlink)"><meta name="keywords" content="ACM-ICPC, ICPC, 프로그래밍, 온라인 저지, 정보올림피아드, 코딩, 알고리즘, 대회, 올림피아드, 자료구조"><meta http-equiv="X-UA-Compatible" content="IE=edge"><meta property="og:type" content="website"><meta property="og:image" content="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/images/boj-og.png"><meta property="og:site_name" content="Baekjoon Online Judge"><meta name="format-detection" content="telephone=no"><meta name="msapplication-config" content="none"><link rel="apple-touch-icon" sizes="180x180" href="https://www.acmicpc.net/apple-touch-icon.png"><link rel="icon" type="image/png" sizes="32x32" href="https://www.acmicpc.net/favicon-32x32.png"><link rel="icon" type="image/png" sizes="16x16" href="https://www.acmicpc.net/favicon-16x16.png"><link rel="manifest" href="https://www.acmicpc.net/site.webmanifest"><link rel="mask-icon" href="https://www.acmicpc.net/safari-pinned-tab.svg" color="#0076c0"><meta name="msapplication-TileColor" content="#00aba9"><meta name="theme-color" content="#ffffff"><link rel="stylesheet" href="./1_1_files/bootstrap.min.css"><link rel="stylesheet" href="./1_1_files/style.css"><link href="./1_1_files/css" rel="stylesheet"><link rel="stylesheet" href="./1_1_files/connect.css"><link rel="stylesheet" href="./1_1_files/result.css"><link rel="stylesheet" href="./1_1_files/label.css"><link rel="stylesheet" href="./1_1_files/custom.css"><link rel="stylesheet" href="./1_1_files/font-awesome.css"><link rel="stylesheet" href="./1_1_files/blue.css"><link rel="stylesheet" href="./1_1_files/pace.css">
<script src="./1_1_files/clike.js.다운로드"></script><script src="./1_1_files/1670563073163149" async=""></script><script async="" src="./1_1_files/fbevents.js.다운로드"></script><script src="./1_1_files/sdk.js.다운로드" async="" crossorigin="anonymous"></script><script src="./1_1_files/f.txt"></script><script src="./1_1_files/f(1).txt"></script><script id="facebook-jssdk" src="./1_1_files/sdk(1).js.다운로드"></script><script async="" src="./1_1_files/js"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  gtag('config', 'G-C81GGQEMJZ');
</script>

<link rel="stylesheet" href="./1_1_files/noty.min.css"><meta name="username" content="ksj855210">
    
<link type="text/css" rel="stylesheet" href="./1_1_files/codemirror.min.css"><link type="text/css" rel="stylesheet" href="./1_1_files/codemirror-style.css">
<link type="text/css" rel="stylesheet" href="./1_1_files/chosen.min.css">

<meta name="problem-id" content="10869">

<link rel="stylesheet" href="./1_1_files/micromodal.css">

<meta http-equiv="origin-trial" content="AlK2UR5SkAlj8jjdEc9p3F3xuFYlF6LYjAML3EOqw1g26eCwWPjdmecULvBH5MVPoqKYrOfPhYVL71xAXI1IBQoAAAB8eyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiV2ViVmlld1hSZXF1ZXN0ZWRXaXRoRGVwcmVjYXRpb24iLCJleHBpcnkiOjE3NTgwNjcxOTksImlzU3ViZG9tYWluIjp0cnVlfQ=="><meta http-equiv="origin-trial" content="Amm8/NmvvQfhwCib6I7ZsmUxiSCfOxWxHayJwyU1r3gRIItzr7bNQid6O8ZYaE1GSQTa69WwhPC9flq/oYkRBwsAAACCeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXN5bmRpY2F0aW9uLmNvbTo0NDMiLCJmZWF0dXJlIjoiV2ViVmlld1hSZXF1ZXN0ZWRXaXRoRGVwcmVjYXRpb24iLCJleHBpcnkiOjE3NTgwNjcxOTksImlzU3ViZG9tYWluIjp0cnVlfQ=="><meta http-equiv="origin-trial" content="A9wSqI5i0iwGdf6L1CERNdmsTPgVu44ewj8QxTBYgsv1LCPUVF7YmWOvTappqB1139jAymxUW/RO8zmMqo4zlAAAAACNeyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiRmxlZGdlQmlkZGluZ0FuZEF1Y3Rpb25TZXJ2ZXIiLCJleHBpcnkiOjE3MzY4MTI4MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><meta http-equiv="origin-trial" content="A+d7vJfYtay4OUbdtRPZA3y7bKQLsxaMEPmxgfhBGqKXNrdkCQeJlUwqa6EBbSfjwFtJWTrWIioXeMW+y8bWAgQAAACTeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXN5bmRpY2F0aW9uLmNvbTo0NDMiLCJmZWF0dXJlIjoiRmxlZGdlQmlkZGluZ0FuZEF1Y3Rpb25TZXJ2ZXIiLCJleHBpcnkiOjE3MzY4MTI4MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><meta http-equiv="origin-trial" content="AlK2UR5SkAlj8jjdEc9p3F3xuFYlF6LYjAML3EOqw1g26eCwWPjdmecULvBH5MVPoqKYrOfPhYVL71xAXI1IBQoAAAB8eyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiV2ViVmlld1hSZXF1ZXN0ZWRXaXRoRGVwcmVjYXRpb24iLCJleHBpcnkiOjE3NTgwNjcxOTksImlzU3ViZG9tYWluIjp0cnVlfQ=="><meta http-equiv="origin-trial" content="Amm8/NmvvQfhwCib6I7ZsmUxiSCfOxWxHayJwyU1r3gRIItzr7bNQid6O8ZYaE1GSQTa69WwhPC9flq/oYkRBwsAAACCeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXN5bmRpY2F0aW9uLmNvbTo0NDMiLCJmZWF0dXJlIjoiV2ViVmlld1hSZXF1ZXN0ZWRXaXRoRGVwcmVjYXRpb24iLCJleHBpcnkiOjE3NTgwNjcxOTksImlzU3ViZG9tYWluIjp0cnVlfQ=="><meta http-equiv="origin-trial" content="A9wSqI5i0iwGdf6L1CERNdmsTPgVu44ewj8QxTBYgsv1LCPUVF7YmWOvTappqB1139jAymxUW/RO8zmMqo4zlAAAAACNeyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiRmxlZGdlQmlkZGluZ0FuZEF1Y3Rpb25TZXJ2ZXIiLCJleHBpcnkiOjE3MzY4MTI4MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><meta http-equiv="origin-trial" content="A+d7vJfYtay4OUbdtRPZA3y7bKQLsxaMEPmxgfhBGqKXNrdkCQeJlUwqa6EBbSfjwFtJWTrWIioXeMW+y8bWAgQAAACTeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXN5bmRpY2F0aW9uLmNvbTo0NDMiLCJmZWF0dXJlIjoiRmxlZGdlQmlkZGluZ0FuZEF1Y3Rpb25TZXJ2ZXIiLCJleHBpcnkiOjE3MzY4MTI4MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><script src="./1_1_files/noerrors.js.다운로드" charset="UTF-8"></script><style type="text/css" data-fbcssmodules="css:fb.css.base css:fb.css.dialog css:fb.css.iframewidget">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0px;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:'lucida grande', tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0px;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:'lucida grande', tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82,82,82,.7);position:absolute;top:-10000px;z-index:10001}.fb_dialog_advanced{border-radius:8px;padding:10px}.fb_dialog_content{background:#fff;color:#373737}.fb_dialog_close_icon{background:url(https://connect.facebook.net/rsrc.php/v4/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{left:5px;right:auto;top:5px}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://connect.facebook.net/rsrc.php/v4/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://connect.facebook.net/rsrc.php/v4/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://connect.facebook.net/rsrc.php/v4/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{height:100%;left:0px;margin:0px;overflow:visible;position:absolute;top:-10000px;transform:none;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://connect.facebook.net/rsrc.php/v4/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{background:none;height:auto;min-height:initial;min-width:initial;width:auto}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{clear:both;color:white;display:block;font-size:18px;padding-top:20px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0,0,0,.4);bottom:0;left:0;min-height:100%;position:absolute;right:0;top:0;width:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_mobile .fb_dialog_iframe{position:sticky;top:0}.fb_dialog_content .dialog_header{background:linear-gradient(from(#738aba), to(#2c4987));border-bottom:1px solid;border-color:#043b87;box-shadow:white 0px 1px 1px -1px inset;color:#fff;font:bold 14px Helvetica, sans-serif;text-overflow:ellipsis;text-shadow:rgba(0,30,84,.296875) 0px -1px 0px;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:linear-gradient(from(#4267b2), to(#2a4887));background-clip:padding-box;border:1px solid #29487d;border-radius:3px;display:inline-block;line-height:18px;margin-top:3px;max-width:85px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{background:none;border:none;color:white;font:bold 12px Helvetica, sans-serif;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0,30,84,.296875) 0px -1px 0px}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://connect.facebook.net/rsrc.php/v4/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #4a4a4a;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f5f6f7;border:1px solid #4a4a4a;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://connect.facebook.net/rsrc.php/v4/yD/r/t-wz8gw1xG1.png);background-position:50% 50%;background-repeat:no-repeat;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}</style><style type="text/css">.CtxtMenu_InfoClose {  top:.2em; right:.2em;}
.CtxtMenu_InfoContent {  overflow:auto; text-align:left; font-size:80%;  padding:.4em .6em; border:1px inset; margin:1em 0px;  max-height:20em; max-width:30em; background-color:#EEEEEE;  white-space:normal;}
.CtxtMenu_Info.CtxtMenu_MousePost {outline:none;}
.CtxtMenu_Info {  position:fixed; left:50%; width:auto; text-align:center;  border:3px outset; padding:1em 2em; background-color:#DDDDDD;  color:black;  cursor:default; font-family:message-box; font-size:120%;  font-style:normal; text-indent:0; text-transform:none;  line-height:normal; letter-spacing:normal; word-spacing:normal;  word-wrap:normal; white-space:nowrap; float:none; z-index:201;  border-radius: 15px;                     /* Opera 10.5 and IE9 */  -webkit-border-radius:15px;               /* Safari and Chrome */  -moz-border-radius:15px;                  /* Firefox */  -khtml-border-radius:15px;                /* Konqueror */  box-shadow:0px 10px 20px #808080;         /* Opera 10.5 and IE9 */  -webkit-box-shadow:0px 10px 20px #808080; /* Safari 3 & Chrome */  -moz-box-shadow:0px 10px 20px #808080;    /* Forefox 3.5 */  -khtml-box-shadow:0px 10px 20px #808080;  /* Konqueror */  filter:progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color="gray", Positive="true"); /* IE */}
</style><style type="text/css">.CtxtMenu_MenuClose {  position:absolute;  cursor:pointer;  display:inline-block;  border:2px solid #AAA;  border-radius:18px;  -webkit-border-radius: 18px;             /* Safari and Chrome */  -moz-border-radius: 18px;                /* Firefox */  -khtml-border-radius: 18px;              /* Konqueror */  font-family: "Courier New", Courier;  font-size:24px;  color:#F0F0F0}
.CtxtMenu_MenuClose span {  display:block; background-color:#AAA; border:1.5px solid;  border-radius:18px;  -webkit-border-radius: 18px;             /* Safari and Chrome */  -moz-border-radius: 18px;                /* Firefox */  -khtml-border-radius: 18px;              /* Konqueror */  line-height:0;  padding:8px 0 6px     /* may need to be browser-specific */}
.CtxtMenu_MenuClose:hover {  color:white!important;  border:2px solid #CCC!important}
.CtxtMenu_MenuClose:hover span {  background-color:#CCC!important}
.CtxtMenu_MenuClose:hover:focus {  outline:none}
</style><style type="text/css">.CtxtMenu_Menu {  position:absolute;  background-color:white;  color:black;  width:auto; padding:5px 0px;  border:1px solid #CCCCCC; margin:0; cursor:default;  font: menu; text-align:left; text-indent:0; text-transform:none;  line-height:normal; letter-spacing:normal; word-spacing:normal;  word-wrap:normal; white-space:nowrap; float:none; z-index:201;  border-radius: 5px;                     /* Opera 10.5 and IE9 */  -webkit-border-radius: 5px;             /* Safari and Chrome */  -moz-border-radius: 5px;                /* Firefox */  -khtml-border-radius: 5px;              /* Konqueror */  box-shadow:0px 10px 20px #808080;         /* Opera 10.5 and IE9 */  -webkit-box-shadow:0px 10px 20px #808080; /* Safari 3 & Chrome */  -moz-box-shadow:0px 10px 20px #808080;    /* Forefox 3.5 */  -khtml-box-shadow:0px 10px 20px #808080;  /* Konqueror */}
.CtxtMenu_MenuItem {  padding: 1px 2em;  background:transparent;}
.CtxtMenu_MenuArrow {  position:absolute; right:.5em; padding-top:.25em; color:#666666;  font-family: null; font-size: .75em}
.CtxtMenu_MenuActive .CtxtMenu_MenuArrow {color:white}
.CtxtMenu_MenuArrow.CtxtMenu_RTL {left:.5em; right:auto}
.CtxtMenu_MenuCheck {  position:absolute; left:.7em;  font-family: null}
.CtxtMenu_MenuCheck.CtxtMenu_RTL { right:.7em; left:auto }
.CtxtMenu_MenuRadioCheck {  position:absolute; left: .7em;}
.CtxtMenu_MenuRadioCheck.CtxtMenu_RTL {  right: .7em; left:auto}
.CtxtMenu_MenuInputBox {  padding-left: 1em; right:.5em; color:#666666;  font-family: null;}
.CtxtMenu_MenuInputBox.CtxtMenu_RTL {  left: .1em;}
.CtxtMenu_MenuComboBox {  left:.1em; padding-bottom:.5em;}
.CtxtMenu_MenuSlider {  left: .1em;}
.CtxtMenu_SliderValue {  position:absolute; right:.1em; padding-top:.25em; color:#333333;  font-size: .75em}
.CtxtMenu_SliderBar {  outline: none; background: #d3d3d3}
.CtxtMenu_MenuLabel {  padding: 1px 2em 3px 1.33em;  font-style:italic}
.CtxtMenu_MenuRule {  border-top: 1px solid #DDDDDD;  margin: 4px 3px;}
.CtxtMenu_MenuDisabled {  color:GrayText}
.CtxtMenu_MenuActive {  background-color: #606872;  color: white;}
.CtxtMenu_MenuDisabled:focus {  background-color: #E8E8E8}
.CtxtMenu_MenuLabel:focus {  background-color: #E8E8E8}
.CtxtMenu_ContextMenu:focus {  outline:none}
.CtxtMenu_ContextMenu .CtxtMenu_MenuItem:focus {  outline:none}
.CtxtMenu_SelectionMenu {  position:relative; float:left;  border-bottom: none; -webkit-box-shadow:none; -webkit-border-radius:0px; }
.CtxtMenu_SelectionItem {  padding-right: 1em;}
.CtxtMenu_Selection {  right: 40%; width:50%; }
.CtxtMenu_SelectionBox {  padding: 0em; max-height:20em; max-width: none;  background-color:#FFFFFF;}
.CtxtMenu_SelectionDivider {  clear: both; border-top: 2px solid #000000;}
.CtxtMenu_Menu .CtxtMenu_MenuClose {  top:-10px; left:-10px}
</style><style id="MJX-CHTML-styles">
mjx-container[jax="CHTML"] {
  line-height: 0;
}

mjx-container [space="1"] {
  margin-left: .111em;
}

mjx-container [space="2"] {
  margin-left: .167em;
}

mjx-container [space="3"] {
  margin-left: .222em;
}

mjx-container [space="4"] {
  margin-left: .278em;
}

mjx-container [space="5"] {
  margin-left: .333em;
}

mjx-container [rspace="1"] {
  margin-right: .111em;
}

mjx-container [rspace="2"] {
  margin-right: .167em;
}

mjx-container [rspace="3"] {
  margin-right: .222em;
}

mjx-container [rspace="4"] {
  margin-right: .278em;
}

mjx-container [rspace="5"] {
  margin-right: .333em;
}

mjx-container [size="s"] {
  font-size: 70.7%;
}

mjx-container [size="ss"] {
  font-size: 50%;
}

mjx-container [size="Tn"] {
  font-size: 60%;
}

mjx-container [size="sm"] {
  font-size: 85%;
}

mjx-container [size="lg"] {
  font-size: 120%;
}

mjx-container [size="Lg"] {
  font-size: 144%;
}

mjx-container [size="LG"] {
  font-size: 173%;
}

mjx-container [size="hg"] {
  font-size: 207%;
}

mjx-container [size="HG"] {
  font-size: 249%;
}

mjx-container [width="full"] {
  width: 100%;
}

mjx-box {
  display: inline-block;
}

mjx-block {
  display: block;
}

mjx-itable {
  display: inline-table;
}

mjx-row {
  display: table-row;
}

mjx-row > * {
  display: table-cell;
}

mjx-mtext {
  display: inline-block;
}

mjx-mstyle {
  display: inline-block;
}

mjx-merror {
  display: inline-block;
  color: red;
  background-color: yellow;
}

mjx-mphantom {
  visibility: hidden;
}

_::-webkit-full-page-media, _:future, :root mjx-container {
  will-change: opacity;
}

mjx-copytext {
  display: inline-block;
  position: absolute;
  top: 0;
  left: 0;
  width: 0;
  height: 0;
  opacity: 0;
  overflow: hidden;
}

mjx-assistive-mml {
  position: absolute !important;
  top: 0px;
  left: 0px;
  clip: rect(1px, 1px, 1px, 1px);
  padding: 1px 0px 0px 0px !important;
  border: 0px !important;
  display: block !important;
  width: auto !important;
  overflow: hidden !important;
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -khtml-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

mjx-assistive-mml[display="block"] {
  width: 100% !important;
}

mjx-c::before {
  display: block;
  width: 0;
}

.MJX-TEX {
  font-family: MJXZERO, MJXTEX;
}

.TEX-B {
  font-family: MJXZERO, MJXTEX-B;
}

.TEX-I {
  font-family: MJXZERO, MJXTEX-I;
}

.TEX-MI {
  font-family: MJXZERO, MJXTEX-MI;
}

.TEX-BI {
  font-family: MJXZERO, MJXTEX-BI;
}

.TEX-S1 {
  font-family: MJXZERO, MJXTEX-S1;
}

.TEX-S2 {
  font-family: MJXZERO, MJXTEX-S2;
}

.TEX-S3 {
  font-family: MJXZERO, MJXTEX-S3;
}

.TEX-S4 {
  font-family: MJXZERO, MJXTEX-S4;
}

.TEX-A {
  font-family: MJXZERO, MJXTEX-A;
}

.TEX-C {
  font-family: MJXZERO, MJXTEX-C;
}

.TEX-CB {
  font-family: MJXZERO, MJXTEX-CB;
}

.TEX-FR {
  font-family: MJXZERO, MJXTEX-FR;
}

.TEX-FRB {
  font-family: MJXZERO, MJXTEX-FRB;
}

.TEX-SS {
  font-family: MJXZERO, MJXTEX-SS;
}

.TEX-SSB {
  font-family: MJXZERO, MJXTEX-SSB;
}

.TEX-SSI {
  font-family: MJXZERO, MJXTEX-SSI;
}

.TEX-SC {
  font-family: MJXZERO, MJXTEX-SC;
}

.TEX-T {
  font-family: MJXZERO, MJXTEX-T;
}

.TEX-V {
  font-family: MJXZERO, MJXTEX-V;
}

.TEX-VB {
  font-family: MJXZERO, MJXTEX-VB;
}

mjx-stretchy-v mjx-c, mjx-stretchy-h mjx-c {
  font-family: MJXZERO, MJXTEX-S1, MJXTEX-S4, MJXTEX, MJXTEX-A ! important;
}

@font-face /* 0 */ {
  font-family: MJXZERO;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Zero.woff") format("woff");
}

@font-face /* 1 */ {
  font-family: MJXTEX;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Main-Regular.woff") format("woff");
}

@font-face /* 2 */ {
  font-family: MJXTEX-B;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Main-Bold.woff") format("woff");
}

@font-face /* 3 */ {
  font-family: MJXTEX-I;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Math-Italic.woff") format("woff");
}

@font-face /* 4 */ {
  font-family: MJXTEX-MI;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Main-Italic.woff") format("woff");
}

@font-face /* 5 */ {
  font-family: MJXTEX-BI;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Math-BoldItalic.woff") format("woff");
}

@font-face /* 6 */ {
  font-family: MJXTEX-S1;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Size1-Regular.woff") format("woff");
}

@font-face /* 7 */ {
  font-family: MJXTEX-S2;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Size2-Regular.woff") format("woff");
}

@font-face /* 8 */ {
  font-family: MJXTEX-S3;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Size3-Regular.woff") format("woff");
}

@font-face /* 9 */ {
  font-family: MJXTEX-S4;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Size4-Regular.woff") format("woff");
}

@font-face /* 10 */ {
  font-family: MJXTEX-A;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_AMS-Regular.woff") format("woff");
}

@font-face /* 11 */ {
  font-family: MJXTEX-C;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Calligraphic-Regular.woff") format("woff");
}

@font-face /* 12 */ {
  font-family: MJXTEX-CB;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Calligraphic-Bold.woff") format("woff");
}

@font-face /* 13 */ {
  font-family: MJXTEX-FR;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Fraktur-Regular.woff") format("woff");
}

@font-face /* 14 */ {
  font-family: MJXTEX-FRB;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Fraktur-Bold.woff") format("woff");
}

@font-face /* 15 */ {
  font-family: MJXTEX-SS;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_SansSerif-Regular.woff") format("woff");
}

@font-face /* 16 */ {
  font-family: MJXTEX-SSB;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_SansSerif-Bold.woff") format("woff");
}

@font-face /* 17 */ {
  font-family: MJXTEX-SSI;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_SansSerif-Italic.woff") format("woff");
}

@font-face /* 18 */ {
  font-family: MJXTEX-SC;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Script-Regular.woff") format("woff");
}

@font-face /* 19 */ {
  font-family: MJXTEX-T;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Typewriter-Regular.woff") format("woff");
}

@font-face /* 20 */ {
  font-family: MJXTEX-V;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Vector-Regular.woff") format("woff");
}

@font-face /* 21 */ {
  font-family: MJXTEX-VB;
  src: url("https://cdn.jsdelivr.net/npm/mathjax@3/es5/output/chtml/fonts/woff-v2/MathJax_Vector-Bold.woff") format("woff");
}
</style><script async="" src="./1_1_files/ca-pub-8806842758252812"></script><script async="" src="./1_1_files/AGSKWxXPDJQdVMO2EVfbgOnLcSR3TCnyhUKrbcc_xfAwUpFjjDR-Qwv_o7OgvIlAYp1lBzWOyoAkspeLSKR7IXpME_TypNFGI354Ulv5cIm56oGL1FVc8_3CynwtiMv_cpJDoaDIXnUJAQ=="></script><meta http-equiv="origin-trial" content="AxjhRadLCARYRJawRjMjq4U8V8okQvSnrBIJWdMajuEkN3/DfVAcLcFhMVrUWnOXagwlI8dQD84FwJDGj9ohqAYAAABveyJvcmlnaW4iOiJodHRwczovL2dvb2dsZWFkc2VydmljZXMuY29tOjQ0MyIsImZlYXR1cmUiOiJGZXRjaExhdGVyQVBJIiwiZXhwaXJ5IjoxNzI1NDA3OTk5LCJpc1RoaXJkUGFydHkiOnRydWV9"><script async="" src="./1_1_files/AGSKWxVdg4RqwrU5RyzOXxYLVHyLn5zGUKRmFgZnxrjssVCkyr_8fdpqlPUyl-pc2qrLg9PnwXcBx9PWXqGU2cDyGfjKLwXz9CRIIo-sFeNR5zr7ME6tlr-KsGHkCjTIg_Mjs614qFt3mw=="></script><script async="" src="./1_1_files/AGSKWxVvkcr1jU7VNFuG8TwP3ymH27qk-PmfYoGxArKuK1mJAOf_5FTqn5xsLx4xT52EAitn0yL74wO1MOjSl1OkruAucfbeW4MvGe_Y4fkT2_LCkmglNOjlVpjEV9vrlMKLNx93XrpvEw=="></script><script async="" src="./1_1_files/AGSKWxXT63DMO2pDBe6zkGhbsW7mkaBaIgyfg9ktgYholI1tTkC8Ys3kLBGrsRndRMo9Mum40_UW1WS-WL6m70lpVOE52sEhTp1WIr1BEqH18lomqJ6DCxcEf6dPWZihxIVlfMmhoKvsmQ=="></script></head>
<body class="  pace-done"><div class="pace  pace-inactive"><div class="pace-progress" data-progress-text="100%" data-progress="99" style="transform: translate3d(100%, 0px, 0px);">
  <div class="pace-progress-inner"></div>
</div>
<div class="pace-activity"></div></div>
    <div class="wrapper" style="height: auto !important;">
        <div class="header no-print"><div class="topbar"><div class="container"><ul class="loginbar pull-right"><li><a href="https://www.acmicpc.net/user/ksj855210" class="username">ksj855210</a></li><li class="topbar-devider"></li><li><a href="https://www.acmicpc.net/modify">설정</a></li><li class="topbar-devider"></li><li><a href="https://www.acmicpc.net/submit/10869/92001236#" onclick="document.getElementById(&quot;logout_form&quot;).submit(); return false;">로그아웃</a></li><li class="topbar-devider"></li><li><a href="https://www.acmicpc.net/notifications"><span class="glyphicon glyphicon-globe"></span><span class="badge badge-red rounded-2x">1</span></a></li><li class="topbar-devider"></li><li><a href="https://www.acmicpc.net/favorite"><span class="glyphicon glyphicon-star"></span></a></li></ul></div></div><div class="navbar navbar-default mega-menu" role="navigation"><div class="container"><div class="navbar-header"><button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-responsive-collapse"><span class="sr-only">Toggle navigation</span><span class="fa fa-bars"></span></button><a class="navbar-brand" href="https://www.acmicpc.net/"><img id="logo-header" src="./1_1_files/logo@2x.png" alt="Logo" data-retina=""></a></div><div class="collapse navbar-collapse navbar-responsive-collapse"><ul class="nav navbar-nav"><li class="dropdown mega-menu-fullwidth active"><a href="javascript:void(0);" class="dropdown-toggle" data-toggle="dropdown">문제</a><ul class="dropdown-menu"><li><div class="mega-menu-content"><div class="container"><div class="row equal-height"><div class="col-md-3 equal-height-in"><ul class="list-unstyled equal-height-list"><li><h3>문제</h3></li><li><a href="https://www.acmicpc.net/problemset">전체 문제</a></li><li><a href="https://www.acmicpc.net/category">문제 출처</a></li><li><a href="https://www.acmicpc.net/step">단계별로 풀어보기</a></li><li><a href="https://www.acmicpc.net/problem/tags">알고리즘 분류</a></li><li><a href="https://www.acmicpc.net/problem/added">추가된 문제</a></li><li><a href="https://www.acmicpc.net/problem/ranking">문제 순위</a></li><li><a href="https://www.acmicpc.net/favorite">북마크</a></li></ul></div><div class="col-md-3 equal-height-in"><ul class="list-unstyled equal-height-list"><li><h3>문제</h3></li><li><a href="https://www.acmicpc.net/problem/failed">내가 실패한 문제</a></li><li><a href="https://www.acmicpc.net/problem/unsolved">내가 못 푼 문제</a></li><li><a href="https://www.acmicpc.net/problem/only/me">나만 푼 문제</a></li><li><a href="https://www.acmicpc.net/problem/only">푼 사람이 한 명인 문제</a></li><li><a href="https://www.acmicpc.net/problem/nobody">아무도 못 푼 문제</a></li><li><a href="https://www.acmicpc.net/problem/recent/submit">최근 제출된 문제</a></li><li><a href="https://www.acmicpc.net/problem/recent/accepted">최근 풀린 문제</a></li><li><a href="https://www.acmicpc.net/problem/random">안 푼 문제 랜덤</a></li><li><a href="https://www.acmicpc.net/problem/random/all">전체 문제 랜덤</a></li></ul></div><div class="col-md-3 equal-height-in"><ul class="list-unstyled equal-height-list"><li><h3>출처</h3></li><li><a href="https://www.acmicpc.net/category/1">ICPC</a></li><li><a href="https://www.acmicpc.net/category/2">Olympiad</a></li><li><a href="https://www.acmicpc.net/category/55">한국정보올림피아드</a></li><li><a href="https://www.acmicpc.net/category/57">한국정보올림피아드시․도지역본선</a></li><li><a href="https://www.acmicpc.net/category/318">전국 대학생 프로그래밍 대회 동아리 연합</a></li><li><a href="https://www.acmicpc.net/category/5">대학교 대회</a></li><li><a href="https://www.acmicpc.net/category/428">카카오 코드 페스티벌</a></li><li><a href="https://www.acmicpc.net/category/215">Coder's High</a></li></ul></div><div class="col-md-3 equal-height-in"><ul class="list-unstyled equal-height-list"><li><h3>ICPC</h3></li><li><a href="https://www.acmicpc.net/category/7">Regionals</a></li><li><a href="https://www.acmicpc.net/category/4">World Finals</a></li><li><a href="https://www.acmicpc.net/category/211">Korea Regional</a></li><li><a href="https://www.acmicpc.net/category/34">Africa and the Middle East Regionals</a></li><li><a href="https://www.acmicpc.net/category/10">Europe Regionals</a></li><li><a href="https://www.acmicpc.net/category/103">Latin America Regionals</a></li><li><a href="https://www.acmicpc.net/category/8">North America Regionals</a></li><li><a href="https://www.acmicpc.net/category/92">South Pacific Regionals</a></li></ul></div></div></div></div></li></ul></li><li><a href="https://www.acmicpc.net/workbook/top">문제집</a></li><li><a href="https://www.acmicpc.net/contest/official/list">대회<span class="badge badge-red rounded-2x">6</span></a></li><li><a href="https://www.acmicpc.net/status">채점 현황</a></li><li><a href="https://www.acmicpc.net/ranklist">랭킹</a></li><li><a href="https://www.acmicpc.net/board/list/all">게시판</a></li><li><a href="https://www.acmicpc.net/group/list">그룹</a></li><li class="dropdown "><a href="javascript:void(0);" class="dropdown-toggle" data-toggle="dropdown">더 보기</a><ul class="dropdown-menu"><li><a href="https://www.acmicpc.net/change">재채점 기록</a></li><li><a href="https://www.acmicpc.net/blog/list">블로그</a></li><li><a href="https://www.acmicpc.net/lectures">강의</a></li><li><a href="https://www.acmicpc.net/labs">실험실</a></li><li><a href="https://help.acmicpc.net/" target="_blank">도움말 &nbsp;<i class="fa fa-external-link"></i></a></li><li><a href="https://stack.acmicpc.net/" target="_blank">BOJ Stack &nbsp;<i class="fa fa-external-link"></i></a></li><li><a href="https://book.acmicpc.net/" target="_blank">BOJ Book &nbsp;<i class="fa fa-external-link"></i></a></li></ul></li><li><a href="https://www.acmicpc.net/search"><i class="fa fa-search search-btn"></i></a></li></ul></div></div></div></div><form action="https://www.acmicpc.net/logout" method="post" id="logout_form"><input type="hidden" value="%2Fsubmit%2F10869%2F92001236" name="next"></form>
        
<div class="container content" style="height: auto !important;">			<div style="width: 100%;" class="no-print"><script async="" src="./1_1_files/f(2).txt" crossorigin="anonymous" data-checked-head="true"></script><ins class="adsbygoogle" style="display: block; height: 100px;" data-ad-client="ca-pub-8806842758252812" data-ad-slot="1129585289" data-ad-format="horizontal" data-full-width-responsive="true" data-adsbygoogle-status="done" data-ad-status="filled"><div id="aswift_1_host" style="border: none; height: 100px; width: 665px; margin: 0px; padding: 0px; position: relative; visibility: visible; background-color: transparent; display: inline-block; overflow: visible;"><iframe id="aswift_1" name="aswift_1" browsingtopics="true" style="left:0;position:absolute;top:0;border:0;width:665px;height:100px;" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" width="665" height="100" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allow="attribution-reporting; run-ad-auction" src="./1_1_files/ads.html" data-google-container-id="a!2" tabindex="0" title="Advertisement" aria-label="Advertisement" data-google-query-id="CJuPrZqGpYwDFUaI6QUdwsk2Gw" data-load-complete="true"></iframe></div></ins><script>
(adsbygoogle = window.adsbygoogle || []).push({ });
</script></div><div class="margin-bottom-20 no-print"></div>
	<div class="row"><div class="col-md-12"><ul class="nav nav-pills no-print problem-menu" style="margin-bottom:20px;"><li>
		<a href="https://www.acmicpc.net/problem/10869">10869번</a>
</li><li class="active"><a href="https://www.acmicpc.net/submit/10869">제출</a></li><li><a href="https://www.acmicpc.net/problem/status/10869">맞힌 사람</a></li><li><a href="https://www.acmicpc.net/short/status/10869">숏코딩</a></li><li><a href="https://www.acmicpc.net/problem/history/10869">재채점 결과</a></li><li><a href="https://www.acmicpc.net/status?from_problem=1&amp;problem_id=10869">채점 현황</a></li><li><a href="https://www.acmicpc.net/status?from_mine=1&amp;problem_id=10869&amp;user_id=ksj855210">내 제출</a></li><li><a href="https://solved.ac/contribute/10869" target="_blank">난이도 기여 <i class="fa fa-external-link"></i></a></li><li><a href="https://www.acmicpc.net/board/search/all/problem/10869">질문 게시판</a></li></ul></div><div class="col-md-12"><form action="https://www.acmicpc.net/submit/10869/92001236" method="post" class="form-horizontal submit-form" id="submit_form"><legend>사칙연산</legend><input type="hidden" value="10869" name="problem_id"><div class="form-group"><label class="col-md-2 control-label" for="language">언어</label><div class="col-md-2" style="margin-top:7px;"><select id="language" name="language" data-placeholder="언어를 선택해 주세요" class="language-select col-md-12 chosen-select" data-no_results_text="없는 언어 입니다" style="display: none;"><option value="28" data-mime="text/x-python">Python 3</option><option value="84" data-mime="text/x-c++src">C++17</option><option value="73" data-mime="text/x-python">PyPy3</option><option value="0" data-mime="text/x-csrc" selected="">C99</option><option value="93" data-mime="text/x-java">Java 11</option><option value="68" data-mime="text/x-ruby">Ruby</option><option value="69" data-mime="text/x-kotlin">Kotlin (JVM)</option><option value="74" data-mime="text/x-swift">Swift</option><option value="58" data-mime="text/plain">Text</option><option value="86" data-mime="text/x-csharp">C#</option><option value="17" data-mime="text/javascript">node.js</option><option value="12" data-mime="text/x-go">Go</option><option value="29" data-mime="text/x-d">D</option><option value="94" data-mime="text/x-rustsrc">Rust 2018</option><option value="85" data-mime="text/x-c++src">C++17 (Clang)</option></select><div class="chosen-container chosen-container-single" title="" id="language_chosen" style="width: 135px;"><a class="chosen-single">
  <span>C99</span>
  <div><b></b></div>
</a>
<div class="chosen-drop">
  <div class="chosen-search">
    <input class="chosen-search-input" type="text" autocomplete="off">
  </div>
  <ul class="chosen-results"></ul>
</div></div></div><p style="padding-top:7px;" class="hidden-xs hidden-sm"><a href="https://www.acmicpc.net/setting/language">언어 설정</a></p></div><div class="form-group"><label class="col-md-2 control-label" for="code_open">소스 코드 공개</label><div class="col-md-10"><div class="radio"><label><input type="radio" name="code_open" id="code_open_open" value="open" checked="">공개</label></div><div class="radio"><label><input type="radio" name="code_open" id="code_open_close" value="close">비공개</label></div><div class="radio"><label><input type="radio" name="code_open" id="code_open_accepted" value="onlyaccepted">맞았을 때만 공개</label></div></div></div><div class="form-group"><label class="col-md-2 control-label" for="source">소스 코드</label><div class="col-md-10"><textarea id="source" class="codemirror-textarea" data-mime="text/x-csrc" name="source" autofocus="autofocus" style="display: none;">#include &lt;stdio.h&gt;

int main(void)
{
 int A;
 scanf("%d", &amp;A);
 int B;
 scanf("%d\n", &amp;B);
 printf("%d\n", A+B);
 printf("%d\n", A-B);
 printf("%d\n", A*B);
 printf("%d\n", A/B);
 printf("%d\n", A%B);
 
}</textarea><div class="CodeMirror cm-s-default" translate="no"><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 55.1875px; left: 168.422px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" tabindex="0" style="position: absolute; bottom: -1em; padding: 0px; width: 1000px; height: 1em; min-height: 1em; outline: none;"></textarea></div><div class="CodeMirror-vscrollbar" tabindex="-1" cm-not-content="true"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-hscrollbar" tabindex="-1" cm-not-content="true"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-scrollbar-filler" cm-not-content="true"></div><div class="CodeMirror-gutter-filler" cm-not-content="true"></div><div class="CodeMirror-scroll" tabindex="-1"><div class="CodeMirror-sizer" style="margin-left: 30px; margin-bottom: -15px; border-right-width: 35px; min-height: 392px; min-width: 208.602px; padding-right: 0px; padding-bottom: 0px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines" role="presentation"><div role="presentation" style="position: relative; outline: none;"><div class="CodeMirror-measure"><pre class="CodeMirror-line-like"><span>xxxxxxxxxx</span></pre></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors" style=""><div class="CodeMirror-cursor" style="left: 138.422px; top: 51.1875px; height: 25.5938px;">&nbsp;</div></div><div class="CodeMirror-code" role="presentation" style=""><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">1</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-meta">#include &lt;stdio.h&gt;</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">2</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span cm-text="">​</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">3</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">main</span>(<span class="cm-type">void</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">4</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">{</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">5</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-type">int</span> <span class="cm-variable">A</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">6</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">scanf</span>(<span class="cm-string">"%d"</span>, <span class="cm-operator">&amp;</span><span class="cm-variable">A</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">7</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-type">int</span> <span class="cm-variable">B</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">8</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">scanf</span>(<span class="cm-string">"%d\n"</span>, <span class="cm-operator">&amp;</span><span class="cm-variable">B</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">9</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">printf</span>(<span class="cm-string">"%d\n"</span>, <span class="cm-variable">A</span><span class="cm-operator">+</span><span class="cm-variable">B</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">10</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">printf</span>(<span class="cm-string">"%d\n"</span>, <span class="cm-variable">A</span><span class="cm-operator">-</span><span class="cm-variable">B</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">11</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">printf</span>(<span class="cm-string">"%d\n"</span>, <span class="cm-variable">A</span><span class="cm-operator">*</span><span class="cm-variable">B</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">12</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">printf</span>(<span class="cm-string">"%d\n"</span>, <span class="cm-variable">A</span><span class="cm-operator">/</span><span class="cm-variable">B</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">13</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> <span class="cm-variable">printf</span>(<span class="cm-string">"%d\n"</span>, <span class="cm-variable">A</span><span class="cm-operator">%</span><span class="cm-variable">B</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">14</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"> </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" aria-hidden="true" style="left: -30px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">15</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">}</span></pre></div></div></div></div></div></div><div style="position: absolute; height: 35px; width: 1px; border-bottom: 0px solid transparent; top: 392px;"></div><div class="CodeMirror-gutters" style="height: 427px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 29px;"></div></div></div></div></div></div><input type="hidden" name="csrf_key" value="ebbcea03f99ae5d0afda7bbd6634d8ff"><div class="form-group"><div class="col-md-offset-2 col-md-10"><strong id="submit_preview" style="display: none;">버튼 로딩 중</strong><button id="submit_button" type="submit" class="btn btn-primary" data-loading-text="제출 중..." style="">제출</button></div></div></form></div></div>			<div style="width: 100%;" class="no-print"><script async="" src="./1_1_files/f(2).txt" crossorigin="anonymous" data-checked-head="true"></script><ins class="adsbygoogle" style="display: block; height: 0px;" data-ad-client="ca-pub-8806842758252812" data-ad-slot="1129585289" data-ad-format="auto" data-full-width-responsive="true" data-adsbygoogle-status="done" data-ad-status="unfilled"><div id="aswift_2_host" style="border: none; height: 0px; width: 665px; margin: 0px; padding: 0px; position: relative; visibility: visible; background-color: transparent; display: inline-block; overflow: hidden; opacity: 0;"><iframe id="aswift_2" name="aswift_2" browsingtopics="true" style="left: 0px; position: absolute; top: 0px; border: 0px; width: 665px; height: 0px;" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" width="665" height="0" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allow="attribution-reporting; run-ad-auction" src="./1_1_files/ads(1).html" data-google-container-id="a!3" tabindex="0" title="Advertisement" aria-label="Advertisement" data-google-query-id="CNi3sZqGpYwDFe-J6QUdqo0GWA" data-load-complete="true"></iframe></div></ins><script>
(adsbygoogle = window.adsbygoogle || []).push({ });
</script></div><div class="margin-bottom-20 no-print"></div>
	</div><div class="modal micromodal-slide" id="submit-modal" aria-hidden="true"><div class="modal__overlay" tabindex="-1" data-micromodal-close=""><div class="modal__container" role="dialog" aria-modal="true" aria-labelledby="modal-1-title"><header class="modal__header"><h2 class="modal__title" id="modal-1-title">제출 규칙</h2><button class="modal__close" aria-label="Close modal" data-micromodal-close=""></button></header><main class="modal__content" id="modal-1-content"><ul><li>키워드: <code class="rule-keyword"></code></li><li>언어: <span class="rule-language"></span></li></ul></main><footer class="modal__footer"><button class="modal__btn modal__btn-primary rule-button"><span class="rule-language"></span>로 제출</button><button class="modal__btn modal__btn-primary source-button"><span class="source-language"></span>로 제출</button><button class="modal__btn close-button" aria-label="닫기">닫기</button></footer></div></div></div>

        <div class="footer-v3 no-print"><div class="footer"><div class="container"><div class="row"><div class="col-sm-3 md-margin-bottom-40"><div class="thumb-headline"><h2>Baekjoon Online Judge</h2></div><ul class="list-unstyled simple-list margin-bottom-10"><li><a href="https://www.acmicpc.net/about">소개</a></li><li><a href="https://www.acmicpc.net/news">뉴스</a></li><li><a href="https://www.acmicpc.net/live">생중계</a></li><li><a href="https://www.acmicpc.net/poll">설문조사</a></li><li><a href="https://www.acmicpc.net/blog">블로그</a></li><li><a href="https://www.acmicpc.net/board/view/70222">디스코드 서버</a></li><li><a href="https://www.acmicpc.net/donate">기부하기</a></li><li><a href="https://github.com/Startlink/BOJ-Feature-Request">기능 추가 요청</a></li><li><a href="https://github.com/Startlink/BOJ-spj">스페셜 저지 제작</a></li><li><a href="https://www.acmicpc.net/labs">실험실</a></li></ul><div class="thumb-headline"><h2>채점 현황</h2></div><ul class="list-unstyled simple-list"><li><a href="https://www.acmicpc.net/status">채점 현황</a></li></ul></div><div class="col-sm-3 md-margin-bottom-40"><div class="thumb-headline"><h2>문제</h2></div><ul class="list-unstyled simple-list margin-bottom-10"><li><a href="https://www.acmicpc.net/problemset">문제</a></li><li><a href="https://www.acmicpc.net/step">단계</a></li><li><a href="https://www.acmicpc.net/problem/tags">분류</a></li><li><a href="https://www.acmicpc.net/problem/added">추가된 문제</a></li><li><a href="https://www.acmicpc.net/problem/ranking">문제 순위</a></li><li><a href="https://www.acmicpc.net/problem/recent/submit">최근 제출된 문제</a></li><li><a href="https://www.acmicpc.net/problem/recent/accepted">최근 풀린 문제</a></li><li><a href="https://www.acmicpc.net/change">재채점 및 문제 수정</a></li></ul><div class="thumb-headline"><h2>유저 대회</h2></div><ul class="list-inline simple-list margin-bottom"><li><a href="https://www.acmicpc.net/category/353">FunctionCup</a></li><li><a href="https://www.acmicpc.net/category/469">Good Bye, BOJ</a></li><li><a href="https://www.acmicpc.net/category/319">kriiicon</a></li><li><a href="https://www.acmicpc.net/category/420">구데기컵</a></li><li><a href="https://www.acmicpc.net/category/358">꼬마컵</a></li><li><a href="https://www.acmicpc.net/category/421">네블컵</a></li><li><a href="https://www.acmicpc.net/category/413">소프트콘</a></li><li><a href="https://www.acmicpc.net/category/416">웰노운컵</a></li><li><a href="https://www.acmicpc.net/category/441">키파컵</a></li><li><a href="https://www.acmicpc.net/category/496">폴리매스 코드 챔피언십</a></li><li><a href="https://www.acmicpc.net/category/detail/1743">HYEA Cup</a></li></ul><div class="thumb-headline"><h2>고등학교 대회</h2></div><ul class="list-inline simple-list margin-bottom"><li><a href="https://www.acmicpc.net/category/836">NLCS Jeju</a></li><li><a href="https://www.acmicpc.net/category/364">경기과학고등학교</a></li><li><a href="https://www.acmicpc.net/category/630">경기북과학고등학교</a></li><li><a href="https://www.acmicpc.net/category/669">단국대학교부속소프트웨어고등학교</a></li><li><a href="https://www.acmicpc.net/category/417">대구과학고등학교</a></li><li><a href="https://www.acmicpc.net/category/855">대구소프트웨어마이스터고등학교</a></li><li><a href="https://www.acmicpc.net/category/664">동래고등학교</a></li><li><a href="https://www.acmicpc.net/category/429">부산일과학고</a></li><li><a href="https://www.acmicpc.net/category/435">서울과학고등학교</a></li><li><a href="https://www.acmicpc.net/category/394">선린인터넷고등학교</a></li><li><a href="https://www.acmicpc.net/category/610">세종과학예술영재학교</a></li><li><a href="https://www.acmicpc.net/category/854">송도고등학교</a></li><li><a href="https://www.acmicpc.net/category/542">한국과학영재학교</a></li></ul></div><div class="col-sm-3 md-margin-bottom-40"><div class="thumb-headline"><h2>출처</h2></div><ul class="list-unstyled simple-list margin-bottom-10"><li><a href="https://www.acmicpc.net/category/1">ICPC</a></li><li><a href="https://www.acmicpc.net/category/211">ICPC Korea Regional</a></li><li><a href="https://www.acmicpc.net/category/2">Olympiad</a></li><li><a href="https://www.acmicpc.net/category/55">한국정보올림피아드</a></li><li><a href="https://www.acmicpc.net/category/57">한국정보올림피아드시․도지역본선</a></li><li><a href="https://www.acmicpc.net/category/428">카카오 코드 페스티벌</a></li><li><a href="https://www.acmicpc.net/category/215">Coder's High</a></li><li><a href="https://www.acmicpc.net/category/485">Open Cup</a></li><li><a href="https://www.acmicpc.net/category/477">Petrozavodsk Programming Camp</a></li></ul><div class="thumb-headline"><h2>대학교 대회</h2></div><ul class="list-inline simple-list"><li><a href="https://www.acmicpc.net/category/662">DGIST</a></li><li><a href="https://www.acmicpc.net/category/320">KAIST</a></li><li><a href="https://www.acmicpc.net/category/426">POSTECH</a></li><li><a href="https://www.acmicpc.net/category/461">UNIST</a></li><li><a href="https://www.acmicpc.net/category/466">가톨릭대학교</a></li><li><a href="https://www.acmicpc.net/category/518">강원대학교</a></li><li><a href="https://www.acmicpc.net/category/454">건국대학교</a></li><li><a href="https://www.acmicpc.net/category/438">경북대학교</a></li><li><a href="https://www.acmicpc.net/category/341">고려대학교</a></li><li><a href="https://www.acmicpc.net/category/434">광주과학기술원</a></li><li><a href="https://www.acmicpc.net/category/361">국민대학교</a></li><li><a href="https://www.acmicpc.net/category/671">부산대학교</a></li><li><a href="https://www.acmicpc.net/category/83">서강대학교</a></li><li><a href="https://www.acmicpc.net/category/674">서울과학기술대학교</a></li><li><a href="https://www.acmicpc.net/category/354">서울대학교</a></li><li><a href="https://www.acmicpc.net/category/709">서울사이버대학교</a></li><li><a href="https://www.acmicpc.net/category/468">성균관대학교</a></li><li><a href="https://www.acmicpc.net/category/527">숙명여자대학교</a></li><li><a href="https://www.acmicpc.net/category/352">숭실대학교</a></li><li><a href="https://www.acmicpc.net/category/408">아주대학교</a></li><li><a href="https://www.acmicpc.net/category/334">연세대학교</a></li><li><a href="https://www.acmicpc.net/category/541">연세대학교 미래캠퍼스</a></li><li><a href="https://www.acmicpc.net/category/467">인천대학교</a></li><li><a href="https://www.acmicpc.net/category/336">인하대학교</a></li><li><a href="https://www.acmicpc.net/category/925">전남대학교</a></li><li><a href="https://www.acmicpc.net/category/347">전북대학교</a></li><li><a href="https://www.acmicpc.net/category/609">제주대학교</a></li><li><a href="https://www.acmicpc.net/category/400">중앙대학교</a></li><li><a href="https://www.acmicpc.net/category/402">충남대학교</a></li><li><a href="https://www.acmicpc.net/category/607">한국항공대학교</a></li><li><a href="https://www.acmicpc.net/category/440">한양대학교</a></li><li><a href="https://www.acmicpc.net/category/418">한양대학교 ERICA 캠퍼스</a></li><li><a href="https://www.acmicpc.net/category/363">홍익대학교</a></li><li><a href="https://www.acmicpc.net/category/409">경인지역 6개대학 연합 프로그래밍 경시대회</a></li><li><a href="https://www.acmicpc.net/category/318">전국 대학생 프로그래밍 대회 동아리 연합</a></li></ul></div><div class="col-sm-3 md-margin-bottom-40"><div class="thumb-headline"><h2><a href="https://help.acmicpc.net/">도움말</a></h2></div><ul class="list-unstyled simple-list margin-bottom-10"><li><a href="https://help.acmicpc.net/judge/info">채점 도움말 및 채점 환경</a></li><li><a href="https://help.acmicpc.net/judge/rejudge">재채점 안내</a></li><li><a href="https://help.acmicpc.net/judge/rte">런타임 에러 도움말</a></li><li><a href="https://help.acmicpc.net/problem/style">문제 스타일 안내</a></li><li><a href="https://help.acmicpc.net/language/info">컴파일 또는 실행 옵션, 컴파일러 버전, 언어 도움말</a></li><li><a href="https://help.acmicpc.net/workbook">문제집 도움말</a></li><li><a href="https://help.acmicpc.net/contest/open">대회 개최 안내</a></li><li><a href="https://help.acmicpc.net/problem/add">문제 출제 안내</a></li><li><a href="https://help.acmicpc.net/rule">이용 규칙</a></li><li><a href="https://help.acmicpc.net/stats">통계 도움말</a></li><li><a href="https://help.acmicpc.net/question">질문 도움말</a></li><li><a href="https://help.acmicpc.net/faq">자주묻는 질문</a></li><li><a href="https://help.acmicpc.net/etc/short">짧은 주소 안내</a></li><li><a href="https://help.acmicpc.net/ad">광고 안내</a></li></ul></div></div></div></div><div class="copyright"><div class="container"><div class="row"><div class="col-md-9 col-sm-12"><p>© 2025 All Rights Reserved. <a href="https://startlink.io/">주식회사 스타트링크</a>&nbsp;|&nbsp;<a href="https://www.acmicpc.net/terms">서비스 약관</a>&nbsp;|&nbsp;<a href="https://www.acmicpc.net/privacy">개인정보 보호</a>&nbsp;|&nbsp;<a href="https://www.acmicpc.net/terms/payment">결제 이용 약관</a>&nbsp;|&nbsp;<a href="https://help.acmicpc.net/">도움말</a>&nbsp;|&nbsp;<a href="https://help.acmicpc.net/ad">광고 문의</a>&nbsp;|&nbsp;<a href="https://github.com/Startlink/update-note/blob/master/boj.md">업데이트 노트</a>&nbsp;|&nbsp;<a href="https://github.com/Startlink/update-note/blob/master/boj-issues.md">이슈</a>&nbsp;|&nbsp;<a href="https://github.com/Startlink/update-note/blob/master/boj-todo.md">TODO</a></p></div><div class="col-md-3 col-sm-12"><ul class="social-icons pull-right"><li><a href="https://www.facebook.com/onlinejudge" data-original-title="Facebook" class="rounded-x social_facebook"></a></li><li><a href="https://startlink.blog/" data-original-title="Wordpress" class="rounded-x social_wordpress"></a></li></ul></div></div><div class="row"><div class="col-sm-12"><a href="https://startlink.io/" class="hidden-xs"><img src="./1_1_files/startlink-logo-white-only.png" class="pull-right startlink-logo"></a><ul class="list-unstyled simple-list"><li>사업자 등록 번호: 541-88-00682</li><li>대표자명: 최백준</li><li>주소: 서울시 서초구 서초대로74길 29 서초파라곤 412호</li><li>전화번호: 02-521-0487 (이메일로 연락 주세요)</li><li>이메일: <a href="mailto:contacts@startlink.io">contacts@startlink.io</a></li><li>통신판매신고번호: 제 2017-서울서초-2193 호</li></ul></div><div class="col-sm-9"><p id="no-acm-icpc">이 사이트는 ACM 또는 ICPC 대회와 무관하며, ACM으로부터 승인이나 지원을 받지 않고 있습니다.</p></div><div class="col-sm-3"><p class="pull-right"><a href="https://www.acmicpc.net/lang?lang=0&amp;next=%2Fsubmit%2F10869%2F92001236">한국어</a>&nbsp;|&nbsp;<a href="https://www.acmicpc.net/lang?lang=1&amp;next=%2Fsubmit%2F10869%2F92001236">English (Beta)</a></p></div></div></div></div></div>
    </div>
    <div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; width: 0px; height: 0px;"><div></div></div></div><script>
window.fbAsyncInit = function() {
  FB.init({
    appId      : '322026491226049',
    cookie     : true,
    xfbml      : true,
    version    : 'v2.8'
});
};
(function(d, s, id) {
var js, fjs = d.getElementsByTagName(s)[0];
if (d.getElementById(id)) return;
js = d.createElement(s); js.id = id;
js.src = "//connect.facebook.net/ko_KR/sdk.js";
fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));
</script>
<ins class="adsbygoogle adsbygoogle-noablate" data-adsbygoogle-status="done" style="display: none !important;" data-ad-status="unfilled"><div id="aswift_0_host" style="border: none; height: 0px; width: 0px; margin: 0px; padding: 0px; position: relative; visibility: visible; background-color: transparent; display: inline-block;"><iframe id="aswift_0" name="aswift_0" browsingtopics="true" style="left:0;position:absolute;top:0;border:0;width:undefinedpx;height:undefinedpx;" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allow="attribution-reporting; run-ad-auction" src="./1_1_files/ads(2).html" data-google-container-id="a!1" tabindex="0" title="Advertisement" aria-label="Advertisement" data-load-complete="true"></iframe></div></ins><script>
!function(f,b,e,v,n,t,s){ if(f.fbq)return;n=f.fbq=function(){ n.callMethod?
n.callMethod.apply(n,arguments):n.queue.push(arguments) };if(!f._fbq)f._fbq=n;
n.push=n;n.loaded=!0;n.version='2.0';n.queue=[];t=b.createElement(e);t.async=!0;
t.src=v;s=b.getElementsByTagName(e)[0];s.parentNode.insertBefore(t,s) }(window,
document,'script','//connect.facebook.net/en_US/fbevents.js');

fbq('init', '1670563073163149');
fbq('track', 'PageView');
</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=1670563073163149&ev=PageView&noscript=1"/></noscript><script src="./1_1_files/jquery.min.js.다운로드"></script><script src="./1_1_files/jquery-migrate.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/bootstrap.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/moment.min.js.다운로드"></script>
<script type="text/javascript" src="./1_1_files/ko.js.다운로드"></script>
<script type="text/javascript" src="./1_1_files/app.min.js.다운로드"></script><script type="text/javascript">jQuery(document).ready(function() {App.init(0);});</script><!--[if lt IE 9]><script src="https://ddo7jzca0m2vt.cloudfront.net/unify/plugins/respond.js"></script><script src="https://ddo7jzca0m2vt.cloudfront.net/unify/plugins/html5shiv.js"></script><script src="https://ddo7jzca0m2vt.cloudfront.net/unify/js/plugins/placeholder-IE-fixes.js"></script><![endif]--><script type="text/javascript" src="./1_1_files/pace.min.js.다운로드"></script><script src="./1_1_files/pusher.min.js.다운로드"></script><script src="./1_1_files/noty.min.js.다운로드"></script>
    <script src="./1_1_files/mathjax.js.다운로드"></script><script id="MathJax-script" async="" src="./1_1_files/tex-mml-chtml.js.다운로드"></script>
    

<script type="text/javascript" src="./1_1_files/codemirror.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/matchbrackets.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/closebrackets.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/loadmode.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/simple.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/meta.min.js.다운로드"></script><script type="text/javascript" src="./1_1_files/codemirror.js.다운로드"></script><script type="text/javascript">$(function() {OnlineJudgeCodeMirror.init('default', '');});</script>

<script type="text/javascript">
var submit_rules = [];
$('.language-select').change(function() {
	changeLanguage();
});
function changeLanguage() {
	var sel = $('.language-select').eq(0).children('option:selected');
	var mime = sel.attr('data-mime');
	OnlineJudgeCodeMirror.changeMode(mime);
}
</script>

<script src="./1_1_files/submit.js.다운로드"></script>
<script src="./1_1_files/chosen.jquery.min.js.다운로드"></script>
<script>
	$(document).ready(function() {
		$(".chosen-select").chosen();
	});
</script>
<script src="./1_1_files/micromodal.min.js.다운로드"></script>


<iframe name="googlefcPresent" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;" src="./1_1_files/saved_resource.html"></iframe><iframe name="__tcfapiLocator" src="./1_1_files/saved_resource(1).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe name="__uspapiLocator" src="./1_1_files/saved_resource(2).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe name="__gppLocator" src="./1_1_files/saved_resource(3).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe name="googlefcInactive" src="./1_1_files/saved_resource(4).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe name="googlefcLoaded" src="./1_1_files/saved_resource(5).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe src="./1_1_files/aframe.html" width="0" height="0" style="display: none;"></iframe></body><iframe id="google_esf" name="google_esf" src="./1_1_files/zrt_lookup_fy2021.html" style="display: none;"></iframe></html>