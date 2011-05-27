CustomActivityIndicatorViewDemo
============

<img style="float:right" src="https://github.com/joshgrenon/CustomActivityIndicatorView/raw/master/screenshot.png" alt="Screenshot" />

How to install:

1. Copy and add "CustomActivityIndicatorView.h", "CustomActivityIndicatorView.m" and "CustomActivityIndicatorView.xib" to your project.

How to use:

1. Import "CustomActivityIndicatorView.h" into the header file of the class you will use it.

//#import "CustomActivityIndicatorView.h"

2. Add a property for the CustomActivityIndicatorView in your header file. 

CustomActivityIndicatorView *customActivityIndicatorView;
@property(nonatomic, retain) CustomActivityIndicatorView *customActivityIndicatorView;

3. Show CustomActivityIndicatorView in self.view

customActivityIndicatorView = [[CustomActivityIndicatorView alloc] init];
[self.view addSubview:customActivityIndicatorView.view];
[self.view bringSubviewToFront:customActivityIndicatorView.view];

4. Hide CustomActivityIndicatorView in self.view

[customActivityIndicatorView.view removeFromSuperview];