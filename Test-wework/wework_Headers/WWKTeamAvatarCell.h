//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKTextTableViewCell.h"

@class NSString, UIImageView;

@interface WWKTeamAvatarCell : WWKTextTableViewCell
{
    NSString *_urlString;
    double _avatarWidth;
    UIImageView *_avatarView;
}

@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)setAvatarUrl:(id)arg1;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

