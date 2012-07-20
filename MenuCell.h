//
//  MenuCell.h
//  App Pie
//
//  Created by Giacomo Trezzi on 26/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AppController.h"

@class PieBundle;

@interface MenuCell : NSView {
	NSString * cellName;
	SEL method;
	PieBundle * menuController;
	float dark;

}
@property (nonatomic, retain) NSString * cellName;
@property (nonatomic, readwrite) SEL method;
@property (nonatomic, retain) PieBundle * menuController;
@property (nonatomic) float dark;

@end
