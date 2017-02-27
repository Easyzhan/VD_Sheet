//
//  VD_Sheet.h
//  FuckTickets
//
//  Created by VD-Dragon on 17/2/25.
//  Copyright © 2017年 Zin戦壕. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VD_Sheet : UIView

@property (nonatomic, copy) void (^Click)(NSInteger clickIndex);

- (instancetype)initWithFrame:(CGRect)frame titleArr:(NSArray *)titleArr;
- (void)hiddenSheet;

@end
