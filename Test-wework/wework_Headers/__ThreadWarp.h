//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface __ThreadWarp : NSObject
{
    id m_target;
    SEL m_sel;
    id m_arg;
}

@property(retain, nonatomic) id m_arg; // @synthesize m_arg;
@property(nonatomic) SEL m_sel; // @synthesize m_sel;
@property(retain, nonatomic) id m_target; // @synthesize m_target;
- (void)Run;
- (void)dealloc;
- (id)init;

@end

