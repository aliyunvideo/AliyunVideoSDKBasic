//
//  AliyunAction.h
//  QUSDK
//
//  Created by Vienta on 2018/5/25.
//  Copyright © 2018年 Alibaba Group Holding Limited. All rights reserved.
//

#import "AliyunJSONModel.h"
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AliyunActionCoordinateSpace) {
    AliyunActionCoordinateSpace_Local   = 0,
    AliyunActionCoordinateSpace_Global  = 1,
};

/**
 循环模式 API_AVAILABLE(3.25.0)

 - AliyunActionRepeatModeNone:   不循环，此模式下repeatCount不起作用
 - AliyunActionRepeatModeNormal: 正常循环
 - AliyunActionRepeatModeReverse:反复循环
 */
typedef NS_ENUM(NSInteger, AliyunActionRepeatMode) {
    
    AliyunActionRepeatModeNone,
    AliyunActionRepeatModeNormal,
    AliyunActionRepeatModeReverse,
};

/**
 时间插值器 API_AVAILABLE(3.25.0)
 - AliyunActionInterpolatorLinear:   线性
 - AliyunActionInterpolatorAccelerate: 加速
 - AliyunActionInterpolatorDecelerate:减速
 - AliyunActionInterpolatorAccelerate_Decelerate: 先加速后减速
 - AliyunActionInterpolatorOvershot: 可以超过原点
 - AliyunActionInterpolatorAnticipate: 先退后再加速前进
 - AliyunActionInterpolatorAnticipate_Overshot: 可以超过原点,先退后再加速前进
 - AliyunActionInterpolatorBound: 弹簧效果
 - AliyunActionInterpolatorCycle: 周期运动，动画可以不到终点就回弹，也可以到了终点后在回弹，还可以回弹多次
 */
typedef NS_ENUM(NSInteger, AliyunActionInterpolator) {
    
    AliyunActionInterpolatorLinear,
    AliyunActionInterpolatorAccelerate,
    AliyunActionInterpolatorDecelerate,
    AliyunActionInterpolatorAccelerate_Decelerate,
    AliyunActionInterpolatorOvershot,
    AliyunActionInterpolatorAnticipate,
    AliyunActionInterpolatorAnticipate_Overshot,
    AliyunActionInterpolatorBound,
    AliyunActionInterpolatorCycle
};


/**
 动画基类
 */
@interface AliyunAction : AliyunJSONModel <NSMutableCopying>


/**
 API_AVAILABLE(3.7.0)

 动画开始的时间
 */
@property (nonatomic, assign) float startTime;


/**
 API_AVAILABLE(3.7.0)

 动画持续的时间
 */
@property (nonatomic, assign) float duration;

/**
 动画延迟时间 单位：秒.  API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) float startOffset;

/**
 动画运行插值 @see AliyunActionInterpolator.  API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) AliyunActionInterpolator actionInterpolator;

/**
 动画开始前是否可见 API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) BOOL fillBefore;

/**
 动画结束后是否保持 API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) BOOL fillAfter;

/**
 循环模式 @see AliyunActionRepeatMode API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) AliyunActionRepeatMode repeatMode;

/**
 循环次数 API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) int repeatCount;

/**
 * API_AVAILABLE(3.25.0)
 * 只对AliyunMoveAction/AliyunAlphaAction/AliyunTotateAction/AliyunScaleAction起作用
 * 自定义动画的配置脚本，开发者可以自行配置每种动画在每一个时间刻度的具体动画值，以实现各种各样的变换速度
 * 配置脚本的格式是采用键值对，是以分号";"为间隔的键值对列表，键就是时间刻度，值则分单值和双值，比如旋转角度这种只需要描述角度值，
 * 则使用单值，而像位移、缩放这种，需要x，y的值，则使用双值，双值的两个值之间用逗号","间隔，键和值之间以冒号":"间隔。
 * 例：旋转角度变化的"0.0:0.123;0.1:0.245;0.3:0.798"。
 * 位移变化的"0.0:0.234,1.47;0.1:2.3,4.565;0.2:3.45,6.78"
 *
 * @param animationConfig 配置脚本
 */
@property (nonatomic, copy) NSString *animationConfig;


/**
 API_AVAILABLE(3.25.0)

 动画标识，标识业务层动画
 */
@property (nonatomic, copy) NSString *sourceId;



/**
  API_AVAILABLE(3.7.0)

 动画作用的目标节点，例如如果是视频流，则使用视频流的streamID, 如果是如动图一类的，使用effectId
 */
@property (nonatomic, assign, readonly) int targetID;


/**
 API_AVAILABLE(3.7.0)

 必须注意设置
 是否是视频 ，如果是视频 必须是True 如果是其他的则为false
 */
@property (nonatomic, assign, readonly) BOOL isStream;


/**
 获取动画id

 @return 动画id
 */
@property (nonatomic, assign, readonly) int actionID;



@end
