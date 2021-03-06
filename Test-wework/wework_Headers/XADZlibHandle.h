//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADStreamHandle.h"

@class XADHandle;

@interface XADZlibHandle : XADStreamHandle
{
    XADHandle *parent;
    long long startoffs;
    struct z_stream_s zs;
    _Bool inited;
    _Bool seekback;
    _Bool endstreamateof;
    unsigned char inbuffer[16384];
}

+ (id)deflateHandleWithHandle:(id)arg1 length:(long long)arg2;
+ (id)deflateHandleWithHandle:(id)arg1;
+ (id)zlibHandleWithHandle:(id)arg1 length:(long long)arg2;
+ (id)zlibHandleWithHandle:(id)arg1;
- (void)_raiseZlib;
- (int)streamAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)resetStream;
- (void)setEndStreamAtInputEOF:(_Bool)arg1;
- (void)setSeekBackAtEOF:(_Bool)arg1;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 header:(_Bool)arg3 name:(id)arg4;
- (double)estimatedProgress;

@end

