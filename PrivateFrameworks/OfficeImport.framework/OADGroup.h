/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    NSMutableArray *mChildren;
}


- (id)groupProperties;
- (void)removeUnnecessaryOverrides;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setParentTextListStyle:(id)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (unsigned int)childCount;
- (id)childAtIndex:(unsigned int)arg1;
- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)children;

@end