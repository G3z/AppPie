//
//  BundleLoader.m
//  App Pie
//
//  Created by Giacomo Trezzi on 21/05/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "BundleLoader.h"


@implementation BundleLoader

/*
 Trovo la mia cartella nell'applicationsupport
 e la creo nel caso non esistesse
*/
- (NSString *)applicationSupportFolder
{
	NSFileManager *fileManager = [NSFileManager defaultManager];
    NSError * error;
	NSString *folder = @"~/Library/Application Support/App Pie/";
	folder = [folder stringByExpandingTildeInPath];
	
	if ([fileManager fileExistsAtPath: folder] == NO)
	{
		[fileManager createDirectoryAtPath:folder withIntermediateDirectories:YES attributes:nil error:&error];
		NSLog(@"%@",error);
	}
	return folder;    
}

/*
 Carico il bundle collegato all'applicazione
*/
- (PieBundle *)loadBundle:(NSString*)bundleName{
    id newInstance;
	NSString * commonName = [self applicationSupportFolder];
	NSString * name = [commonName stringByAppendingPathComponent:bundleName];
	NSString * bundlePath = [name stringByAppendingString:@".pie"];
	NSBundle * bundleToLoad = [NSBundle bundleWithPath:bundlePath];
        newInstance = [[[bundleToLoad principalClass] alloc] init];
	if (newInstance !=nil) {
		return newInstance;
    }
	else
	{
		return NO;
	}
}

@end
