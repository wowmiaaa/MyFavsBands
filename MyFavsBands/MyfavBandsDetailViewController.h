//
//  MyfavBandsDetailViewController.h
//  MyFavsBands
//
//  Created by webstudent on 9/22/14.
//  Copyright (c) 2014 Rock Vally College. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyfavBandsDetailViewController : UIViewController
{
    //1) Add Default initializers
    NSString *productName;
    CGFloat previousScale;
    CGFloat previousRotation;
    CGFloat beginX;
    CGFloat beginY;
}
//2) Modify.
//This will get rid of error on MasterViewConrtoller:
//(void)prepareForSegue:

@property (strong, nonatomic) IBOutlet UIImageView *productImageView;
@property (strong, nonatomic) NSString *productName;
@end

