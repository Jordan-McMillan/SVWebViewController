//
//  SVModalWebViewController.h
//
//  Created by Oliver Letterer on 13.08.11.
//  Copyright 2011 Home. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <UIKit/UIKit.h>
#import "SVWebViewController.h"

@interface SVModalWebViewController : UINavigationController

- (instancetype)initWithAddress:(NSString*)urlString andWebViewDelegate:(id<SVWebViewDelegate>)webViewDelegate;
- (instancetype)initWithURL:(NSURL *)URL andWebViewDelegate:(id<SVWebViewDelegate>)webViewDelegate;
- (instancetype)initWithURLRequest:(NSURLRequest *)request andWebViewDelegate:(id<SVWebViewDelegate>)webViewDelegate;

@property (nonatomic, strong) UIColor *barsTintColor;

@end
