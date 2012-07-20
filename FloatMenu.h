//
//  FloatMenu.h
//  App Pie
//
//  Created by Giacomo Trezzi on 20/04/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MenuCell.h"


#define CELL_HEIGHT 15

@class PieBundle, ApMenuControl;

@interface FloatMenu : NSView {
	PieBundle * menuController;
	ApMenuControl * myMenuControl;
}

@property (nonatomic, retain) PieBundle * menuController;
@property (nonatomic, retain) ApMenuControl * myMenuControl;

- (void)addCells;

@end
