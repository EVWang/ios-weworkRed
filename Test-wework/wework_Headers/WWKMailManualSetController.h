//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, NSString, WWKManualSetHeaderView;

@interface WWKMailManualSetController : UITableViewController
{
    NSMutableArray *_dataSource;
    struct MailProtocolInfo _mailProtocolInfo;
    WWKManualSetHeaderView *_headerView;
    unsigned long long _type;
    NSString *_navigationTitle;
    CDUnknownBlockType _completehandle;
}

@property(copy, nonatomic) CDUnknownBlockType completehandle; // @synthesize completehandle=_completehandle;
@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_showToast:(id)arg1 mode:(long long)arg2;
- (_Bool)p_isGmailMail;
- (struct MailProtocolInfo)p_getDefaultMailProtocolInfoWithType:(int)arg1 andMailAddress:(const basic_string_a490aa4c *)arg2 passWord:(const basic_string_a490aa4c *)arg3;
- (void)p_showAlertTitle:(id)arg1 andMessage:(id)arg2;
- (void)p_rightBarItemClick;
- (id)p_sectionTitleView:(id)arg1;
- (void)p_didSegmentSelectChange:(id)arg1;
- (id)p_getIndexpathWithType:(unsigned long long)arg1;
- (void)p_updateMailProtocolInfo:(id)arg1 withIndexPath:(id)arg2;
- (id)p_cellDetailTitleWithIndexPath:(id)arg1;
- (id)p_cellTitleWithIndexPath:(id)arg1;
- (Class)p_cellClassWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setMailProtocolInfo:(const struct MailProtocolInfo *)arg1;
- (void)initHeaderView;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;

@end

