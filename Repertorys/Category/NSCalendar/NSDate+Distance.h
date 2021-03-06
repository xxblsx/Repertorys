//
//  NSCalendar+Distance.h
//  Test
//
//  Created by zoenet on 2017/2/28.
//  Copyright © 2017年 xxb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Distance)

/**
 距离今天之前/之后多少天的日期

 @param days 偏移量
 @return 日期
 */
+(NSDate*)distanceTodayOffsetDays:(NSInteger)days;
/**
 距离今天之前/之后多少个月的日期
 
 @param monthes 偏移量
 @return 日期
 */
+(NSDate*)distanceTodayOffsetMonthes:(NSInteger)monthes;

/**
 距离该日期之前/之后多少个月的日期

 @param monthes 偏移量
 @return 日期
 */
-(NSDate*)distanceByOffsetMonthes:(NSInteger)monthes;
/**
 获取该日期在这个月的第一天
 
 @return 日期
 */
-(NSDate*)getFirstDateForThisMonth;
@end
