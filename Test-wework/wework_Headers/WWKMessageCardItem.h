//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessageCardItem : WWKMessageMedia
{
    unsigned long long _linkId;
    NSString *_subject;
    NSString *_picUrl;
    NSString *_summary;
    NSString *_btnText;
    NSString *_jumpUrl;
    NSString *_loginType;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(retain, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) unsigned long long linkId; // @synthesize linkId=_linkId;
- (void).cxx_destruct;
- (id)htmlRepresentationToWeixin;
- (id)htmlRepresentation;

@end

