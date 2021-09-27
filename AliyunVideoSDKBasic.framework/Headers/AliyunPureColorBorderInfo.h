//
//  AliyunPureColorBorderInfo.h
//  AliyunVideoSDKPro
//
//  Created by coder.pi on 2021/8/11.
//  Copyright © 2021 aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 API_AVAILABLE(3.23.0)
 纯色圆角边框
 */
@interface AliyunPureColorBorderInfo : NSObject<NSCopying>
/**
 API_AVAILABLE(3.23.0)
 视频边框颜色，不透明度
 */
@property (nonatomic, strong) UIColor *color;

/**
 API_AVAILABLE(3.23.0)
 视频边框宽度
 */
@property (nonatomic, assign) CGFloat width;

/**
 API_AVAILABLE(3.23.0)
 视频圆角半径
 */
@property (nonatomic, assign) CGFloat cornerRadius;
@end
