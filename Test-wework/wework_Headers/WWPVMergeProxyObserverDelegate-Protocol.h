//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WWPVMergeProxyObserverDelegate <NSObject>

@optional
- (void)onPvMergeRoomChangeNoitfy:(unsigned long long)arg1;
- (void)onPVMergeMissCallDataNotify:(const struct PVPushkitMissCallData *)arg1;
- (void)onPVMergeMisscallNotify:(unsigned long long)arg1 content:(NSString *)arg2 sdkBuff:(NSData *)arg3;
- (void)onPVMergeAcceptNotify:(NSData *)arg1;
- (void)onPVMergeRejectNotify:(NSData *)arg1;
- (void)onPVMergeAddNotify:(vector_c17a647d)arg1 invitevid:(unsigned long long)arg2 invitetype:(unsigned int)arg3 talkData:(NSData *)arg4;
- (void)onPVMergeCreateNotify:(vector_c17a647d)arg1 createvid:(unsigned long long)arg2 invitetype:(unsigned int)arg3 talkData:(NSData *)arg4;
@end

