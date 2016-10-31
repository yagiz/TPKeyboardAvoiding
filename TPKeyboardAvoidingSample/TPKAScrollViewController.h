//
//  TPKAScrollViewController.h
//  TPKeyboardAvoidingSample
//
//  Created by Michael Tyson on 26/06/2015.
//  Copyright (c) 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TPKeyboardAvoidingScrollView.h"

@interface TPKAScrollViewController : UIViewController <TPKeyboardAvoidingDelegate>

@property (weak, nonatomic) IBOutlet TPKeyboardAvoidingScrollView *scrollView;
@end
