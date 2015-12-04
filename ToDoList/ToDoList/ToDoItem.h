//
//  ToDoItem.h
//  ToDoList
//
//  Created by Justin Youngwook Kang on 7/10/15.
//  Copyright (c) 2015 Justin Youngwook Kang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject



@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end


