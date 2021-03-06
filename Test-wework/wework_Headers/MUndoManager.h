//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol MUndoManagerDelegate;

@interface MUndoManager : NSObject
{
    NSMutableArray *_tools;
    NSMutableArray *_undoTools;
    NSMutableArray *_redoTools;
    id <MUndoManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <MUndoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)addTool:(id)arg1;
- (void)addToolSuccess:(id)arg1;
- (void)removeToolFromAllSystem:(id)arg1;
- (void)removeInvaildMutableToolsByTool:(id)arg1;
- (void)removeTool:(id)arg1;
- (void)removeToolFromTools:(id)arg1;
- (void)addToolToTools:(id)arg1;
- (_Bool)redo;
- (_Bool)undo;
- (void)redoTool:(id)arg1;
- (void)undoTool:(id)arg1;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (id)initWithTools:(id)arg1;

@end

