//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView;

@interface WWKMapDistanceBottomBar : UIControl
{
    UIView *_topSeparator;
    UILabel *_rightLabel;
    UILabel *_titleLabel;
    UIImageView *_indicatiorImageView;
}

@property(retain, nonatomic) UIImageView *indicatiorImageView; // @synthesize indicatiorImageView=_indicatiorImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
- (void).cxx_destruct;
- (void)_layout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
