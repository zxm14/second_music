// Autogenerated from Pigeon (v0.1.16), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTSongsMessage;
@class FLTPlayModeMessage;
@class FLTSongMessage;
@class FLTPositionMessage;
@class FLTStreamUrlMessage;
@class FLTStateMessage;
@class FLTDurationMessage;

@interface FLTSongsMessage : NSObject
@property(nonatomic, strong, nullable) NSArray * songs;
@end

@interface FLTPlayModeMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber * playMode;
@end

@interface FLTSongMessage : NSObject
@property(nonatomic, copy, nullable) NSString * plt;
@property(nonatomic, copy, nullable) NSString * id;
@property(nonatomic, copy, nullable) NSString * name;
@property(nonatomic, copy, nullable) NSString * subtitle;
@property(nonatomic, copy, nullable) NSString * cover;
@property(nonatomic, copy, nullable) NSString * streamUrl;
@property(nonatomic, copy, nullable) NSString * description;
@property(nonatomic, copy, nullable) NSString * albumId;
@property(nonatomic, copy, nullable) NSString * albumName;
@property(nonatomic, copy, nullable) NSString * albumCover;
@property(nonatomic, copy, nullable) NSString * singerId;
@property(nonatomic, copy, nullable) NSString * singerName;
@property(nonatomic, copy, nullable) NSString * singerAvatar;
@end

@interface FLTPositionMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber * position;
@end

@interface FLTStreamUrlMessage : NSObject
@property(nonatomic, copy, nullable) NSString * streamUrl;
@end

@interface FLTStateMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber * state;
@end

@interface FLTDurationMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber * duration;
@end

@protocol FLTMusicPlayerControllerApi
-(void)addToPlaylist:(FLTSongsMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)removeFromPlaylist:(FLTSongsMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)replacePlaylist:(FLTSongsMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)setPlayMode:(FLTPlayModeMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)play:(FLTSongMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)pause:(FlutterError *_Nullable *_Nonnull)error;
-(void)resume:(FlutterError *_Nullable *_Nonnull)error;
-(void)stop:(FlutterError *_Nullable *_Nonnull)error;
-(void)seek:(FLTPositionMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTMusicPlayerControllerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTMusicPlayerControllerApi> _Nullable api);

@interface FLTMusicPlayerCallbackApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)streamUrl:(FLTSongMessage*)input completion:(void(^)(FLTStreamUrlMessage*, NSError* _Nullable))completion;
- (void)onPlayerStateChange:(FLTStateMessage*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onSongChanged:(FLTSongMessage*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onPositionChanged:(FLTPositionMessage*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onDurationChanged:(FLTDurationMessage*)input completion:(void(^)(NSError* _Nullable))completion;
@end
NS_ASSUME_NONNULL_END
