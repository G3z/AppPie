//
//  FloatMenu.m
//  App Pie
//
//  Created by Giacomo Trezzi on 20/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "FloatMenu.h"


@implementation FloatMenu
@synthesize menuController, myMenuControl;

- (void)mouseUp:(NSEvent *)theEvent{	
	[self setAlphaValue:0.0];
	[myMenuControl clickDone];
}

- (void)drawRect:(NSRect)rect{
	NSRect bounds = [self bounds];
	[[NSColor clearColor] set];
	NSRectFill(bounds);
	
	NSBezierPath * roundrect= [NSBezierPath bezierPathWithRoundedRect:bounds xRadius:10.0 yRadius:10.0];
	
	[[[NSColor grayColor] colorWithAlphaComponent:.9] set];
	[roundrect fill];
	
	
	[[[NSColor whiteColor] colorWithAlphaComponent:0.6] set];
	//[roundrect stroke];
}


- (void)addCells{
	NSArray * methods = [menuController scripts];
	if([methods count] > 0){
		for (int i = 1; i<=[methods count]; i++) {
			NSDictionary * method = [methods objectAtIndex:i-1];
			NSString * methodString = [method objectForKey:@"name"];
			NSRect cellRect = NSMakeRect(2, ([self bounds].size.height - ((i*CELL_HEIGHT)+5)), [self bounds].size.width - 4, CELL_HEIGHT-1);
			MenuCell * cell = [[MenuCell alloc] initWithFrame:cellRect];
			cell.cellName = methodString;
			cell.method = NSSelectorFromString([method objectForKey:@"command"]);
			cell.menuController = menuController;
			[self addSubview:cell];
			
		}
	}
}


-(void)dealloc{
	[menuController release];
	[super dealloc];
}
@end
