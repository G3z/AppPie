//
//  PieBundle.h
//  Xcode
//
//  Created by Giacomo Trezzi on 25/04/09.
//  Copyright 2009 ArtBits. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "iTunes.h"
#import "Safari.h"
#import "SystemEvents.h"
#import "Application.h"

@interface PieBunde: NSObject {
	NSString * author;
	NSString * version;
	NSArray * scripts;
	NSString * activeAppBID;
}

@property (nonatomic, retain) NSString * author;
@property (nonatomic, retain) NSString * version;
@property (nonatomic, retain) NSArray * scripts;
@property (nonatomic, retain) NSString * activeAppBID;

-(void)searchInDictionary;
-(void)translateText;
-(void)takeSnapShot;
-(void)takeRectSnapShot;
-(void)takeWindowSnapShot;
-(void)playPauseiTunes;

@end

