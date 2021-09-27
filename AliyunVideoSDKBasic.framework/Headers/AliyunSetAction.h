//
//  AliyunSetAction.h
//  AliyunVideoSDKPro
//
//  Created by mengyehao on 2021/8/23.
//  Copyright © 2021 aliyun. All rights reserved.
//

#import "AliyunAction.h"
#import <UIKit/UIKit.h>

/**
 动画集合中的动画执行方式  API_AVAILABLE(3.25.0)
 */
/****
 The playMode of animations in subList. API_AVAILABLE(3.25.0)
 */
typedef NS_ENUM(NSUInteger, AliyunSetActionPlayMode) {
    AliyunSetActionPlayModeTogether,
    AliyunSetActionPlayModeIndependent,
};


@interface AliyunSetAction : AliyunAction


/**
 动画集合中的动画执行方式 @see AliyunSetActionPlayMode. API_AVAILABLE(3.25.0)
 */
/****
 The playMode of animations in subList. @see AliyunSetActionPlayMode. API_AVAILABLE(3.25.0)
 */
@property(nonatomic, assign) AliyunSetActionPlayMode subSetMode;

/**
 动画组，包含AliyunAction动画 API_AVAILABLE(3.25.0)
 */
/****
 The array contains AliyunAction. API_AVAILABLE(3.25.0)
 */
@property(nonatomic, copy) NSArray<AliyunAction *> *subList;


@end


