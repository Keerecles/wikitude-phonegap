/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <UIKit/UIKit.h>
#import <Foundation/NSJSONSerialization.h>
#import "CDVAvailability.h"
#import "CDVInvokedUrlCommand.h"
#import "CDVCommandDelegate.h"
#import "CDVCommandQueue.h"
#import "CDVWhitelist.h"
#import "CDVScreenOrientationDelegate.h"
<<<<<<< HEAD:iOS/SampleProjects/Basic/HelloWorld/HelloWorld/CordovaLib/Classes/CDVViewController.h

@class CDVCommandQueue;
@class CDVCommandDelegateImpl;

@interface CDVViewController : UIViewController <UIWebViewDelegate, CDVScreenOrientationDelegate>{
    @protected
    CDVCommandDelegateImpl* _commandDelegate;
=======
#import "CDVPlugin.h"

@interface CDVViewController : UIViewController <UIWebViewDelegate, CDVScreenOrientationDelegate>{
    @protected
    id <CDVCommandDelegate> _commandDelegate;
>>>>>>> Updates iOS PhoneGap package to Wikitude SDK 3.0 and PhoneGap 2.8;:iOS/SampleProjects/Extended/HelloImageRecognition/CordovaLib/Classes/CDVViewController.h
    @protected
    CDVCommandQueue* _commandQueue;
    NSString* _userAgent;
}

@property (nonatomic, strong) IBOutlet UIWebView* webView;

@property (nonatomic, readonly, strong) NSMutableDictionary* pluginObjects;
@property (nonatomic, readonly, strong) NSDictionary* pluginsMap;
<<<<<<< HEAD:iOS/SampleProjects/Basic/HelloWorld/HelloWorld/CordovaLib/Classes/CDVViewController.h
@property (nonatomic, readonly, strong) NSDictionary* settings;
@property (nonatomic, readonly, strong) NSXMLParser* configParser;
@property (nonatomic, readonly, strong) CDVWhitelist* whitelist; // readonly for public
@property (nonatomic, readonly, assign) BOOL loadFromString;

@property (nonatomic, readwrite, assign) BOOL useSplashScreen;
@property (nonatomic, readonly, strong) IBOutlet UIActivityIndicatorView* activityView;
@property (nonatomic, readonly, strong) UIImageView* imageView;
=======
@property (nonatomic, readonly, strong) NSMutableDictionary* settings;
@property (nonatomic, readonly, strong) NSXMLParser* configParser;
@property (nonatomic, readonly, strong) CDVWhitelist* whitelist; // readonly for public
@property (nonatomic, readonly, assign) BOOL loadFromString;
@property (nonatomic, readwrite, assign) BOOL useSplashScreen CDV_DEPRECATED(2.5, "Add/Remove the SplashScreen plugin instead of setting this property.");
>>>>>>> Updates iOS PhoneGap package to Wikitude SDK 3.0 and PhoneGap 2.8;:iOS/SampleProjects/Extended/HelloImageRecognition/CordovaLib/Classes/CDVViewController.h

@property (nonatomic, readwrite, copy) NSString* wwwFolderName;
@property (nonatomic, readwrite, copy) NSString* startPage;
@property (nonatomic, readonly, strong) CDVCommandQueue* commandQueue;
<<<<<<< HEAD:iOS/SampleProjects/Basic/HelloWorld/HelloWorld/CordovaLib/Classes/CDVViewController.h
@property (nonatomic, readonly, strong) CDVCommandDelegateImpl* commandDelegate;
=======
@property (nonatomic, readonly, strong) id <CDVCommandDelegate> commandDelegate;
>>>>>>> Updates iOS PhoneGap package to Wikitude SDK 3.0 and PhoneGap 2.8;:iOS/SampleProjects/Extended/HelloImageRecognition/CordovaLib/Classes/CDVViewController.h
@property (nonatomic, readonly) NSString* userAgent;

+ (NSDictionary*)getBundlePlist:(NSString*)plistName;
+ (NSString*)applicationDocumentsDirectory;

- (void)printMultitaskingInfo;
- (void)createGapView;
- (UIWebView*)newCordovaViewWithFrame:(CGRect)bounds;

- (void)javascriptAlert:(NSString*)text;
- (NSString*)appURLScheme;

- (NSArray*)parseInterfaceOrientations:(NSArray*)orientations;
- (BOOL)supportsOrientation:(UIInterfaceOrientation)orientation;

- (id)getCommandInstance:(NSString*)pluginName;
- (void)registerPlugin:(CDVPlugin*)plugin withClassName:(NSString*)className;
- (void)registerPlugin:(CDVPlugin*)plugin withPluginName:(NSString*)pluginName;

- (BOOL)URLisAllowed:(NSURL*)url;

- (BOOL)URLisAllowed:(NSURL*)url;

@end