/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject  {
    NSURLCredentialStorageInternal *_internal;
}

+ (id)sharedCredentialStorage;

- (id)init;
- (void)dealloc;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { }*)arg1;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)allCredentials;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (id)_internalInit;

@end