//
//  AppMenu.m
//  Xcode
//
//  Created by Giacomo Trezzi on 25/04/09.
//  Copyright 2009 ArtBits. All rights reserved.
//

#import "Xcode.h"


@implementation Xcode

-(NSDictionary *)definition{
	NSDictionary * resulDictionary;
	
	/*
	 List of the selectors for each method
	*/
	SEL one = @selector(methodOne);
	NSString * oneS = NSStringFromSelector(one);
	
	SEL two = @selector(methodTwo);
	NSString * twoS = NSStringFromSelector(two);
	/*
	 Array of Selectors, add you selectors here
	*/
	NSArray *selectors = [NSArray arrayWithObjects:oneS,
													twoS,
													nil];
	/*
	 Add the label that will appear on the menu here
	*/
	NSArray *descriptions = [NSArray arrayWithObjects:@"Prova",
													@"Seconda Voce",
													nil];
	
	resulDictionary = [NSDictionary dictionaryWithObjects:selectors forKeys:descriptions];
	return resulDictionary;
}

-(void)methodOne{
	NSLog(@"Method One Called");
}

-(void)methodTwo{
	NSLog(@"Method Two Called");
}
@end
