//
//  TPKeyboardAvoidingTableView.h
//  TPKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+TPKeyboardAvoidingAdditions.h"
#import "TPKeyboardAvoidingDelegate.h"

@interface TPKeyboardAvoidingTableView : UITableView <UITextFieldDelegate, UITextViewDelegate>

@property (nonatomic,weak) id<TPKeyboardAvoidingDelegate> keyboardAvoidingDelegate;

- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
