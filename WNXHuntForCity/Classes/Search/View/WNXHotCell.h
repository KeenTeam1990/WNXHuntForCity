//
//  WNXHotCell.h
//  WNXHuntForCity
//
//  Created by MacBook on 15/7/17.
//  Copyright (c) 2015年 KeenTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WNXHotCell : UITableViewCell

/** 热门BTN的titles */
@property (nonatomic, strong) NSArray *hotDatas;

+ (instancetype)hotCellWithHotDatas:(NSArray *)hotDatas;

@end
