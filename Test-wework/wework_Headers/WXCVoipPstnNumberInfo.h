//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface WXCVoipPstnNumberInfo : NSObject
{
    unsigned int _waitTime;
    NSString *_pstnName;
    NSString *_pstnLabel;
    NSMutableArray *_pstnNumberList;
}

@property(retain, nonatomic) NSMutableArray *pstnNumberList; // @synthesize pstnNumberList=_pstnNumberList;
@property(nonatomic) unsigned int waitTime; // @synthesize waitTime=_waitTime;
@property(copy, nonatomic) NSString *pstnLabel; // @synthesize pstnLabel=_pstnLabel;
@property(copy, nonatomic) NSString *pstnName; // @synthesize pstnName=_pstnName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
