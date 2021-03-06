//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WWKForwardingControllerDelegate-Protocol.h"
#import "WWMyFileListViewDelegate-Protocol.h"
#import "WWMyFileLoadCloudMessageHelperDelegate-Protocol.h"

@class NSString, UISegmentedControl, WWMyFileCollectionView, WWMyFileLoadCloudMessageHelper, WWMyFileTableView;
@protocol WWMyFileListSelectDelegate;

@interface WWMyFileListNewViewController : UIViewController <WWMyFileListViewDelegate, WWMyFileLoadCloudMessageHelperDelegate, WWKForwardingControllerDelegate>
{
    _Bool _mIsOnsharing;
    id <WWMyFileListSelectDelegate> _mSelectDelegate;
    UISegmentedControl *_tabSegment;
    WWMyFileTableView *_fileTableView;
    WWMyFileCollectionView *_imageCollectionView;
    scoped_refptr_fd92d7bf _mConv;
    WWMyFileLoadCloudMessageHelper *_mLoadCloudMsgHelper;
    unsigned long long _mListType;
    unsigned long long _mConvId;
}

@property(nonatomic) unsigned long long mConvId; // @synthesize mConvId=_mConvId;
@property(nonatomic) unsigned long long mListType; // @synthesize mListType=_mListType;
@property(retain, nonatomic) WWMyFileLoadCloudMessageHelper *mLoadCloudMsgHelper; // @synthesize mLoadCloudMsgHelper=_mLoadCloudMsgHelper;
@property(nonatomic) scoped_refptr_fd92d7bf mConv; // @synthesize mConv=_mConv;
@property(retain, nonatomic) WWMyFileCollectionView *imageCollectionView; // @synthesize imageCollectionView=_imageCollectionView;
@property(retain, nonatomic) WWMyFileTableView *fileTableView; // @synthesize fileTableView=_fileTableView;
@property(retain, nonatomic) UISegmentedControl *tabSegment; // @synthesize tabSegment=_tabSegment;
@property(nonatomic) _Bool mIsOnsharing; // @synthesize mIsOnsharing=_mIsOnsharing;
@property(nonatomic) __weak id <WWMyFileListSelectDelegate> mSelectDelegate; // @synthesize mSelectDelegate=_mSelectDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getThumbImageFromItemDataImg:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)thumbImageLoadSpeedOptimized;
-     // Error parsing type: v36@0:8^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}}24B32, name: forwardingMessage:ToConversation:isSuccess:
- (void)didSelectedFileItem:(id)arg1;
- (_Bool)isSelectViewType;
- (void)wwMyFileLoadCloudMessageHelper:(id)arg1 onFinish:(int)arg2;
- (unsigned long long)getListType;
- (unsigned long long)getConvId;
- (id)getLoadCloudMessageHelper;
- (void)onLeftCancelBtnClick:(id)arg1;
- (void)setConversation:(scoped_refptr_fd92d7bf)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showCollectionView;
- (void)showTableView;
- (void)viewDidLayoutSubviews;
- (void)onChangeSegment:(id)arg1;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithListType:(unsigned long long)arg1 convId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

