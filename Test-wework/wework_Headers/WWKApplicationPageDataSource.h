//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WWKApplicationPageDataSource : NSObject
{
    NSMutableArray *_totalApps;
}

- (void).cxx_destruct;
- (id)p_createMoreAppSection;
- (id)p_createNormalSection;
- (id)p_createAppItemWithOpenApiApp:(const struct WSNewCorpAppDetail *)arg1;
- (void)showOrHideApp:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (id)getCachedDataWithType:(long long)arg1;
- (void)add_test;
- (id)getUISectionsWithType:(long long)arg1 andTotalApps:(id)arg2;
- (id)getAppSectionsWithTotalApps:(id)arg1;
- (id)convertToUIData:(const vector_f21734ed *)arg1;
- (void)logAPPsInfo:(const vector_f21734ed *)arg1;
- (void)loadDataWithType:(long long)arg1 withCallback:(CDUnknownBlockType)arg2;

@end

