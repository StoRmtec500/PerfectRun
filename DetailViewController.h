//
//  DetailViewController.h
//  PerfectRun
//
//  Created by Martin Kuenz on 09.10.14.
//  Copyright (c) 2014 Martin Kuenz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

