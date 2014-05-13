//
//  STCViewController.h
//  Overdue

#import <UIKit/UIKit.h>
#import "STCAddTaskViewController.h"
#import "STCDetailTaskViewController.h"

@interface STCViewController : UIViewController <STCAddTaskViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) NSMutableArray *taskObjects;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarBarButtonPressed:(UIBarButtonItem *)sender;

@end
