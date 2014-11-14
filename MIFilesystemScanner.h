/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol MIFilesystemScannerDelegate;

__attribute__((visibility("hidden")))
@interface MIFilesystemScanner : XXUnknownSuperclass {
	id<MIFilesystemScannerDelegate> _delegate;
	unsigned _options;
}
@property(retain) id<MIFilesystemScannerDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)performScanWithError:(id*)error;
-(id)init;
-(id)initWithScanOptions:(unsigned)scanOptions;
-(BOOL)_scanBundleContainersWithError:(id*)error;
-(BOOL)_scanBundleContainerType:(int)type withError:(id*)error;
-(BOOL)_scanFrameworksLocationsWithError:(id*)error;
-(BOOL)_scanForPluginsInFrameworksDirectory:(id)frameworksDirectory withError:(id*)error;
-(BOOL)_scanAppsDirectory:(id)directory withError:(id*)error;
@end
