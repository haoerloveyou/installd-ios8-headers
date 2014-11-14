/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileInstallerProtocol.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MIClientConnection : XXUnknownSuperclass <MobileInstallerProtocol> {
	NSXPCConnection* _xpcConnection;
	unsigned _percentComplete;
}
@property(readonly, assign, nonatomic) unsigned percentComplete;
@property(assign, nonatomic) __weak NSXPCConnection* xpcConnection;
-(void).cxx_destruct;
-(void)updateAppDataProtectionWithOptions:(id)options completion:(id)completion;
-(void)updateSinfForLSWithIdentifier:(id)identifier withOptions:(id)options sinfData:(id)data completion:(id)completion;
-(void)updateSinfForIdentifier:(id)identifier withOptions:(id)options sinfData:(id)data completion:(id)completion;
-(void)checkCapabilities:(id)capabilities withOptions:(id)options completion:(id)completion;
-(void)listSafeHarborsOfType:(int)type withOptions:(id)options completion:(id)completion;
-(void)removeSafeHarborForIdentifier:(id)identifier ofType:(int)type withOptions:(id)options completion:(id)completion;
-(void)registerSafeHarborAtPath:(id)path forIdentifier:(id)identifier ofType:(int)type withOptions:(id)options completion:(id)completion;
-(void)processRestoredContainerWithIdentifier:(id)identifier ofType:(int)type options:(id)options completion:(id)completion;
-(void)listArchivesWithOptions:(id)options completion:(id)completion;
-(void)removeArchiveForIdentifier:(id)identifier withOptions:(id)options completion:(id)completion;
-(void)archiveIdentifier:(id)identifier withOptions:(id)options completion:(id)completion;
-(void)fetchDiskUsageForIdentifiers:(id)identifiers withOptions:(id)options completion:(id)completion;
-(void)fetchInstalledAppsWithOptions:(id)options completion:(id)completion;
-(void)clearUninstalledIdentifiers:(id)identifiers withOptions:(id)options completion:(id)completion;
-(void)lookupUninstalledWithOptions:(id)options completion:(id)completion;
-(void)uninstallIdentifiers:(id)identifiers withOptions:(id)options completion:(id)completion;
-(void)installPath:(id)path withOptions:(id)options completion:(id)completion;
-(void)_doBackgroundInstallationForPath:(id)path withOptions:(id)options completion:(id)completion;
-(void)sendProgressWithStatus:(id)status;
-(void)sendProgressWithStatus:(id)status percentComplete:(unsigned)complete;
-(void)sendProgressWithDictionary:(id)dictionary;
-(id)clientName;
@end
