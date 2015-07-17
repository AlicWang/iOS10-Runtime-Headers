/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileViewController : PUTileController {
    BOOL  __edgeAntialiasingEnabled;
    id /* block */  __onReadyToDisplayBlock;
    NSTimer * __readinessTimer;
    UIView * __tintView;
    UIView * __visibleRectView;
    NSArray * _gestureRecognizers;
    BOOL  _isReadyForDisplay;
    UIView * _view;
}

@property (setter=_setEdgeAntialiasingEnabled:, nonatomic) BOOL _edgeAntialiasingEnabled;
@property (setter=_setOnReadyToDisplayBlock:, nonatomic, copy) id /* block */ _onReadyToDisplayBlock;
@property (setter=_setReadinessTimer:, nonatomic, retain) NSTimer *_readinessTimer;
@property (setter=_setTintView:, nonatomic, retain) UIView *_tintView;
@property (setter=_setVisibleRectView:, nonatomic, retain) UIView *_visibleRectView;
@property (nonatomic, retain) NSArray *gestureRecognizers;
@property (setter=_setReadyForDisplay:, nonatomic) BOOL isReadyForDisplay;
@property (nonatomic, readonly) BOOL isViewLoaded;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (BOOL)_edgeAntialiasingEnabled;
- (void)_handleReadinessForced:(BOOL)arg1;
- (void)_invalidateTintView;
- (id /* block */)_onReadyToDisplayBlock;
- (id)_readinessTimer;
- (void)_setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setOnReadyToDisplayBlock:(id /* block */)arg1;
- (void)_setReadinessTimer:(id)arg1;
- (void)_setReadyForDisplay:(BOOL)arg1;
- (void)_setTintView:(id)arg1;
- (void)_setView:(id)arg1;
- (void)_setVisibleRectView:(id)arg1;
- (id)_tintView;
- (void)_updateTintView;
- (void)_updateVisibleRectView;
- (id)_visibleRectView;
- (void)addToTilingView:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)dealloc;
- (void)didChangeVisibleRect;
- (id)gestureRecognizers;
- (BOOL)isPresentationActive;
- (BOOL)isReadyForDisplay;
- (BOOL)isViewLoaded;
- (void)loadView;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareForReuse;
- (id)presentationLayoutInfo;
- (void)removeAllAnimations;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (id)view;
- (void)viewDidLoad;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (BOOL)wantsVisibleRectChanges;

@end