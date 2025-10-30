//
//  NBSVideoReplayManager.h
//  NBSAppAgent
//
//  Created by kangfei on 2022/5/5.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, NBSVideoReplayState)
{
    NBSVideoReplayStateRecording,
    NBSVideoReplayStatePause,
    NBSVideoReplayStateStop,
};

@interface NBSVideoReplayManager : NSObject

@property(nonatomic,assign)NBSVideoReplayState state;

@property(nonatomic,strong)NSArray <NSString *> *recordViews;

+ (instancetype)sharedInstance;

- (void)startRecord;
- (void)pauseRecord;
- (void)apiPauseRecord;
- (void)resumeRecord;
- (void)stopRecord;

- (NSString *)getVideoID;
- (void)doRecordIfNeededByViewAppear;

/**
 *@brief 遮盖敏感信息。
 *@param view 需要遮盖的视图。
 */
- (void)maskSensitiveView:(UIView *)view __attribute__((deprecated("please use -maskView:")));
/**
 *@brief 取消遮盖敏感信息。
 *@param view 需要遮盖的视图。
 */
- (void)unmaskSensitiveView:(UIView *)view __attribute__((deprecated("please use -unmaskView:")));
/**
 *@brief 遮盖敏感信息。
 *@param region 相对于主window的坐标。
 */
- (void)maskSensitiveRegion:(CGRect)region __attribute__((deprecated("please use -maskRegion:")));
/**
 *@brief 取消遮盖敏感信息。
 *@param region 相对于主window的坐标。
 */
- (void)unmaskSensitiveRegion:(CGRect)region __attribute__((deprecated("please use -unmaskRegion:")));


- (void)maskViewId:(NSString*)viewId;

- (void)maskView:(UIView *)view;

- (void)unmaskView:(UIView *)view;

- (void)maskScreens:(NSArray <NSString *>*)screens;

- (void)maskRegion:(CGRect)region;

- (void)unmaskRegion:(CGRect)region;

- (void)maskClasses:(NSArray <NSString *>*)classes;




@end

NS_ASSUME_NONNULL_END
