//
//  ChartStyle.h
//  KLine-Chart-OC
//
//  Created by 何俊松 on 2020/3/10.
//  Copyright © 2020 hjs. All rights reserved.
//

#import "UIColor+RGB.h"

#define Color(rgbValue)  [UIColor rgbFromHex:rgbValue]

  //背景颜色
#define ChartColors_bgColor   Color(0xFFFFFFFF)
#define ChartColors_kLineColor   Color(0xFF4C86CD)
#define ChartColors_gridColor   Color(0xFFAAAAAA)
#define ChartColors_ma5Color   Color(0xFFC9B885)
#define ChartColors_ma10Color   Color(0xFF6CB0A6)
#define ChartColors_ma30Color   Color(0xFF9979C6)
#define ChartColors_upColor   Color(0xFF4DAA90)
#define ChartColors_dnColor   Color(0xFFC15466)
#define ChartColors_volColor   Color(0xFF4729AE)

#define ChartColors_macdColor   Color(0xFF4729AE)
#define ChartColors_difColor   Color(0xFFC9B885)
#define ChartColors_deaColor   Color(0xFF6CB0A6)

#define ChartColors_kColor   Color(0xFFC9B885)
#define ChartColors_dColor   Color(0xFF6CB0A6)
#define ChartColors_jColor   Color(0xFF9979C6)
#define ChartColors_rsiColor   Color(0xFFC9B885)

#define ChartColors_wrColor   Color(0xFFD2D2B4)

#define ChartColors_yAxisTextColor   Color(0xFF999999)  //右边y轴刻度
#define ChartColors_xAxisTextColor   Color(0xFF999999)  //下方时间刻度

#define ChartColors_maxMinTextColor   Color(0xFF333333)  //最大最小值的颜色

//深度颜色
#define ChartColors_depthBuyColor   Color(0xFF60A893)
#define ChartColors_depthSellColor   Color(0xFFC15866)

//选中后显示值边框颜色
#define ChartColors_markerBorderColor   Color(0x1F999999)

//选中后显示值背景的填充颜色
#define ChartColors_markerBgColor   Color(0x1F999999)

//实时线颜色等
#define ChartColors_realTimeBgColor   Color(0x1F999999)
#define ChartColors_rightRealTimeTextColor   Color(0xFF4C86CD)
#define ChartColors_realTimeTextBorderColor   Color(0xFFCCCCCC)
#define ChartColors_realTimeTextColor   Color(0xFF333333)

//实时线
#define ChartColors_realTimeLineColor   Color(0xFF4C86CD)
#define ChartColors_realTimeLongLineColor   Color(0xFF4C86CD)


//表格右边文字颜色
#define ChartColors_reightTextColor   Color(0xFF70839E)
#define ChartColors_bottomDateTextColor   Color(0xFF70839E)

#define ChartColors_crossHlineColor   Color(0x1F999999)

static CGFloat dd = 11.0;
//点与点的距离（）不用这种方式实现
static CGFloat ChartStyle_pointWidth = 11.0;

    //蜡烛之间的间距
static CGFloat ChartStyle_canldeMargin =  1.5;

    //蜡烛默认宽度
static CGFloat ChartStyle_defaultcandleWidth =  8.5;

    //蜡烛宽度
static CGFloat ChartStyle_candleWidth  = 8.5;

    //蜡烛中间线的宽度
static CGFloat ChartStyle_candleLineWidth =  1.5;

    //vol柱子宽度
static CGFloat ChartStyle_volWidth = 8.5;

    //macd柱子宽度
static CGFloat ChartStyle_macdWidth = 3.0;

    //垂直交叉线宽度
static CGFloat ChartStyle_vCrossWidth  = 8.5;

    //水平交叉线宽度
static CGFloat ChartStyle_hCrossWidth = 0.5;

    //网格
static CGFloat ChartStyle_gridRows = 4;
   
static CGFloat ChartStyle_gridColumns = 5;

static CGFloat ChartStyle_topPadding = 30.0;
   
static CGFloat ChartStyle_bottomDateHigh = 20.0;
   
static CGFloat ChartStyle_childPadding = 25.0;

static CGFloat ChartStyle_defaultTextSize = 10;
   
static CGFloat ChartStyle_bottomDatefontSize = 10;
   
   //表格右边文字价格
static CGFloat ChartStyle_reightTextSize = 10;
