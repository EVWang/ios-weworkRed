//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UITextField, UIView, WWKCorpEditItem;
@protocol WWKCreateCorpCardCellDelegate;

@interface WWKCreateCorpCardCell : UITableViewCell <UITextFieldDelegate>
{
    UIView *_containerView;
    UIImageView *_avatarView;
    UITextField *_nameTextField;
    UIView *_separatorView;
    UITextField *_corpNameTextField;
    UILabel *_adminLabel;
    UILabel *_adminNameLabel;
    id <WWKCreateCorpCardCellDelegate> _delegate;
    WWKCorpEditItem *_item;
}

@property(retain, nonatomic) WWKCorpEditItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <WWKCreateCorpCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onCorpNameEditingBegin:(id)arg1;
- (void)onCorpNameEditingChange:(id)arg1;
- (void)onNameEditingBegin:(id)arg1;
- (void)onNameEditingChange:(id)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

