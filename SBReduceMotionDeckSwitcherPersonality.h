//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDeckSwitcherPersonality.h"

@interface SBReduceMotionDeckSwitcherPersonality : SBDeckSwitcherPersonality
{
}

- (unsigned long long)_currentFinalAction;
- (_Bool)activeGestureIsMostlyHorizontal;
- (id)_activeGesture;
- (unsigned long long)_activeAppIndex;
- (id)_layoutContext;
- (double)_cardWidth;
- (double)_perCardAdditionalScaleCoefficient;
- (id)overrideLayoutSettingsForIndex:(unsigned long long)arg1 defaultSettings:(id)arg2;
- (id)topMostAppLayout;
- (double)_scaleForContainerViewForIndex:(unsigned long long)arg1;
- (double)_scaleForTransformForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 scrollProgress:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 frameOrigin:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (struct CGRect)_frameForContainerViewDuringOffscreenCardFlyIn;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(_Bool)arg5 ignoreInsertionsAndRemovals:(_Bool)arg6;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 ignoreInsertionsAndRemovals:(_Bool)arg3;
- (_Bool)_shouldAccountForScaleWhenAdjustingContentOffsetForActiveGesture;
- (double)_scaleForInactiveCardsOffscreenForFlyIn;
- (double)_scaleForContainerView;
- (struct CGRect)_frameForContainerView;
- (_Bool)_forcePressGestureCanBreathe;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)_opacityForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3 ignoringInactiveCardsHidden:(_Bool)arg4 ignoringVisibleItemContainers:(_Bool)arg5;
- (double)_titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)homeScreenBlurProgress;
- (double)homeScreenAlpha;
- (double)switcherOpacity;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)scrollViewPagingEnabled;

@end
