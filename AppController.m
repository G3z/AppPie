//
//  AppController.m
//  App Pie
//
//  Created by Giacomo Trezzi on 17/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "AppController.h"
#import <Carbon/Carbon.h>

@implementation AppController
@synthesize prefWindow, theItem, theMenu, rWin, isWindowOn, app, bundleController, menuDown, menuLeft, menuRight, leftMouseDown,rightMouseDown;

/*
 Quando l'os mi manda il sengale che un bottone del mouse è premuto agisco!
*/

OSStatus globalMouseDown(EventHandlerCallRef nextHandler, EventRef theEvent, AppController *self) 
{
    NSEvent *anEvent = [NSEvent eventWithEventRef:theEvent];
    NSEventType type = [anEvent type];
	
    //is it a key up event?
    if(type == NSLeftMouseDown){
		self.leftMouseDown = YES;
	}
	if(type == NSRightMouseDown){
		self.rightMouseDown = YES;
	}
	if(type == NSOtherMouseDown){
		[self loadTransparentWindow];		
	}
	if(self.leftMouseDown == YES && self.rightMouseDown == YES){
		[self loadTransparentWindow];
		self.leftMouseDown = NO;
		self.rightMouseDown = NO;
	}

	return CallNextEventHandler(nextHandler, theEvent);
   
}
/*
 Quando l'os mi manda il sengale che un bottone del mouse è stato rilasciato setto i trigger to false
*/

OSStatus globalMouseUp(EventHandlerCallRef nextHandler, EventRef theEvent, AppController *self) 
{
    NSEvent *anEvent = [NSEvent eventWithEventRef:theEvent];
    NSEventType type = [anEvent type];
	
    //is it a key up event?
    if(type == NSLeftMouseUp){
		self.leftMouseDown = NO;
	}
	if(type == NSRightMouseUp){
		self.rightMouseDown = NO;
	}
	return CallNextEventHandler(nextHandler, theEvent);
}

/*
 Quando l'os mi manda il sengale che la scorciatoia è stata premuta chiamo il methodo loadRoundWindow:
*/

OSStatus myHotKeyHandler(EventHandlerCallRef nextHandler,EventRef theEvent,AppController *self)
{
	[self loadTransparentWindow];
	return noErr;		
}

/*
 Carico l'icona nella status bar e ci attacco il menu
*/
 
- (void)activateStatusMenu{
    NSStatusBar *bar = [NSStatusBar systemStatusBar];
    theItem = [bar statusItemWithLength:NSVariableStatusItemLength];
    [theItem retain];
	NSImage *logo;
    logo = [[NSImage alloc] initWithContentsOfFile: [[NSBundle mainBundle] pathForResource:@"MenuBarIcon" ofType:@"png"]];
    [theItem setImage:logo];
	//[theItem setTitle:@"AP"];
	[theItem setHighlightMode:YES];
	[theItem setMenu:theMenu];
	
	SEL loadTransp = @selector(loadTransparentWindow);
	[theItem setAction:loadTransp];

}

/*
 Porto la mia applicazione di fronte alle altre
 carico RoundWindow:
 - se è visibile allora la chiudo e ripulisco i menu
 - se non è visibile carico i menu in basso (se l'applicazione attiva ha il suo bundle) a sinistra e a destra
*/

-(void)loadTransparentWindow{
	if([rWin isVisible]){
		[rWin orderOut:self];
		if(![menuDown isHidden]){
			[menuDown releaseMenu];
		}
		[menuLeft releaseMenu];
		[menuRight releaseMenu];
	}
	else {
		//menuDown.bundleController = nil;
		NSString * activeAppName= [[[NSWorkspace sharedWorkspace] activeApplication] objectForKey:@"NSApplicationName"];
		[menuDown configureMenuWithTitle:activeAppName andActive:YES];
		
		PieBundle * bundle = [bundleController loadBundle:activeAppName];
		if(bundle){
			if([menuDown isHidden]){
				
				menuDown.bundleController = [bundleController loadBundle:activeAppName];
				[menuDown setHidden:NO];
			}
			else {
				menuDown.bundleController = [bundleController loadBundle:activeAppName];
			}

		}
		else {
			[menuDown setHidden:YES];
		}
		
		[menuLeft configureMenuWithTitle:@"Common" andActive:YES];
		menuLeft.bundleController = [bundleController loadBundle:@"Common"];
		[menuRight configureMenuWithTitle:@"Social" andActive:YES];
		menuRight.bundleController = [bundleController loadBundle:@"Social"];
		if([menuDown.thisFloatMenu alphaValue]<1.0){
			[menuDown.thisFloatMenu setAlphaValue:1.0];
		}
		
		if([menuLeft.thisFloatMenu alphaValue]<1.0){
			[menuLeft.thisFloatMenu setAlphaValue:1.0];
		}
		
		if([menuRight.thisFloatMenu alphaValue]<1.0){
			[menuRight.thisFloatMenu setAlphaValue:1.0];
		}
		
		[rWin loadWindow];
		[rWin makeKeyWindow];
	}

	
}

/*
 Porto la mia applicazione di fronte alle altre
 carico la finestra delle preferenze
*/

-(IBAction)loadPrefWindow:(id)sender{
	[prefWindow makeKeyAndOrderFront:self];
	[app activateIgnoringOtherApps:YES];
	[prefWindow setAcceptsMouseMovedEvents:YES];
}

-(void)awakeFromNib{
	[self activateStatusMenu];
	isWindowOn = NO;
	[self attachEventHandlers];
	bundleController = [[BundleLoader alloc] init];
}
/*
 Con un po' di carbon è possibile ricevere eventi globali dal sistema. dai tasti premuti sul mouse ai bottoni della tastiera
*/
- (void)attachEventHandlers
{
	/*
	 Creo un evento per quando una combinazione di tasti viene premuta
	 in questo caso cmd+<
	*/
	EventHotKeyRef myHotKeyRef;
    EventHotKeyID myHotKeyID;
    EventTypeSpec eventType;
	
	eventType.eventClass=kEventClassKeyboard;
	eventType.eventKind=kEventHotKeyPressed;
	
	InstallApplicationEventHandler(&myHotKeyHandler,1,&eventType,self,NULL);
	
	myHotKeyID.signature ='mhk1';
	myHotKeyID.id=1;
	RegisterEventHotKey(50, cmdKey, myHotKeyID, GetApplicationEventTarget(), 0, &myHotKeyRef);
	
    /*
	 Creo un evento per quando il mouse viene pigiato
	*/
    EventTypeSpec eventTypeMD;
    eventTypeMD.eventClass = kEventClassMouse;
    eventTypeMD.eventKind = kEventMouseDown;
    
    EventHandlerUPP handlerFunctionMD = NewEventHandlerUPP(globalMouseDown);
    
    OSStatus errMD = InstallEventHandler(GetEventMonitorTarget(), handlerFunctionMD, 1, &eventTypeMD, self, NULL);
    
    if( errMD )
    {
        NSLog(@"Error registering mouse handler...%d", errMD);
    }
	
	/*
	 e quando viene rilasciato
	*/
    EventTypeSpec eventTypeMU;
    eventTypeMU.eventClass = kEventClassMouse;
    eventTypeMU.eventKind = kEventMouseUp;
	
    EventHandlerUPP handlerFunctionMU = NewEventHandlerUPP(globalMouseUp);
	
    OSStatus errMU = InstallEventHandler(GetEventMonitorTarget(), handlerFunctionMU, 1, &eventTypeMU, self, NULL);
	
    if( errMU )
    {
        NSLog(@"Error registering mouse handler...%d", errMU);
    }
}
@end
