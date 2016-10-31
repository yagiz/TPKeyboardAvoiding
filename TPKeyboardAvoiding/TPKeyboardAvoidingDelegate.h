//
//  TPKeyboardAvoidingDelegate.h
//  TPKeyboardAvoidingSample
//
//  Created by Yagiz Gurgul on 31/10/16.
//  Copyright © 2016 A Tasty Pixel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIkit.h>

@protocol TPKeyboardAvoidingDelegate <NSObject>

- (BOOL)shouldScrollToFirstResponderWhileKeyboardIsOpening:(UIView*)view;
- (BOOL)shouldScrollToFirstResponderWhenKeyboardIsOpenned:(UIView*)view;
- (void)scrollViewContentInsetIsUpdated:(UIScrollView*)scrollView;

@end
