//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, UIWebView, WWKConversationForwardToolbar, WWKConversationRestatementToolbar, WWKMailAppInterface;

@interface WWKConversationViewControllerMultiSelectionVarType : NSObject
{
    NSMapTable *_selectedMessageItems;
    _Bool _inEditingMode;
    _Bool _inEditingRestatementMode;
    _Bool _batchMailForwardingSelectMembers;
    _Bool _launchingMailApp;
    WWKMailAppInterface *_batchMailForwardingInterface;
    NSArray *_batchMailForwardingSelectContacts;
    scoped_refptr_fd92d7bf _forwardingTargetConversation;
    WWKConversationForwardToolbar *_forwardToolbar;
    WWKConversationRestatementToolbar *_restatementToolbar;
    UIWebView *_pdfWebView;
}

@property(retain, nonatomic) UIWebView *pdfWebView; // @synthesize pdfWebView=_pdfWebView;
@property(retain, nonatomic) WWKConversationRestatementToolbar *restatementToolbar; // @synthesize restatementToolbar=_restatementToolbar;
@property(retain, nonatomic) WWKConversationForwardToolbar *forwardToolbar; // @synthesize forwardToolbar=_forwardToolbar;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

