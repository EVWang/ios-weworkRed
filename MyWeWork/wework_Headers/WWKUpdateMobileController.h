//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKCountryPickerControllerDelegate-Protocol.h"

@class MSWeakTimer, NSString, UIButton, UITextField, UIView, UpdateMobileTableView;
@protocol WWKUpdateMobileControllerDelegate;

@interface WWKUpdateMobileController : UIViewController <UITableViewDataSource, UITableViewDelegate, WWKCountryPickerControllerDelegate>
{
    MSWeakTimer *_timer;
    int _timeCounter;
    long long _type;
    id <WWKUpdateMobileControllerDelegate> _delegate;
    UITextField *_editTextField;
    NSString *_code;
    UIView *_headerView;
    UIButton *_getVerifyCodeButton;
    UpdateMobileTableView *_tableView;
    struct PhoneItem _phoneItem;
}

@property(retain, nonatomic) UpdateMobileTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *getVerifyCodeButton; // @synthesize getVerifyCodeButton=_getVerifyCodeButton;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) UITextField *editTextField; // @synthesize editTextField=_editTextField;
@property(nonatomic) __weak id <WWKUpdateMobileControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct PhoneItem phoneItem; // @synthesize phoneItem=_phoneItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onDidSelectInterCodeItem:(id)arg1;
- (void)p_showAlertViewWithString:(id)arg1;
- (void)timeCountAfterGetVerifyCodePressed:(id)arg1;
- (void)enableGetVerifyCodeButton;
- (void)getVerifyCode:(id)arg1;
- (void)getVerifyCodeButtonClicked:(id)arg1;
- (void)onEditingChange:(id)arg1;
- (id)verifyCodeButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleSave:(id)arg1;
- (void)handleComplete:(id)arg1;
- (void)handleNext:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
