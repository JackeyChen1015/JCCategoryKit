//
//  UIImage+JCExtension.h
//  JCCategoryKit
//
//  Created by JackeyChen1015 on 2019/5/3.
//  Copyright © 2019 JackeyChen1015. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (JCExtension)

/**
 
 生成一张高斯模糊的图片
 
 @param image 原图
 @param blur 模糊程度
 @return 高斯模糊的图片
 */
+ (UIImage *)jc_blurImage:(UIImage *)image blur:(CGFloat)blur;

@end

NS_ASSUME_NONNULL_END
