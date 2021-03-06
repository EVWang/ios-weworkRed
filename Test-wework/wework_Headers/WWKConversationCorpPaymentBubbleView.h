//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, UILabel, UIView, WWKInteractiveLabel, WWKMessageCorpPayment;

@interface WWKConversationCorpPaymentBubbleView : WWKConversationMessageBubbleView <WWKInteractiveLabelDelegate>
{
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    UIView *_separatorLineView;
    UILabel *_contentTitleLabel;
    WWKInteractiveLabel *_contentDetailLabel;
}

@property(retain, nonatomic) WWKInteractiveLabel *contentDetailLabel; // @synthesize contentDetailLabel=_contentDetailLabel;
@property(retain, nonatomic) UILabel *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
- (void).cxx_destruct;
- (_Bool)shouldAutoHighlights;
- (id)contextMenuItems;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WWKMessageCorpPayment *messageItem; // @dynamic messageItem;
@property(readonly) Class superclass;

@end

