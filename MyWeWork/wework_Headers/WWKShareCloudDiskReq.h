//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseReq.h"

#import "WWKApiSerializable-Protocol.h"

@class NSString, WWKMessageAttachment;

@interface WWKShareCloudDiskReq : WWKBaseReq <WWKApiSerializable>
{
    WWKMessageAttachment *_attachment;
}

@property(retain, nonatomic) WWKMessageAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

