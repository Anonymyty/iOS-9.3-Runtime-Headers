/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULivePhotoMapView : UIView {
    UIView *_contentView;
    UIView *_currentTimeView;
    <PULivePhotoMapViewDelegate> *_delegate;
    NSArray *_frameViews;
    float _normalizedCurrentTime;
    NSArray *_normalizedFrameTimes;
    float _normalizedPhotoTime;
    float _normalizedPrePhotoGapTime;
    UIView *_photoView;
    UIView *_prePhotoGapView;
    NSNumber *_selectedTime;
    NSMutableSet *_touches;
}

@property (nonatomic) <PULivePhotoMapViewDelegate> *delegate;
@property (nonatomic) float normalizedCurrentTime;
@property (nonatomic, copy) NSArray *normalizedFrameTimes;
@property (nonatomic) float normalizedPhotoTime;
@property (nonatomic) float normalizedPrePhotoGapTime;
@property (nonatomic) NSNumber *selectedTime;

- (void).cxx_destruct;
- (void)_updateFrameViews;
- (void)_updateSelectedTime;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)normalizedCurrentTime;
- (id)normalizedFrameTimes;
- (float)normalizedPhotoTime;
- (float)normalizedPrePhotoGapTime;
- (id)selectedTime;
- (void)setDelegate:(id)arg1;
- (void)setNormalizedCurrentTime:(float)arg1;
- (void)setNormalizedFrameTimes:(id)arg1;
- (void)setNormalizedPhotoTime:(float)arg1;
- (void)setNormalizedPrePhotoGapTime:(float)arg1;
- (void)setSelectedTime:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end