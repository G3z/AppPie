//
//  MenuCell.m
//  App Pie
//
//  Created by Giacomo Trezzi on 26/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "MenuCell.h"

@implementation MenuCell
@synthesize cellName,method, menuController, dark;

-(void)mouseDown:(NSEvent *)theEvent{
	dark = 0.1;
	[self setNeedsDisplay:YES];
	
}


- (void)mouseUp:(NSEvent *)theEvent{
	dark = 0;
	[self setNeedsDisplay:YES];
	[[self superview] mouseUp:theEvent];
	[menuController performSelector:self.method];
	
}

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
		dark = 0;
    }
    return self;
}

- (void)drawRect:(NSRect)rect {
	NSBezierPath * roundrect= [NSBezierPath bezierPathWithRoundedRect:rect xRadius:3 yRadius:3];
	[[NSColor clearColor] set];
	[roundrect fill];
	
	
	NSGradient* aGradient =
	[[[NSGradient alloc]
	  initWithColorsAndLocations:
	  [NSColor colorWithDeviceCyan:0.46 magenta:0.38 yellow:0.39 black:0.03 alpha:.8], (CGFloat)0.0,
	  [NSColor colorWithDeviceCyan:0.24 magenta:0.19 yellow:0.19 black:0 alpha:.8], (CGFloat)1.0,
	  nil]
	 autorelease];
	//[aGradient drawInBezierPath:roundrect angle:90];
	
	[[NSColor colorWithDeviceCyan:(0.32+dark) magenta:(0.25+dark) yellow:(0.25+dark) black:(0+dark) alpha:1] set];
	[roundrect fill];
	
	NSMutableDictionary * attribs = [NSMutableDictionary dictionary];
	
	NSMutableParagraphStyle *pstyle = [[NSMutableParagraphStyle alloc] 
									   init];
	[pstyle setParagraphStyle: [NSParagraphStyle defaultParagraphStyle]];
	[pstyle setAlignment: NSCenterTextAlignment];
	
	[attribs setObject:[NSFont fontWithName:@"Lucida Grande" size:10] forKey:NSFontAttributeName];
	[attribs setObject:pstyle forKey:NSParagraphStyleAttributeName];
	[attribs setObject:[NSColor whiteColor] forKey:NSForegroundColorAttributeName];
	
	[cellName drawAtPoint:NSMakePoint(4, 0) withAttributes:attribs];
}

@end
