//
//  MBProgressHUD+Ex.h
//
//  Created by itcast on 13-4-18.
//  Copyright (c) 2013年 itcast. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (T)
+ (void)showSuccess:(NSString*)success toView:(UIView*)view;
+ (void)showError:(NSString*)error toView:(UIView*)view;

+ (MBProgressHUD*)showMessage:(NSString*)message toView:(UIView*)view;

+ (void)showSuccess:(NSString*)success;
+ (void)showError:(NSString*)error;

+ (MBProgressHUD*)showMessage:(NSString*)message;

+ (void)hideHUDForView:(UIView*)view;
+ (void)hideHUD;

@end
