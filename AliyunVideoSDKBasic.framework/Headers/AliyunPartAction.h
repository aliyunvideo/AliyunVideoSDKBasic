//
//  AliyunPartAction.h
//  AliyunVideoSDKPro
//
//  Created by mengyehao on 2021/9/14.
//  Copyright © 2021 aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AliyunAction.h"

/**
 子节点动画执行顺序 API_AVAILABLE(3.25.0)
 */
/****
 part animation playmode. API_AVAILABLE(3.25.0)
 */
typedef NS_ENUM(NSInteger, AliyunActionPartParamMode) {
    
    AliyunActionPartParamModeSequence, //从左到右顺序执行
    AliyunActionPartParamModeReverse,  //从右到左逆序执行
    AliyunActionPartParamModeRandom,   //随机执行
    AliyunActionPartParamModeMiddle,   //从中间到两边
};


@interface AliyunActionPartParam : NSObject<NSCopying>


/**
 子节点动画执行顺序 @see AliyunActionPartParamMode. API_AVAILABLE(3.25.0)
 */
/****
 part animation playmode. @see  AliyunActionPartParamMode. API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) AliyunActionPartParamMode partMode;


/**
 两个子节点之间的重叠部分，[0-1],1：全部重叠，0：不重叠. API_AVAILABLE(3.25.0)
 */
/****
 overlap between two node，[0-1], 1:all overlap. 0:on overlap. API_AVAILABLE(3.25.0)
 */
@property (nonatomic, assign) float partOverlayRadio;


@end

@interface AliyunPartAction : NSObject

@property (nonatomic, strong, readonly) AliyunAction *action;
@property (nonatomic, strong) AliyunActionPartParam *partParam;

- (instancetype)initWithAction:(AliyunAction *)action;
@end


