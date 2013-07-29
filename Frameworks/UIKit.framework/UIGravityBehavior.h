/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior  {
    struct CGPoint { 
        float x; 
        float y; 
    } _gravity;
}

@property(readonly) NSArray * items;
@property struct CGSize { float x1; float x2; } gravityDirection;
@property float angle;
@property float magnitude;


- (id)items;
- (void)setGravity:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })gravity;
- (void)_commonInit;
- (id)init;
- (id)description;
- (void)_setAngle:(float)arg1 magnitude:(float)arg2;
- (void)setYComponent:(float)arg1;
- (void)setXComponent:(float)arg1;
- (void)setMagnitude:(float)arg1;
- (void)setGravityDirection:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })gravityDirection;
- (struct CGPoint { float x1; float x2; })denormalizedGravity;
- (float)xComponent;
- (float)yComponent;
- (void)setAngle:(float)arg1 magnitude:(float)arg2;
- (float)magnitude;
- (void)setXComponent:(float)arg1 yComponent:(float)arg2;
- (void)_addItem:(id)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (void)addItem:(id)arg1;
- (void)_dissociate;
- (void)_associate;
- (id)initWithItems:(id)arg1;
- (void)removeItem:(id)arg1;

@end