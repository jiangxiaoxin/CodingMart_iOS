//
//  QuickLoginViewController.h
//  CodingMart
//
//  Created by Ease on 16/8/23.
//  Copyright © 2016年 net.coding. All rights reserved.
//

#import "EABaseTableViewController.h"

@interface QuickLoginViewController : EABaseTableViewController
+ (instancetype)storyboardVCWithPhone:(NSString *)phone;
@property (copy, nonatomic) void (^loginSucessBlock)();

@end
