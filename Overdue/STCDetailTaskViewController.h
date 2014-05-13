//
//  STCDetailTaskViewController.h
//  Overdue

#import <UIKit/UIKit.h>
#import "STCTask.h"

@interface STCDetailTaskViewController : UIViewController

@property (strong, nonatomic) STCTask *task;

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;

- (IBAction)editBarButtonPressed:(UIBarButtonItem *)sender;

@end
