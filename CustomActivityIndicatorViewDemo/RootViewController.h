//
//  RootViewController.h
//  CustomActivityIndicatorViewDemo
//
//  Created by Joshua Grenon on 5/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomActivityIndicatorView.h"

@interface RootViewController : UIViewController<UITableViewDataSource,UITableViewDelegate> {

    IBOutlet UITableView *tblSampleData;
    NSMutableArray *arraySampleData;
    
    CustomActivityIndicatorView *customActivityIndicatorView;
}

@property(nonatomic, retain) IBOutlet UITableView *tblSampleData;
@property(nonatomic, retain) NSMutableArray *arraySampleData;

@property(nonatomic, retain) CustomActivityIndicatorView *customActivityIndicatorView;

-(void)showActivityIndicator;
-(void)hideActivityIndicator;

@end
