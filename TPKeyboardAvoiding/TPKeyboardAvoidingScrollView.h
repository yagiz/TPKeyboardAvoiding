//
//  TPKeyboardAvoidingScrollView.h
//  TPKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+TPKeyboardAvoidingAdditions.h"
#import "TPKeyboardAvoidingDelegate.h"

@interface TPKeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate, UITextViewDelegate>

@property (nonatomic,weak) id<TPKeyboardAvoidingDelegate> keyboardAvoidingDelegate;

- (void)contentSizeToFit;
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
