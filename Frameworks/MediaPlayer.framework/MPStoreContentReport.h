/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreContentReport : NSObject <NSCopying> {
    NSString * _aucType;
    NSString * _commentText;
    long long  _concernItemType;
    NSString * _concernTypeId;
    NSString * _contentId;
    NSString * _displayText;
    NSString * _userId;
}

@property (nonatomic, copy) NSString *aucType;
@property (nonatomic, copy) NSString *commentText;
@property (nonatomic) long long concernItemType;
@property (nonatomic, copy) NSString *concernTypeId;
@property (nonatomic, copy) NSString *contentId;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *userId;

- (void).cxx_destruct;
- (id)aucType;
- (id)commentText;
- (long long)concernItemType;
- (id)concernTypeId;
- (id)contentId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayText;
- (void)setAucType:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setConcernItemType:(long long)arg1;
- (void)setConcernTypeId:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;

@end
