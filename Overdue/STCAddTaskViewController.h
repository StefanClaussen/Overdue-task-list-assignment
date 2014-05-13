//
//  STCAddTaskViewController.h
//  Overdue

#import <UIKit/UIKit.h>
#import "STCTask.h"

@protocol STCAddTaskViewControllerDelegate <NSObject>

- (void)didCancel;
- (void)didAddTask:(STCTask *)task;

@end


@interface STCAddTaskViewController : UIViewController

@property (weak, nonatomic) id <STCAddTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)addTaskButtonPressed:(UIButton *)sender;

- (IBAction)cancelButtonPressed:(UIButton *)sender;

@end
