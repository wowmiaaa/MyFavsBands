//
//  MyfavBandsDetailViewController.m
//  MyFavsBands
//
//  Created by webstudent on 9/22/14.
//  Copyright (c) 2014 Rock Vally College. All rights reserved.
//

#import "MyfavBandsDetailViewController.h"
//1) Delete or comment out next three line

@implementation MyfavBandsDetailViewController
//2) Add sythesize
@synthesize productName;

#pragma mark - Managing the detail item


- (void) viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    //5) Modify/Delete ViewDidLoad
    self.title = productName;
    NSString *imageName = [NSString stringWithFormat:@"%@.jpg", productName];
    self.productImageView.image = [UIImage imageNamed:imageName];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
