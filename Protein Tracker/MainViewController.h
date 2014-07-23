//
//  Test2ViewController.h
//  Protein Tracker
//
//  Created by Jay Maru on 6/18/14.
//  Copyright (c) 2014 test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"

@interface MainViewController : UIViewController {
    int total;
    NSMutableArray *amountHistory;

}
@property (weak, nonatomic) IBOutlet UILabel *totalLabel;
@property (weak, nonatomic) IBOutlet UILabel *goalLabel;
@property (weak, nonatomic) IBOutlet UITextField *amountText;
- (IBAction)addProtein:(id)sender;
- (IBAction)unwindToMain:(UIStoryboardSegue *)segue;
@end
