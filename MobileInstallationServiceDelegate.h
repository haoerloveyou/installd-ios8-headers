/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSXPCListenerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MobileInstallationServiceDelegate : XXUnknownSuperclass <NSXPCListenerDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end
