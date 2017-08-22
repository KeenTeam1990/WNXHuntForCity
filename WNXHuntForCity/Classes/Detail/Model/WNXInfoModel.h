//
//  WNXInfoModel.h
//  WNXHuntForCity
//
//  Created by MacBook on 15/7/19.
//  Copyright (c) 2015年 KeenTeam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WNXInfoModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, assign) BOOL isShowImage;
@property (nonatomic, assign) CGFloat cellHeight;

+ (instancetype)infoModelWithDict:(NSDictionary *)dict;

@end
