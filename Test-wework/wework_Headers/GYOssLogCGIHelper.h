//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GYOssLogCGIHelper : NSObject
{
    NSString *_url;
    NSMutableDictionary *_header;
    NSMutableDictionary *_parameters;
    NSMutableArray *_multipart;
    long long _errCode;
    NSString *_errMsg;
    unsigned long long _appId;
    unsigned long long _authType;
    unsigned long long _platform;
    NSString *_sid;
    unsigned long long _vid;
    NSString *_appVersion;
    NSString *_os;
    unsigned long long _logSize;
    NSString *_logContent;
    NSString *_imei;
    NSString *_deviceType;
    NSString *_deviceId;
    unsigned long long _channelId;
    NSString *_nickname;
}

@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *logContent; // @synthesize logContent=_logContent;
@property(nonatomic) unsigned long long logSize; // @synthesize logSize=_logSize;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long authType; // @synthesize authType=_authType;
@property(nonatomic) unsigned long long appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;
- (void)reset;
- (void)uploadLogData:(id)arg1 withSid:(id)arg2 loggerCallback:(CDUnknownBlockType)arg3;
- (void)uploadLog:(id)arg1 withSid:(id)arg2 loggerCallback:(CDUnknownBlockType)arg3;
- (_Bool)isUploadSuccess:(id)arg1;
- (void)fillParameters;
- (id)init;

@end

