//
//  DQWrapperView.h
//  DQA11y
//
//  Created by Chris McMeeking on 4/17/15.
//  Copyright (c) 2015 Deque Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

//! This is a view that wraps around two or more elements that are related.  This is used for accessibility purposes.
/*! DQWrapperViews are useful when one element in the view is a button or a switch and the other item is a label that describes what it does. Note that an exception will be thrown if there are too many levels of views.  (For example, if there is a view with a button inside of a DQWrapperView.)  DQWrapperViews are meant to simply group similar elements together for accessibility.*/
@interface DQWrapperView : UIView

//! When the view is tapped, the button or switch in the wrapperView is tapped as well.
- (void)singleTapView;

@end