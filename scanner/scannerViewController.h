//
//  scannerViewController.h
//  scanner
//
//  Created by Charles Konkol on 8/31/13.
//  Copyright (c) 2013 Chuck Konkol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"

@interface scannerViewController : UIViewController
<UIImagePickerControllerDelegate,ZBarReaderDelegate>{
    
    IBOutlet UITextView *resultTextView;
}
@property (nonatomic, retain) IBOutlet UITextView *resultTextView;
@property (nonatomic, retain) UIImagePickerController *imgPicker;

-(IBAction)StartScan:(id) sender;

@end
