//
//  STCTask.m
//  Overdue
//
//  Created by Stefan Claussen on 12/05/2014.
//  Copyright (c) 2014 One foot after the other. All rights reserved.
//

#import "STCTask.h"

@implementation STCTask

-(id)initWithData:(NSDictionary *)data
{
    self = [super init];
    
    if (self) {
        self.title = data[TASK_TITLE];
        self.description = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    
    return self;
}

-(id)init
{
    self = [self initWithData:nil];
    
    return self;
}

@end
