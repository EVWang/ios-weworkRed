//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, UITableView, UIView;
@protocol WWKMultipleSelectionControllerDelegate;

@interface WWKMultipleSelectionController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _mIsSelectedFinished;
    id <WWKMultipleSelectionControllerDelegate> _delegate;
    UIView *_mHeaderView;
    UITableView *_mTableView;
    NSMutableArray *_mSrcDataItems;
    NSMutableSet *_mSelectedItemIndexs;
    NSString *_mTopTipsWording;
}

@property(nonatomic) _Bool mIsSelectedFinished; // @synthesize mIsSelectedFinished=_mIsSelectedFinished;
@property(copy, nonatomic) NSString *mTopTipsWording; // @synthesize mTopTipsWording=_mTopTipsWording;
@property(retain, nonatomic) NSMutableSet *mSelectedItemIndexs; // @synthesize mSelectedItemIndexs=_mSelectedItemIndexs;
@property(retain, nonatomic) NSMutableArray *mSrcDataItems; // @synthesize mSrcDataItems=_mSrcDataItems;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UIView *mHeaderView; // @synthesize mHeaderView=_mHeaderView;
@property(nonatomic) __weak id <WWKMultipleSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didDismissActionView;
- (void)onConfirmBtnClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataItems:(id)arg1 withSelectedIndexs:(id)arg2 tipsWording:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

