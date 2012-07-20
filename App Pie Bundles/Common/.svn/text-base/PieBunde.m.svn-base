//
//  PieBundle.m
//  Xcode
//
//  Created by Giacomo Trezzi on 25/04/09.
//  Copyright 2009 ArtBits. All rights reserved.
//

#import "PieBunde.h"


@implementation PieBunde
@synthesize author,version,scripts,activeAppBID;

- (id)init
{
    self = [super init];
	if (self!=nil) {
		
		/* ------------------------------------ */
		/*      Edit to your needs from here    */
		/* ------------------------------------ */
		
		self.author = @"G[3z]";
		self.version = @"0.1";
		
		NSArray *methodsDescriptions = [NSArray arrayWithObjects:@"Search in Dictionary",
										@"Translate",
										@"Fullscreen Snapshot",
										@"Rectangular Snapshot",
										@"Window Snapshot",
										@"PlayPause iTunes",
										nil];
		
		NSArray * methods = [NSArray arrayWithObjects:NSStringFromSelector(@selector(searchInDictionary)),
							 NSStringFromSelector(@selector(translateText)),
							 NSStringFromSelector(@selector(takeSnapShot)),
							 NSStringFromSelector(@selector(takeRectSnapShot)),
							 NSStringFromSelector(@selector(takeWindowSnapShot)),
							 NSStringFromSelector(@selector(playPauseiTunes)),
							 nil];
		
		/* ------------------------------------ */
		/*               to here                */
		/* ------------------------------------ */
		
		NSArray * commandKeys = [NSArray arrayWithObjects:@"name",@"command",nil];
		NSMutableArray * scriptsM = [NSMutableArray arrayWithCapacity:2];
		for(int i=0;i<[methodsDescriptions count];i++){
			NSArray * description = [NSArray arrayWithObjects:[methodsDescriptions objectAtIndex:i],[methods objectAtIndex:i],nil];
			NSDictionary * commandDict = [NSDictionary dictionaryWithObjects:description forKeys:commandKeys];
			[scriptsM addObject:commandDict];
		}
		
		self.scripts = [NSArray arrayWithArray:scriptsM];
		self.activeAppBID = [[[NSWorkspace sharedWorkspace] activeApplication] objectForKey:@"NSApplicationBundleIdentifier"];
	}
	
    return self;
}

-(void)searchInDictionary{
	ApplicationApplication * activeApp = [SBApplication applicationWithBundleIdentifier:activeAppBID];
	NSString * clipboard;
	[activeApp activate];
	
	SystemEventsApplication * sysEvent = [SBApplication applicationWithBundleIdentifier:@"com.apple.systemevents"];
	[sysEvent keyCode:8 using:SystemEventsEMdsCommandDown];
	NSPasteboard *pasteBoard = [NSPasteboard generalPasteboard];
		//clipboard = [pasteBoard readObjectsForClasses:[NSArray arrayWithObject:@""] options:<#(NSDictionary *)options#>
	NSLog(@"%@",[[[pasteBoard pasteboardItems] lastObject] stringForType:[[[[pasteBoard pasteboardItems] lastObject]types]objectAtIndex:0]]);
	/*
	NSDictionary* errorDict;
	NSAppleEventDescriptor* returnDescriptor = NULL;
	NSString * activeAppName= [[[NSWorkspace sharedWorkspace] activeApplication] objectForKey:@"NSApplicationName"];
    NSString * first = @"tell application \"appname\" \n\
	activate \n\
	set x to the clipboard \n\
	delay 0.2 \n\
	tell application \"System Events\" \n\
	key code 8 using command down \n\
	delay 0.2 \n\
	set theSelectedText to the clipboard \n\
	end tell \n\
	set the clipboard to x \n\
	delay 0.2 \n\
	end tell \n\
	return theSelectedText";
	NSString * actionString = [first stringByReplacingOccurrencesOfString:@"appname" withString:activeAppName];
	NSAppleScript* scriptObject = [[NSAppleScript alloc] initWithSource:actionString];
	//NSLog(@"%@",actionString);
    returnDescriptor = [scriptObject executeAndReturnError: &errorDict];
    [scriptObject release];
	if (returnDescriptor)
    {
        // successful execution
		
        if (kAENullEvent != [returnDescriptor descriptorType])
        {
            // script returned an AppleScript result
			//NSString * selectedText =[returnDescriptor stringValue];
			
			if (cAEList == [returnDescriptor descriptorType])
            {
				// result is a list of other descriptors
            }
            else
            {
                NSString * selectedText =[returnDescriptor stringValue];
				NSPasteboard *pasteboard = [NSPasteboard generalPasteboard];
				[pasteboard declareTypes:[NSArray arrayWithObject:NSStringPboardType] owner:nil];
				[pasteboard setString:selectedText forType:NSStringPboardType];
				
				BOOL success = NSPerformService(@"Look Up in Dictionary",pasteboard);
				if(!success){
					NSLog(@"Errore nell'eseguire il servizio");
				}
				// coerce the result to the appropriate ObjC type
            }
        }
    }
    else
    {
		NSLog(@"Errore %@", errorDict);
		// no script result, handle error here
    }
	*/
}

