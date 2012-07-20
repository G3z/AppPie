//
//  AppController.h
//  App Pie
//
//  Created by Giacomo Trezzi on 17/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "RoundWindow.h"
#import "ApMenuControl.h"
#import "BundleLoader.h"

@class PieBundle;

@interface AppController : NSObject {
	IBOutlet NSWindow * prefWindow;
	NSStatusItem * theItem;
	IBOutlet NSMenu * theMenu;
	IBOutlet RoundWindow * rWin;
	IBOutlet NSApplication * app;
	IBOutlet ApMenuControl * menuLeft;
	IBOutlet ApMenuControl * menuRight;
	IBOutlet ApMenuControl * menuDown;
	BundleLoader * bundleController;
	BOOL isWindowOn;
	BOOL leftMouseDown;
	BOOL rightMouseDown;
}

@property (nonatomic, retain) IBOutlet NSWindow * prefWindow;
@property (nonatomic, retain) NSStatusItem * theItem;
@property (nonatomic, retain) IBOutlet NSMenu * theMenu;
@property (nonatomic, retain) RoundWindow * rWin;
@property (nonatomic, retain) NSApplication * app;
@property (nonatomic, retain) IBOutlet ApMenuControl * menuLeft;
@property (nonatomic, retain) IBOutlet ApMenuControl * menuRight;
@property (nonatomic, retain) IBOutlet ApMenuControl * menuDown;
@property (nonatomic, retain) BundleLoader * bundleController;
@property (nonatomic) BOOL isWindowOn;
@property (nonatomic) BOOL leftMouseDown;
@property (nonatomic) BOOL rightMouseDown;

-(void)loadTransparentWindow;
-(IBAction)loadPrefWindow:(id)sender;
- (void)attachEventHandlers;
@end
