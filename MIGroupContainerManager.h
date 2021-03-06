/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MIGroupContainerManager : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _queue;
}
+(id)defaultManager;
-(void).cxx_destruct;
-(void)removeReferenceForIdentifiers:(id)identifiers;
-(id)addReferenceForIdentifiers:(id)identifiers toDataContainer:(id)dataContainer;
-(void)reconcileGroupContainers;
-(void)_onQueue_removeReferenceForIdentifiers:(id)identifiers;
-(id)_onQueue_addReferenceForIdentifiers:(id)identifiers toDataContainer:(id)dataContainer;
-(void)_onQueue_reconcileGroupContainers;
-(id)_onQueue_copyReferenceCountSet;
-(id)init;
@end

