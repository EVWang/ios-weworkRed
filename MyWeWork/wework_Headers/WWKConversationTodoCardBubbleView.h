//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageMaskedBubbleView.h"

@class UILabel, WWKMessageTodoCard;

@interface WWKConversationTodoCardBubbleView : WWKConversationMessageMaskedBubbleView
{
    UILabel *_titleLabel;
    UILabel *_summaryLabel;
}

@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)contextMenuItems;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageTodoCard *messageItem; // @dynamic messageItem;

@end

