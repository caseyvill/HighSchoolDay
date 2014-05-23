//
//  UoMTask.h
//  HighSchoolDay
//
//  Created by Casey Forsyth on 2014-05-22.
//  Copyright (c) 2014 UofM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UoMTask : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
