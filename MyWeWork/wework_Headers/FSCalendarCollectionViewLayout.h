//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class FSCalendar, NSMutableDictionary;

@interface FSCalendarCollectionViewLayout : UICollectionViewLayout
{
    FSCalendar *_calendar;
    double _interitemSpacing;
    long long _scrollDirection;
    double *_widths;
    double *_heights;
    double *_lefts;
    double *_tops;
    double *_sectionHeights;
    double *_sectionTops;
    double *_sectionBottoms;
    double *_sectionRowCounts;
    long long _numberOfSections;
    unsigned long long _separators;
    NSMutableDictionary *_itemAttributes;
    NSMutableDictionary *_headerAttributes;
    NSMutableDictionary *_rowSeparatorAttributes;
    struct CGSize _headerReferenceSize;
    struct CGSize _estimatedItemSize;
    struct CGSize _contentSize;
    struct CGSize _collectionViewSize;
    struct UIEdgeInsets _sectionInsets;
}

@property(retain, nonatomic) NSMutableDictionary *rowSeparatorAttributes; // @synthesize rowSeparatorAttributes=_rowSeparatorAttributes;
@property(retain, nonatomic) NSMutableDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) NSMutableDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(nonatomic) unsigned long long separators; // @synthesize separators=_separators;
@property(nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(nonatomic) struct CGSize collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize estimatedItemSize; // @synthesize estimatedItemSize=_estimatedItemSize;
@property(nonatomic) double *sectionRowCounts; // @synthesize sectionRowCounts=_sectionRowCounts;
@property(nonatomic) double *sectionBottoms; // @synthesize sectionBottoms=_sectionBottoms;
@property(nonatomic) double *sectionTops; // @synthesize sectionTops=_sectionTops;
@property(nonatomic) double *sectionHeights; // @synthesize sectionHeights=_sectionHeights;
@property(nonatomic) double *tops; // @synthesize tops=_tops;
@property(nonatomic) double *lefts; // @synthesize lefts=_lefts;
@property(nonatomic) double *heights; // @synthesize heights=_heights;
@property(nonatomic) double *widths; // @synthesize widths=_widths;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) __weak FSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (long long)searchEndSection:(struct CGRect)arg1:(long long)arg2:(long long)arg3;
- (long long)searchStartSection:(struct CGRect)arg1:(long long)arg2:(long long)arg3;
- (void)didReceiveNotifications:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)dealloc;
- (id)init;

@end

