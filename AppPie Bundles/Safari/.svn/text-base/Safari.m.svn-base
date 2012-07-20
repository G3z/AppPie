//
//  AppMenu.m
//  Xcode
//
//  Created by Giacomo Trezzi on 25/04/09.
//  Copyright 2009 ArtBits. All rights reserved.
//

#import "Safari.h"


@implementation Safari

-(NSDictionary *)definition{
	NSDictionary * resulDictionary;
	
	/*
	 List of the selectors for each method
	*/
	SEL one = @selector(methodOne);
	NSString * oneS = NSStringFromSelector(one);
	
	/*
	 Array of Selectors, add you selectors here
	*/
	NSArray *selectors = [NSArray arrayWithObjects:oneS,
													nil];
	/*
	 Add the label that will appear on the menu here
	*/
	NSArray *descriptions = [NSArray arrayWithObjects:@"Pubblica su G3z.eu",
													nil];
	
	resulDictionary = [NSDictionary dictionaryWithObjects:selectors forKeys:descriptions];
	return resulDictionary;
}

-(void)methodOne{
	NSDictionary* errorDict;
	NSAppleEventDescriptor* returnDescriptor = NULL;
	
		//  NSAppleScript* scriptObject = [[NSAppleScript alloc] initWithSource:@"\
								 tell application \"Safari\" to open location \"http://www.g3z.eu\""];
	NSAppleScript* scriptObject = [[NSAppleScript alloc] initWithSource:@"\
								   tell application \"Safari\" do JavaScript \"var%20d=document,w=window,e=w.getSelection,k=d.getSelection,x=d.selection,s=(e?e():(k)?k():(x?x.createRange().text:0)),f='http://www.g3z.eu/wp-admin/press-this.php',l=d.location,e=encodeURIComponent,u=f+'?u='+e(l.href)+'&t='+e(d.title)+'&s='+e(s)+'&v=4';a=function(){if(!w.open(u,'t','toolbar=0,resizable=1,scrollbars=1,status=1,width=720,height=570'))l.href=u;};if%20(/Firefox/.test(navigator.userAgent))%20setTimeout(a,%200);%20else%20a();void(0)\""];
    returnDescriptor = [scriptObject executeAndReturnError: &errorDict];
    [scriptObject release];
	if (returnDescriptor != NULL)
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
        // no script result, handle error here
    }
}

@end
