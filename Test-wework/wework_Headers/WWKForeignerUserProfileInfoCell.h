//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class UIImageView, UILabel, WWKAvatarImageView;

@interface WWKForeignerUserProfileInfoCell : WWKSimpleTableViewCell
{
    scoped_refptr_e1f85e48 _user;
    struct CorpBriefInfo _corpInfo;
    UILabel *_nameLabel;
    UILabel *_corpLabel;
    WWKAvatarImageView *_avatarImageView;
    UIImageView *_genderImageView;
    UIImageView *_starImageView;
    UIImageView *_turnOverImageView;
}

@property(retain, nonatomic) UIImageView *turnOverImageView; // @synthesize turnOverImageView=_turnOverImageView;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) WWKAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *corpLabel; // @synthesize corpLabel=_corpLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onDidClickCorpName;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)cellLongPress:(id)arg1;
- (void)menuControllerWillHide:(id)arg1;
- (void)contextMenuCopy:(id)arg1;
- (id)contextMenuItems;
- (void)respondQueryRect:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutLabelWithAvatarSize:(double)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)showGender:(_Bool)arg1;
- (void)showAvailable:(_Bool)arg1;
- (void)showStarContact:(_Bool)arg1;
- (void)setUser:(scoped_refptr_e1f85e48)arg1 withSuitableDepartmentID:(unsigned long long)arg2 fromChannel:(long long)arg3;
- (void)avatarDidTap:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

