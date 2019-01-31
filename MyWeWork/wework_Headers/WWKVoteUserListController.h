//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKVoteCommonThemeViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UILabel, UITableView, UIView, WWKVoteDetailItem, WWKVoteListTitleView;

@interface WWKVoteUserListController : WWKVoteCommonThemeViewController <UITableViewDelegate, UITableViewDataSource>
{
    WWKVoteDetailItem *_detailItem;
    vector_89e6321f _users;
    UITableView *_tableView;
    WWKVoteListTitleView *_titleView;
    UIView *_footerView;
    UILabel *_voteCountLabel;
    UIView *_navSeperator;
}

@property(retain, nonatomic) UIView *navSeperator; // @synthesize navSeperator=_navSeperator;
@property(retain, nonatomic) UILabel *voteCountLabel; // @synthesize voteCountLabel=_voteCountLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WWKVoteListTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributeStringWithTitle:(id)arg1 detail:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDetailItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
