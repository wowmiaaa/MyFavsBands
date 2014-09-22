//
//  MyfavBandsDetailViewController.h
//  MyFavsBands
//
//  Created by webstudent on 9/22/14.
//  Copyright (c) 2014 Rock Vally College. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyfavBandsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
