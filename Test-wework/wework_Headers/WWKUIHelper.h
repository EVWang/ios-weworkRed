//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKUIHelper : NSObject
{
}

+ (id)generateTableReachingBottomViewWithWidth:(double)arg1 andTitle:(id)arg2;
+ (id)generateAttributedStringWithEmotionsAndUrlsFromText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3;
+ (id)generateAttributedStringWithEmotionsFromText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3;
+ (id)allAvatarsWidthAtServerInPixel;
+ (struct CGSize)label:(id)arg1 bestSizeThatFits:(struct CGSize)arg2 lineHeight:(double)arg3;
+ (void)loadRevealFrameworkIfCan;
+ (_Bool)isRevealFrameworkLoaded;

@end

