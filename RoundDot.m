//
//  RoundDot.m
//  App Pie
//
//  Created by Giacomo Trezzi on 17/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "RoundDot.h"


@implementation RoundDot
@synthesize dark, appcontrol;

- (void)mouseDown:(NSEvent *)theEvent{	
	dark =0.1;
	[self setNeedsDisplay:YES];
}

- (void)mouseUp:(NSEvent *)theEvent{	
	dark=0;
	[self setNeedsDisplay:YES];
	[appcontrol loadTransparentWindow];
}

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
		dark= 0;
    }
    return self;
}

//
// drawRect:
//
// Draws the frame of the window.
//

- (void)drawRect:(NSRect)rect
{
	//CGContextRef context = [[NSGraphicsContext currentContext] graphicsPort];
	
	//quadrato trasparente
	[[NSColor clearColor] set];
	NSRectFill(rect);
	//cerchio
	int windowWidth = [super frame].size.width / 2;
	int windowHeight = [super frame].size.height; 
	
	NSRect circleRect;
	circleRect.origin.x = windowWidth - CIRCLE_RADIUS;
	circleRect.origin.y = windowHeight - 2*CIRCLE_RADIUS;
	circleRect.size.width = 2 * CIRCLE_RADIUS;
	circleRect.size.height = 2 * CIRCLE_RADIUS;
	
	NSBezierPath * circlePath = [NSBezierPath bezierPathWithOvalInRect:circleRect];
	
	//Gradiente da grigio chiaro a scuro verso l'alto
	NSGradient* aGradient =
		[[[NSGradient alloc]
		  initWithColorsAndLocations:
		  [NSColor colorWithDeviceCyan:0.46+dark magenta:0.38+dark yellow:0.39+dark black:0.03+dark alpha:.8], (CGFloat)0.0,
		  [NSColor colorWithDeviceCyan:0.24+dark magenta:0.19+dark yellow:0.19+dark black:0+dark alpha:.8], (CGFloat)1.0,
		  nil]
		autorelease];
	[aGradient drawInBezierPath:circlePath angle:90];
	
	//contorno del cerchio bianco
	[[[NSColor whiteColor] colorWithAlphaComponent:0.6] set];
	//[circlePath stroke];
}

- (BOOL)acceptsFirstMouse:(NSEvent *)theEvent{
	return YES;
}
@end
