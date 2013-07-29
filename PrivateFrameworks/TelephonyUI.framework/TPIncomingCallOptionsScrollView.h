/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPIncomingCallOptionsView, UIView;

@interface TPIncomingCallOptionsScrollView : UIScrollView <UIScrollViewDelegate> {
    TPIncomingCallOptionsView *_optionsView;
    UIView *_offIntoInfinityView;
    BOOL _isDecelerating;
}

@property(retain) TPIncomingCallOptionsView * optionsView;


- (void)disableAndScrollToDefaultOffsetSuppressBarChanges:(BOOL)arg1 completion:(id)arg2;
- (void)setupAndAddToView:(id)arg1;
- (void)setOptionsView:(id)arg1;
- (id)optionsView;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end