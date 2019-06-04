//
//  UIView+TABControllerAnimation.h
//  AnimatedDemo
//
//  Created by tigerAndBull on 2019/1/17.
//  Copyright © 2019年 tigerAndBull. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    TABEndAnimationOptionEaseOut,
    TABEndAnimationOptionNone,
} TABEndAnimationOptions;

@interface UIView (TABControlAnimation)

/**
 start animation
 
 `[self tab_startAnimation]`, if you call it many times, it can only take effect once.
 If you special needs, change the state of `TABAnimatedObject`, and then restart it.
 
 开启动画
 
 `[self tab_startAnimation]`即使多次调用，也只会生效一次。
 如有其他需要，请自行修改`TABViewAnimated`中的`canLoadAgain`属性，解除限制。
 */
- (void)tab_startAnimation;

/**
 end animation
 结束动画, 默认不加入任何动画效果
 
 simmer to `tab_startAnimation`
 */
- (void)tab_endAnimation;

/**
 end animation
 结束动画, 加入淡入淡出效果
 
 simmer to `tab_startAnimation`
 */
- (void)tab_endAnimationEaseOut;

/**
 end animation to the section
 指定分区结束动画，当表格的所有分区都不存在动画，会自动置为结束动画的状态

 @param section 指定section
 */
- (void)tab_endAnimationWithSection:(NSInteger)section;

@end

NS_ASSUME_NONNULL_END
