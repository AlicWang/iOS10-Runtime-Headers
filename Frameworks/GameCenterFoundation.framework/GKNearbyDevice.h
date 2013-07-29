/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString;

@interface GKNearbyDevice : NSObject  {
    NSString *_deviceID;
    NSString *_playerID;
    NSString *_participantID;
    int _state;
}

@property(retain) NSString * deviceID;
@property(retain) NSString * participantID;
@property(retain) NSString * playerID;
@property int state;


- (void)setParticipantID:(id)arg1;
- (id)participantID;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)dealloc;
- (void)setState:(int)arg1;
- (int)state;

@end