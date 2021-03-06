//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessageNotify : WWKMessageMedia
{
    _Bool _needAuthH5;
    _Bool _needJumpH5;
    long long _adminType;
    NSString *_title;
    NSString *_avatarUrl;
    NSString *_subject;
    NSString *_summary;
    NSString *_buttonTitle;
    NSString *_html5URL;
    NSString *_loginType;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(nonatomic) _Bool needJumpH5; // @synthesize needJumpH5=_needJumpH5;
@property(nonatomic) _Bool needAuthH5; // @synthesize needAuthH5=_needAuthH5;
@property(copy, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(copy, nonatomic) NSString *html5URL; // @synthesize html5URL=_html5URL;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long adminType; // @synthesize adminType=_adminType;
- (void).cxx_destruct;
- (id)htmlRepresentation;

@end

