//
//  GKNavigationInteractiveTransition.h
//  GKNavigationBarViewControllerDemo
//
//  Created by QuintGao on 2020/11/25.
//  Copyright © 2020 gaokun. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GKNavigationInteractiveTransition : NSObject<UINavigationControllerDelegate, UIGestureRecognizerDelegate>

/// 当前处理的导航控制器
@property (nonatomic, weak) UINavigationController *navigationController;

/// 手势处理
/// @param gesture 手势
- (void)panGestureAction:(UIPanGestureRecognizer *)gesture;

/// 系统返回手势的target对象
@property (nonatomic, weak) id systemTarget;

/// 系统返回手势的action方法
@property (nonatomic, assign) SEL systemAction;

@end

NS_ASSUME_NONNULL_END
