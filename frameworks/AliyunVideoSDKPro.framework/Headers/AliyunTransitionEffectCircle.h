//
//  AliyunTransitionEffectCircle.h
//  QUSDK
//
//  Created by Vienta on 2018/5/31.
//  Copyright © 2018年 Alibaba Group Holding Limited. All rights reserved.
//

#import "AliyunTransitionEffect.h"
#import <AliyunVideoSDKPro/AliyunVideoSDKPro.h>

/**
 圆形效果转场
 */
/****
 A class that defines circle transitions.
 */
@interface AliyunTransitionEffectCircle : AliyunTransitionEffect

/**
 初始化方法

 @param dict 初始化参数
 @return 圆形转场实例
 */
/****
 Initializer.

 @param dict The initialization parameter.
 @return A circle transition object.
 */
- (id)initWithRestore:(NSDictionary *)dict __deprecated_msg("deprecated");

@end
