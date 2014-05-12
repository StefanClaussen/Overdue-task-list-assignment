//
//  STCViewController.h
//  Overdue
//
//  Created by Stefan Claussen on 12/05/2014.
//  Copyright (c) 2014 One foot after the other. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STCViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarBarButtonPressed:(UIBarButtonItem *)sender;

@end
