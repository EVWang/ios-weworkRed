//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKMessage;

@protocol WWKMessageDelegate <NSObject>

@optional
- (void)message:(WWKMessage *)arg1 didUpdateProgress:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)message:(WWKMessage *)arg1 didUpdateState:(long long)arg2;
- (void)messageDidUpdate:(WWKMessage *)arg1;
- (void)messageFailUpdateNotifcationText:(WWKMessage *)arg1;
- (void)messageDidUpdateNotificationText:(WWKMessage *)arg1;
@end
