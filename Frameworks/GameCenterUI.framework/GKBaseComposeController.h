/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTextView, NSArray, UIScrollView, UIView, GKContiguousContainerView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    GKTextView *_messageField;
    UIView *_intendedFirstResponder;
    GKContiguousContainerView *_headerFieldContainer;
}

@property(retain) UIScrollView * backgroundView;
@property(retain) NSArray * composeHeaderFields;
@property(retain) GKTextView * messageField;
@property UIView * intendedFirstResponder;
@property(retain) GKContiguousContainerView * headerFieldContainer;


- (void)setHeaderFieldContainer:(id)arg1;
- (void)setMessageField:(id)arg1;
- (id)composeHeaderFields;
- (void)setMessageFieldText:(id)arg1;
- (void)setComposeHeaderFields:(id)arg1;
- (id)intendedFirstResponder;
- (void)messageFieldTextDidChange;
- (id)messageField;
- (id)viewMetricsForContainerView:(id)arg1;
- (id)headerFieldContainer;
- (void)setIntendedFirstResponder:(id)arg1;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (id)init;
- (void)dealloc;
- (void)textViewDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;

@end