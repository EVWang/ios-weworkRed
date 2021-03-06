//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class UIImageView, UILabel, UIView, WWKMessageRTXNotify;

@interface WWKConversationRTXNotifyBubbleView : WWKConversationMessageBubbleView
{
    UILabel *_contentLabel;
    UIImageView *_thumbImageView;
    UILabel *_titleLabel;
    UIView *_separator;
    UIImageView *_stateImageView;
}

@property(retain, nonatomic) UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageRTXNotify *messageItem; // @dynamic messageItem;

@end

