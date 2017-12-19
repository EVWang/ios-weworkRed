//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXCNetWorkDelegate-Protocol.h"

@class NSString;

@interface WXCNetworkLongLinkAuthHelper : NSObject <WXCNetWorkDelegate>
{
    unsigned long long mBackgroudID;
}

+ (id)getLongLinkAuthReqBuffer;
+ (int)sendLongLinkReconnectReqForListener:(id)arg1;
+ (int)sendLongLinkReconnectReq;
+ (int)checkAndSendLongLinkReconnectReqForListener:(id)arg1;
+ (int)checkAndSendLongLinkReconnectReq;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (void)endBackgroundTask;
- (void)beginBackgroundTask;
- (int)checkAndSendHello;
- (void)sendBackgroundHeartbeat;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
