//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITextView;
@protocol WWKRemindEditCellDelegate;

@interface WWKRemindEditCell : UITableViewCell <UITextViewDelegate>
{
    UILabel *_placeHolderLabel;
    _Bool _canEdit;
    UITextView *_textView;
    id <WWKRemindEditCellDelegate> _delegate;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) __weak id <WWKRemindEditCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)p_initSubViews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
