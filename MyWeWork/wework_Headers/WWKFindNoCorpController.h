//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface WWKFindNoCorpController : UIViewController
{
    NSString *_personInitMail;
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_returnButton;
    UIButton *_createCorpButton;
}

@property(retain, nonatomic) UIButton *createCorpButton; // @synthesize createCorpButton=_createCorpButton;
@property(retain, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *personInitMail; // @synthesize personInitMail=_personInitMail;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)onCreate;
- (void)onReturn;
- (void)viewDidLoad;

@end

