/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableDictionary;

@interface IMMultiQueue : NSObject  {
    NSMutableDictionary *_queueMap;
}


- (void)addBlock:(id)arg1 forKey:(id)arg2;
- (void)addBlock:(id)arg1 withTimeout:(double)arg2 forKey:(id)arg3;
- (void)_addBlock:(id)arg1 withGUID:(id)arg2 forKey:(id)arg3;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (void)dealloc;

@end