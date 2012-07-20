//
//  BundleLoader.h
//  App Pie
//
//  Created by Giacomo Trezzi on 21/05/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class PieBundle;

@interface BundleLoader : NSObject {

}

- (NSString *)applicationSupportFolder;
- (PieBundle *)loadBundle:(NSString*)bundleName;

@end
