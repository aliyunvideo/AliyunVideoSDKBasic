//
//  AliyunRotateRepeatAction.h
//  QUSDK
//
//  Created by Vienta on 2018/5/25.
//  Copyright © 2018年 Alibaba Group Holding Limited. All rights reserved.
//

#import "AliyunRotateAction.h"

/**
 重复旋转类 不停地旋转
 */
@interface AliyunRotateRepeatAction : AliyunRotateAction




/**
 旋转一圈需要的时间，基类的repeatCount不再起作用
 */
@property(nonatomic, assign) float durationPerCircle;

/**
 是否重复；默认YES，基类的repeatMode不再起作用
 */
/**
 isRepeat; default: YES. @repeatMode is invaild.
 */
@property(nonatomic, assign) BOOL isRepeat;

/**
 初始化方法

 @param dict 初始化参数
 @return 重复旋转类实例
 */
- (id)initWithRestore:(NSDictionary *)dict __deprecated_msg("deprecated");

@end
