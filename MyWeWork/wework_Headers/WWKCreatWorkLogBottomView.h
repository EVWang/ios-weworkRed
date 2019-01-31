//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol WWKCreatWorkLogBottomViewDelegate;

@interface WWKCreatWorkLogBottomView : UIView
{
    _Bool _isDetail;
    _Bool _titleExpandAll;
    UIButton *_actionButton;
    id <WWKCreatWorkLogBottomViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_moreLabel;
    UIButton *_moreButton;
}

@property(nonatomic) _Bool titleExpandAll; // @synthesize titleExpandAll=_titleExpandAll;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WWKCreatWorkLogBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (double)getBottomViewHeightWithText:(id)arg1 constWidth:(double)arg2 isFoDetail:(_Bool)arg3;
- (id)getShowTextForDetail;
- (void)clickOnMoreButton:(id)arg1;
- (void)layoutSubviews;
- (void)configue:(id)arg1 showMore:(id)arg2 withActionButtonTitle:(id)arg3 isActionButtonShow:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 isFoDetail:(_Bool)arg2;

@end
