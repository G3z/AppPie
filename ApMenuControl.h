#import <Cocoa/Cocoa.h>
#import "FloatMenu.h"

#define CELL_HEIGHT 15
#define ANIMATION_VALUE 20

@class AppController;
@class PieBundle;

@interface ApMenuControl : NSView {
	FloatMenu * thisFloatMenu;
	IBOutlet NSTextField * label;
	IBOutlet AppController * appControll;
	id bundleController;
	float dark;
}

@property (nonatomic, retain) FloatMenu * thisFloatMenu;
@property (nonatomic, retain) IBOutlet NSTextField * label;
@property (nonatomic, retain) IBOutlet AppController * appControll;
@property (nonatomic, retain) id bundleController;
@property (nonatomic) float dark;


- (void)configureMenuWithTitle:(NSString *)title andActive:(BOOL)type;
- (void)menuFromBundle:(PieBundle *)bundle;
- (void)releaseMenu;
- (void)clicDone;
@end
