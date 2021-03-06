//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSearchBarViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWCardWallEmptyViewDelegate-Protocol.h"
#import "WWKCardWallListDataSourceDelegate-Protocol.h"
#import "WWSearchTagViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UITableView, WWCardWallEmptyView, WWKCardWallListDataSource, WWKNewCardHolderFooterView, WWSearchTagView;

@interface WWKNewCardHolderListController : WWKSearchBarViewController <UITableViewDelegate, UITableViewDataSource, WWKCardWallListDataSourceDelegate, WWCardWallEmptyViewDelegate, WWSearchTagViewDelegate>
{
    NSArray *_cardInfoArr;
    _Bool _fromSearch;
    NSString *_navigationTitle;
    WWCardWallEmptyView *_emptyView;
    WWKCardWallListDataSource *_listDataSource;
    UIActivityIndicatorView *_indicatorView;
    WWSearchTagView *_searchTagView;
    UITableView *_myCardsTable;
    UITableView *_searchResultTable;
    NSArray *_searchResultArray;
    NSMutableDictionary *_cellHeightDic;
    WWKNewCardHolderFooterView *_tableFooterView;
    long long _historyCount;
}

@property(nonatomic) long long historyCount; // @synthesize historyCount=_historyCount;
@property(retain, nonatomic) WWKNewCardHolderFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDic; // @synthesize cellHeightDic=_cellHeightDic;
@property(retain, nonatomic) NSArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(retain, nonatomic) UITableView *searchResultTable; // @synthesize searchResultTable=_searchResultTable;
@property(retain, nonatomic) UITableView *myCardsTable; // @synthesize myCardsTable=_myCardsTable;
@property(retain, nonatomic) WWSearchTagView *searchTagView; // @synthesize searchTagView=_searchTagView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) WWKCardWallListDataSource *listDataSource; // @synthesize listDataSource=_listDataSource;
@property(retain, nonatomic) WWCardWallEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool fromSearch; // @synthesize fromSearch=_fromSearch;
@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
- (void).cxx_destruct;
- (void)onDidClickTag:(id)arg1;
- (id)s_searchTagView;
- (void)s_searchDidCancel;
- (void)s_searchDidClickSearchKeyword:(id)arg1;
- (id)s_getCurrentSelectedTableView;
- (void)cardWallListDataSourceDidLoadEmpty;
- (void)cardWallListDataSourceDidUpdate;
- (void)cardWallListDataSourceDidFinishLoad:(int)arg1;
- (void)onAddCardFinish:(id)arg1;
- (void)scrollToIndexPathWithCardInfo:(unsigned long long)arg1;
- (id)dataSource;
- (void)p_dataSourceDidFinishLoad;
- (void)onDidTapCardListCell:(id)arg1;
- (id)sectionIndexTitlesForContentTableView;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)stopLoading;
- (void)startLoding;
- (void)inputHistoryCards;
- (void)gotoScanCard;
- (void)p_showEmptyView;
- (void)viewDidLayoutSubviews;
- (id)p_createTable;
- (void)p_initUI;
- (_Bool)shouldHideTableHeaderViewInitial;
- (void)loadDataSource;
- (void)setCardDataSoure:(id)arg1;
- (void)updateSearchTags;
- (id)getSearchTags;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

