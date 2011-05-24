//
//  RootViewController.h
//  CustomActivityIndicatorViewDemo
//
//  Created by Joshua Grenon on 5/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController<UITableViewDataSource,UITableViewDelegate> {

    IBOutlet UITableView *tblSampleData;
    NSMutableArray *arraySampleData;
}

@property(nonatomic, retain) IBOutlet UITableView *tblSampleData;
@property(nonatomic, retain) NSMutableArray *arraySampleData;

-(void)showActivityIndicator;
-(void)hideActivityIndicator;

@end