-(void)takeSnapShot{
	SystemEventsApplication * sysEvent = [SBApplication applicationWithBundleIdentifier:@"com.apple.systemevents"];
	[sysEvent keyCode:20 using:SystemEventsEMdsCommandDown||SystemEventsEMdsShiftDown];
}

-(void)takeRectSnapShot{
	SystemEventsApplication * sysEvent = [SBApplication applicationWithBundleIdentifier:@"com.apple.systemevents"];
	[sysEvent keyCode:21 using:SystemEventsEMdsCommandDown||SystemEventsEMdsShiftDown];
	
}

-(void)takeWindowSnapShot{
	SystemEventsApplication * sysEvent = [SBApplication applicationWithBundleIdentifier:@"com.apple.systemevents"];
	[sysEvent keyCode:21 using:SystemEventsEMdsCommandDown||SystemEventsEMdsShiftDown];
	[sysEvent keyCode:49 using:0];
	/*
	NSDictionary* errorDict;
	NSAppleEventDescriptor* returnDescriptor = NULL;
	NSString * activeAppName= [[[NSWorkspace sharedWorkspace] activeApplication] objectForKey:@"NSApplicationName"];
    NSString * first = @"tell application \"System Events\" \n\
	key code 21 using {command down, shift down}\n\
	delay 0.2 \n\
	key code 49 \n\
	end tell";
	NSString * actionString = [first stringByReplacingOccurrencesOfString:@"appname" withString:activeAppName];
	NSAppleScript* scriptObject = [[NSAppleScript alloc] initWithSource:actionString];
	//NSLog(@"%@",actionString);
    returnDescriptor = [scriptObject executeAndReturnError: &errorDict];
    [scriptObject release];
	if (returnDescriptor)
    {
        // successful execution
		
        if (kAENullEvent != [returnDescriptor descriptorType])
        {
            // script returned an AppleScript result
			
			if (cAEList == [returnDescriptor descriptorType])
            {
				// result is a list of other descriptors
            }
            else
            {
                // coerce the result to the appropriate ObjC type
            }
        }
    }
    else
    {
		NSLog(@"Errore %@", errorDict);
		// no script result, handle error here
    }
	*/
}
-(void)translateText{
	SafariApplication * safari = [SBApplication applicationWithBundleIdentifier:@"com.apple.Safari"];
	NSURL * url = [NSURL URLWithString:@"javascript:(function(F,i,r,e,b,u,g,L,I,T,E){if(F.getElementById(b))return;E=F[i+'NS']&&F.documentElement.namespaceURI;E=E?F[i+'NS'](E,'script'):F[i]('script');E[r]('id',b);E[r]('src',I+g+T);E[r](b,u);(F[e]('head')[0]||F[e]('body')[0]).appendChild(E);E=new%20Image;E[r]('src',I+L);})(document,'createElement','setAttribute','getElementsByTagName','FirebugLite','4','firebug-lite.js','releases/lite/latest/skin/xp/sprite.png','https://getfirebug.com/','#startOpened');"];
	[safari activate];
	[safari open:url];
	/*
	 NSDictionary* errorDict;
	 NSAppleEventDescriptor* returnDescriptor = NULL;
	 NSString * activeAppName= [[[NSWorkspace sharedWorkspace] activeApplication] objectForKey:@"NSApplicationName"];
	 NSString * first = @"tell application \"appname\" \n\
	 activate \n\
	 set x to the clipboard \n\
	 tell application \"System Events\" \n\
	 key code 8 using command down \n\
	 delay 0.2 \n\
	 set theSelectedText to the clipboard \n\
	 set mainurl to \"http://translate.google.com/translate_t?sl=auto&tl=it&q=\" \n\
	 set newUrl to mainurl & theSelectedText \n\
	 open location newUrl \n\
	 end tell \n\
	 set the clipboard to x \n\
	 end tell";
	 NSString * actionString = [first stringByReplacingOccurrencesOfString:@"appname" withString:activeAppName];
	 NSAppleScript* scriptObject = [[NSAppleScript alloc] initWithSource:actionString];
	 //NSLog(@"%@",actionString);
	 returnDescriptor = [scriptObject executeAndReturnError: &errorDict];
	 [scriptObject release];
	 if (returnDescriptor)
	 {
	 // successful execution
	 
	 if (kAENullEvent != [returnDescriptor descriptorType])
	 {
	 // script returned an AppleScript result
	 
	 if (cAEList == [returnDescriptor descriptorType])
	 {
	 // result is a list of other descriptors
	 }
	 else
	 {
	 // coerce the result to the appropriate ObjC type
	 }
	 }  
	 } 
	 else
	 { 
	 NSLog(@"Errore %@", errorDict);
	 // no script result, handle error here
	 }
	 */
}

-(void)playPauseiTunes{
	iTunesApplication *iTunes = [SBApplication applicationWithBundleIdentifier:@"com.apple.iTunes"];
    if ( [iTunes isRunning] ) {
		[iTunes playpause];
	}
}
@end
