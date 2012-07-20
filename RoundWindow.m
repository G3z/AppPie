//
//  RoundWindow.m
//  RoundWindow
//
//  Created by Matt Gallagher on 12/12/08.
//  Copyright 2008 Mocra. All rights reserved.
//

#import "RoundWindow.h"

@implementation RoundWindow

-(void)loadWindow{
	[self setLevel:NSFloatingWindowLevel];
	[self makeKeyAndOrderFront:self];
	[self setAcceptsMouseMovedEvents:YES];
	
	NSPoint currentLocation;
	NSPoint newOrigin;
	NSRect  screenFrame = [[NSScreen mainScreen] frame];
	NSRect  windowFrame = [self frame];
	
	
	//grab the current global mouse location; we could just as easily get the mouse location 
	//in the same way as we do in -mouseDown:
	currentLocation = [NSEvent mouseLocation];
	int windowWidth = [self frame].size.width / 2;
	int windowHeight = [self frame].size.height - 25; 
	newOrigin.x = currentLocation.x - windowWidth + MOUSE_POSITION_X;
	newOrigin.y = currentLocation.y - windowHeight - MOUSE_POSITION_Y;
	
	// Don't let window get dragged up under the menu bar
	if( (newOrigin.y+windowFrame.size.height) > (screenFrame.origin.y+screenFrame.size.height)-20 ){
		newOrigin.y=screenFrame.origin.y + (screenFrame.size.height-windowFrame.size.height)-30;
	}
	
	//go ahead and move the window to the new location
	[self setFrameOrigin:newOrigin];
	[self makeKeyWindow];	
		 
}
//
// initWithContentRect:styleMask:backing:defer:screen:
//
// Init method for the object.
//

- (id)initWithContentRect:(NSRect)contentRect
	styleMask:(NSUInteger)windowStyle
	backing:(NSBackingStoreType)bufferingType
	defer:(BOOL)deferCreation
{
	self = [super
		initWithContentRect:contentRect
		styleMask:NSNonactivatingPanelMask
		backing:bufferingType
		defer:deferCreation];
	if (self)
	{
		[self setOpaque:NO];
		[self setBackgroundColor:[NSColor clearColor]];
	}
	return self;
}

//
// dealloc
//
// Releases instance memory.
//
- (void)dealloc
{
	[[NSNotificationCenter defaultCenter]
		removeObserver:self];
	[super dealloc];
}


@end
