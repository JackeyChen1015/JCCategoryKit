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

/*根据传入图片返回圆形图片*/
-(instancetype)jc_circleImage;

/*根据图片名称返回一张圆形图片*/
+(instancetype)jc_circleImageWithImageName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
