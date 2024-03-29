//
//  MSViewController.h
//  UIScrollView Challenge Solution
//
//  Created by Miguel Serrano on 15/05/14.
//  Copyright (c) 2014 Miguel Serrano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MSViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *globalImageView;

@end
