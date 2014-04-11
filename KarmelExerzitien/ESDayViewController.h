//
//  ESDayViewController.h
//  FastenKalender
//
//  Created by Christoph Wottawa on 06.02.14.
//  Copyright (c) 2014 Christoph Wottawa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESDay.h"

@interface ESDayViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton *imageButton;
@property (nonatomic, weak) IBOutlet UILabel *dateLabel;
@property (nonatomic, weak) IBOutlet UILabel *dayLabel;
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) ESDay *day;

@property (nonatomic) int index;

@end