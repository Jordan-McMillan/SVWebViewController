//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

@protocol SVWebViewDelegate <UIWebViewDelegate>

-(void)webViewDidCloseModal;

@end

@interface SVWebViewController : UIViewController

- (instancetype)initWithAddress:(NSString*)urlString andWebViewDelegate:(id<SVWebViewDelegate>)webViewDelegate;
- (instancetype)initWithURL:(NSURL*)URL andWebViewDelegate:(id<SVWebViewDelegate>)webViewDelegate;
- (instancetype)initWithURLRequest:(NSURLRequest *)request andWebViewDelegate:(id<SVWebViewDelegate>)webViewDelegate;

@end
