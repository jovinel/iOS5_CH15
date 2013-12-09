//
//  ViewController.h
//  SlowWorker
//
//  Created by Crescens Techstars on 12/6/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *startButton;
@property (weak, nonatomic) IBOutlet UITextView *resultsTextView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *spinner;

- (IBAction)doWork:(id)sender;

@end
