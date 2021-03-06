//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAGradientLayer, UIImageView, UILabel, WWKMeidaItem;

@interface WWKVideoOrPhotoItemView : UIButton
{
    UIImageView *_thumbImageView;
    CAGradientLayer *_videoGradientLayer;
    UIImageView *_videoImageView;
    UILabel *_videoTimeLabel;
    _Bool _isVideo;
    double _videoDuration;
    WWKMeidaItem *_videoOrPhotoItem;
}

@property(retain, nonatomic) WWKMeidaItem *videoOrPhotoItem; // @synthesize videoOrPhotoItem=_videoOrPhotoItem;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

