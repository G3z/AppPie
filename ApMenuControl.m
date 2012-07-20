#import "ApMenuControl.h"

@implementation ApMenuControl
@synthesize thisFloatMenu, label, bundleController, dark,appControll;

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
		dark= 0;
		
    }
    return self;
}

- (void)drawRect:(NSRect)rect{
	NSRect bounds = [self bounds];
	[[NSColor clearColor] set];
	NSRectFill(bounds);
	
	NSBezierPath * roundrect= [NSBezierPath bezierPathWithRoundedRect:bounds xRadius:10.0 yRadius:10.0];
	NSGradient* aGradient =
	[[[NSGradient alloc]
	  initWithColorsAndLocations:
	  [NSColor colorWithDeviceCyan:(0.46 + dark) magenta:(0.38 + dark) yellow:(0.39 + dark) black:(0.03 + dark) alpha:.8], (CGFloat)0.0,
	  [NSColor colorWithDeviceCyan:(0.24 + dark) magenta:(0.19 + dark) yellow:(0.19 + dark) black:(0 + dark) alpha:.8], (CGFloat)1.0,
	  nil]
	 autorelease];
	[aGradient drawInBezierPath:roundrect angle:90];
	
	
	[[[NSColor whiteColor] colorWithAlphaComponent:0.6] set];
	//[roundrect stroke];
	
}

- (void)mouseDown:(NSEvent *)theEvent{
	dark=0.1;
	if(thisFloatMenu == nil){
		[self menuFromBundle:bundleController];
	}
	
	[self setNeedsDisplay:YES];	
}

-(void)mouseUp:(NSEvent *)theEvent{
	dark=0;
	[self setNeedsDisplay:YES];
	if(thisFloatMenu == nil){
		NSLog(@"qui");
		/*
		[[thisFloatMenu animator] setAlphaValue:1.0];
		[[thisFloatMenu animator] setFrame:endPosition];
		*/
	}
	else {
		NSRect endPosition = [thisFloatMenu frame];
		if([thisFloatMenu alphaValue] < 1.0){
			endPosition.origin.y += ANIMATION_VALUE;
			[NSAnimationContext beginGrouping];
			[[NSAnimationContext currentContext] setDuration:0.15f];
			
			[[thisFloatMenu animator] setAlphaValue:1.0];
			[[thisFloatMenu animator] setFrame:endPosition];
			
			[NSAnimationContext endGrouping];
			[self setNeedsDisplay:YES];
		}
		else {
			endPosition.origin.y += -ANIMATION_VALUE;
			[NSAnimationContext beginGrouping];
			[[NSAnimationContext currentContext] setDuration:0.2f];
			
			[[thisFloatMenu animator] setAlphaValue:0.0];
			[[thisFloatMenu animator] setFrame:endPosition];
			
			[NSAnimationContext endGrouping];
			[self setNeedsDisplay:YES];
		}		
	}
}

-(void)releaseMenu{
	[bundleController release];
	[thisFloatMenu setAlphaValue:0.0];
	thisFloatMenu = nil;
	[thisFloatMenu autorelease];
}

-(void)menuFromBundle:(PieBundle *)bundle{
	int menuX;
	NSArray * methods = [bundle scripts];
	NSRect frame = [self frame];
	if(frame.origin.x == 67){
		menuX = frame.origin.x - 32;
	}
	else if(frame.origin.x == 160){
		menuX = frame.origin.x;
	}
	else if (frame.origin.x == 253) {
		menuX = frame.origin.x + 32;
	}
	NSRect menuRect = NSMakeRect(menuX, (frame.origin.y - (([methods count]*CELL_HEIGHT)+10)-5)-ANIMATION_VALUE, frame.size.width, ([methods count]*CELL_HEIGHT)+10);
	thisFloatMenu = [[FloatMenu alloc] initWithFrame:menuRect];
	thisFloatMenu.menuController = bundle;
	thisFloatMenu.myMenuControl = self;
	[[[self window] contentView] addSubview:thisFloatMenu];
	
	
	
	[thisFloatMenu setWantsLayer:YES];
	[thisFloatMenu setAlphaValue:0.0];
	//[thisFloatMenu setHidden:NO];
	[thisFloatMenu addCells];
	
	[self setWantsLayer:YES];
}
- (void)clickDone{
	[appControll loadTransparentWindow];
}

- (void)configureMenuWithTitle:(NSString *)title andActive:(BOOL)type{
	if(type){
		[label setStringValue:title];
		
	}
	else{
		[self setHidden:YES];
	}
}

- (BOOL)acceptsFirstMouse:(NSEvent *)theEvent{
	return YES;
}

@end
