//
//  UIImage+JCExtension.m
//  JCCategoryKit
//
//  Created by JackeyChen1015 on 2019/5/3.
//  Copyright © 2019 JackeyChen1015. All rights reserved.
//

#import "UIImage+JCExtension.h"

@implementation UIImage (JCExtension)

-(instancetype)jc_circleImage {
    UIGraphicsBeginImageContext(self.size);
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGRect rect = CGRectMake(0, 0, self.size.width, self.size.height);
    CGContextAddEllipseInRect(ctx, rect);
    CGContextClip(ctx);
    [self drawInRect:rect];
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

+(instancetype)jc_circleImageWithImageName:(NSString *)name {
    return [[self jc_circleImageWithImageName:name] jc_circleImage];
}

@end
