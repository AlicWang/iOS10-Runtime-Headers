/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSDate, NSNumber, NSURL;

@interface PLCloudFeedEntry : PLManagedObject  {
}

@property(readonly) NSURL * URIRepresentation;
@property(readonly) int entryType;
@property(readonly) int entryPriority;
@property(retain) NSDate * entryDate;
@property(retain) NSString * entryAlbumGUID;
@property(retain) NSString * entryInvitationRecordGUID;
@property(retain) NSNumber * entryTypeNumber;
@property(retain) NSNumber * entryPriorityNumber;

+ (id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(int)arg4;
+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;
+ (id)firstEntryWithType:(int)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3;
+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(int)arg2;
+ (id)allEntriesInLibrary:(id)arg1;
+ (id)entriesSortDescriptorsAscending:(BOOL)arg1;
+ (id)allEntriesInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (int)entryPriority;
- (int)entryType;
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1;
- (id)URIRepresentation;

@end