//
//  Location.h
//  PerfectRun
//
//  Created by Martin Kuenz on 09.10.14.
//  Copyright (c) 2014 Martin Kuenz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Run;

@interface Location : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSDate * timestamp;
@property (nonatomic, retain) Run *run;

@end
