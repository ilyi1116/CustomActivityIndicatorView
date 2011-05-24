//
//  CustomProgressView.m
//  CustomActivityIndicatorViewDemo
//
//  Created by Joshua Grenon on 5/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "CustomActivityIndicatorView.h"
#import <QuartzCore/QuartzCore.h>

@implementation CustomActivityIndicatorView

-(id)init
{ 
	[super initWithNibName:@"CustomActivityIndicatorView" bundle:nil];	
	return self;
}

- (void)dealloc
{
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    UIView *loadingView = [self.view.subviews objectAtIndex:0];
    loadingView.autoresizingMask = UIViewAutoresizingNone;;
    loadingView.layer.cornerRadius = 10;
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
