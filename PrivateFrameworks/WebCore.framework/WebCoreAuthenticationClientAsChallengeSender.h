/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
    struct AuthenticationClient { int (**x1)(); } *m_client;
    struct _CFURLAuthChallenge { } *m_cfChallenge;
}


- (struct _CFURLAuthChallenge { }*)cfChallenge;
- (void)setCFChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (void)detachClient;
- (id)initWithAuthenticationClient:(struct AuthenticationClient { int (**x1)(); }*)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (struct AuthenticationClient { int (**x1)(); }*)client;

@end