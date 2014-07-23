//
//  HistoryViewController.h
//  Protein Tracker
//
//  Created by Jay Maru on 6/25/14.
//  Copyright (c) 2014 test. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HistoryViewController : UIViewController
{
    NSMutableArray *history;
}
@property (weak, nonatomic) IBOutlet UILabel *historyLabel;
- (void)setHistory:(NSMutableArray *)h;
@end
