//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (QMUI)
+ (id)qmui_hexStringWithInteger:(long long)arg1;
+ (id)hexLetterStringWithInteger:(long long)arg1;
- (id)qmui_stringByRemoveLastCharacter;
- (id)qmui_stringByRemoveCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)downRoundRangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (id)qmui_substringAvoidBreakingUpCharacterSequencesWithRange:(struct _NSRange)arg1;
- (id)qmui_substringAvoidBreakingUpCharacterSequencesWithRange:(struct _NSRange)arg1 lessValue:(_Bool)arg2 countingNonASCIICharacterAsTwo:(_Bool)arg3;
- (id)qmui_substringAvoidBreakingUpCharacterSequencesToIndex:(unsigned long long)arg1;
- (id)qmui_substringAvoidBreakingUpCharacterSequencesToIndex:(unsigned long long)arg1 lessValue:(_Bool)arg2 countingNonASCIICharacterAsTwo:(_Bool)arg3;
- (id)qmui_substringAvoidBreakingUpCharacterSequencesFromIndex:(unsigned long long)arg1;
- (id)qmui_substringAvoidBreakingUpCharacterSequencesFromIndex:(unsigned long long)arg1 lessValue:(_Bool)arg2 countingNonASCIICharacterAsTwo:(_Bool)arg3;
- (struct _NSRange)transformRangeToDefaultModeWithRange:(struct _NSRange)arg1;
- (unsigned long long)transformIndexToDefaultModeWithIndex:(unsigned long long)arg1;
- (unsigned long long)qmui_lengthWhenCountingNonASCIICharacterAsTwo;
- (id)qmui_removeMagicalChar;
- (id)qmui_md5;
- (id)qmui_trimLineBreakCharacter;
- (id)qmui_trimAllWhiteSpace;
- (id)qmui_trim;
- (_Bool)qmui_includesString:(id)arg1;
@end
