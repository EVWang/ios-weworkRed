//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MWXCMService.h"

#import "MWXCMService-Protocol.h"

@class NSObject, NSString, WXCPCMAudioFile;
@protocol OS_dispatch_queue, WXCAUAudioDataSource;

@interface WXCAUAudioDevice : MWXCMService <MWXCMService>
{
    struct {
        struct OpaqueAudioComponentInstance *ioUnit;
        struct AudioStreamBasicDescription inputDataFormat;
        struct AudioStreamBasicDescription outputDataFormat;
        id <WXCAUAudioDataSource> recordDS;
        id <WXCAUAudioDataSource> playDS;
        unsigned int volumeFactor;
        _Bool isRunning;
    } mAUState;
    int mWillWorkMode;
    int mWorkMode;
    int mInSamplerate;
    int mInChannels;
    int mInFrameSize;
    int mOutChannels;
    int mOutSamplerate;
    int mOutFrameSize;
    char *pRecBuff;
    int mRBLeft;
    char *pPlayBuff;
    int mPBLeft;
    _Bool bSpeakerphone;
    _Bool bMicrophoneMute;
    _Bool bEnableProximity;
    unsigned int mCurrentAudioMode;
    NSString *mOutFromName;
    WXCPCMAudioFile *mOutPCMFile;
    NSObject<OS_dispatch_queue> *m_speakerQueue;
    _Bool _mIsSpeakerOnBeforeHeadSet;
    int audioDevErrCode;
    unsigned int _mAudioCategoryBeforeVoip;
    id <WXCAUAudioDataSource> dataSource;
}

@property(nonatomic) unsigned int mAudioCategoryBeforeVoip; // @synthesize mAudioCategoryBeforeVoip=_mAudioCategoryBeforeVoip;
@property(nonatomic) _Bool mIsSpeakerOnBeforeHeadSet; // @synthesize mIsSpeakerOnBeforeHeadSet=_mIsSpeakerOnBeforeHeadSet;
@property(nonatomic) int audioDevErrCode; // @synthesize audioDevErrCode;
@property(nonatomic) int workMode; // @synthesize workMode=mWorkMode;
@property(nonatomic) id <WXCAUAudioDataSource> dataSource; // @synthesize dataSource;
- (_Bool)isRunning;
- (void)StopForVoIP;
- (_Bool)StartRecordAndPlayForVoIP;
- (void)StopPlay;
- (_Bool)StartPlay;
- (void)setCaptureToFileFrom:(id)arg1;
- (void)UnPluginHeadset;
- (void)PluginHeadset;
- (void)setVolumeFactor:(unsigned int)arg1;
- (_Bool)isSilent;
- (_Bool)getAudioSpeakerphone;
- (_Bool)getSpeakerphone;
- (void)setSpeakerphone:(_Bool)arg1;
- (_Bool)getMicrophoneMute;
- (void)setMicrophoneMute:(_Bool)arg1;
- (int)setPlayDataFormat:(int)arg1 Channels:(int)arg2 Duration:(int)arg3;
- (int)setRecDataFormat:(int)arg1 Channels:(int)arg2 Duration:(int)arg3;
- (void)dealloc;
- (id)init;
- (void)StopSession;
- (_Bool)StartSessionWithWorkMode:(int)arg1;
- (void)SetOutputCallback:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetInputCallback:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetOutputDataFormat:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetInputDataFormat:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetDataFormat:(struct AudioStreamBasicDescription *)arg1 SampleRate:(int)arg2 ChannelPerFrame:(int)arg3;
- (void)SetOutputIOEnable:(struct OpaqueAudioComponentInstance *)arg1 enabled:(_Bool)arg2;
- (void)SetInputIOEnable:(struct OpaqueAudioComponentInstance *)arg1 enabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

