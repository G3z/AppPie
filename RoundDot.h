//
//  RoundDot.h
//  App Pie
//
//  Created by Giacomo Trezzi on 17/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AppController.h"

#define CIRCLE_RADIUS 25

@interface RoundDot : NSView
{
	float dark;
	IBOutlet AppController * appcontrol;
}
@property (nonatomic) float dark;
@property (nonatomic,retain) IBOutlet AppController * appcontrol;

@end
