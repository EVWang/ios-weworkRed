//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADFastLZSSHandle.h"

@class XADPrefixCode;

@interface XADZipImplodeHandle : XADFastLZSSHandle
{
    XADPrefixCode *literalcode;
    XADPrefixCode *lengthcode;
    XADPrefixCode *offsetcode;
    int offsetbits;
    _Bool literals;
}

- (void)expandFromPosition:(long long)arg1;
- (id)allocAndParseCodeOfSize:(int)arg1;
- (void)resetLZSSHandle;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 largeDictionary:(_Bool)arg3 hasLiterals:(_Bool)arg4;

@end
