/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScrollViewIndexBar : UIView {
    NSMutableArray * _backgroundLabels;
    int  _deflectedIndex;
    float  _deflectionAmount;
    NSArray * _entries;
    int  _focusProminence;
    NSMutableArray * _foregroundLabels;
    UIView * _foregroundMaskView;
    UIView * _foregroundWrapperView;
    UIView * _indicatorView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _maximumContentOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _minimumContentOffset;
    float  _preferredIndicatorWidth;
    int  _style;
}

@property (nonatomic, copy) NSArray *entries;
@property (nonatomic) int focusProminence;
@property (nonatomic) struct CGPoint { float x1; float x2; } maximumContentOffset;
@property (nonatomic) struct CGPoint { float x1; float x2; } minimumContentOffset;
@property (nonatomic) int style;

- (void).cxx_destruct;
- (id)__uiktesting_backgroundLabels;
- (id)_backgroundLabelTextColor;
- (void)_createLabels;
- (id)_foregroundFont;
- (id)_indicatorShadowPath;
- (float)_indicatorVerticalPositionForContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)_lowerEntryForOffset:(float)arg1;
- (BOOL)_shouldUseDarkAppearance;
- (void)_showNormalFocusProminence;
- (void)_showReducedFocusProminence;
- (void)_updateColors;
- (id)_upperEntryForOffset:(float)arg1;
- (BOOL)canBecomeFocused;
- (id)entries;
- (int)focusProminence;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)layoutSubviews;
- (struct CGPoint { float x1; float x2; })maximumContentOffset;
- (struct CGPoint { float x1; float x2; })minimumContentOffset;
- (void)resetDeflection:(BOOL)arg1;
- (void)setEntries:(id)arg1;
- (void)setFocusProminence:(int)arg1;
- (void)setIndexOfDeflectedEntry:(int)arg1 amount:(float)arg2;
- (void)setMaximumContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMinimumContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForContentOffset:(struct CGPoint { float x1; float x2; })arg1;

@end
