//
//  STCViewController.h
//  Overdue

#import <UIKit/UIKit.h>
#import "STCAddTaskViewController.h"

@interface STCViewController : UIViewController <STCAddTaskViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *taskObjects;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarBarButtonPressed:(UIBarButtonItem *)sender;

@end
