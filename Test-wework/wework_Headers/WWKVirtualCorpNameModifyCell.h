//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface WWKVirtualCorpNameModifyCell : UITableViewCell
{
    UILabel *_corpFullNameContent;
    UILabel *_corpShortNameContent;
}

@property(retain, nonatomic) UILabel *corpShortNameContent; // @synthesize corpShortNameContent=_corpShortNameContent;
@property(retain, nonatomic) UILabel *corpFullNameContent; // @synthesize corpFullNameContent=_corpFullNameContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFullName:(id)arg1 andShortName:(id)arg2;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

