//
//  ISOpenSDKCameraViewController.h
//  ISOpenSDKFoundation
//
//  Created by Felix Liu on 15/12/22.
//  Copyright © 2015年 IntSig. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISOpenSDKStatus.h"

typedef NS_ENUM(NSInteger, ISOpenPreviewSDKType)
{
    ISOpenPreviewSDKTypeBankCardReader = 1 << 0,
    ISOpenPreviewSDKTypeIDReader = 1 << 1,
    ISOpenPreviewSDKTypeDrivingLicense = 1 << 2,
    ISOpenPreviewSDKTypeVehicleLicense = 1 << 3
};

@protocol ISOpenSDKCameraViewControllerDelegate <NSObject>

@optional

- (void)constructResourcesDidFinishedWithStatusCode:(ISOpenSDKStatus)status;//相机模块初始化SDK回调
- (void)accessCameraDidFailed;//相机模块授权失败SDK回调
- (void)cameraViewController:(UIViewController *)viewController didFinishDetectCardWithResult:(int)result borderPoints:(NSArray *)borderPoints;//相机模块边缘检测回调
- (void)cameraViewController:(UIViewController *)viewController didFinishRecognizeCard:(NSDictionary *)resultInfo cardSDKType:(ISOpenPreviewSDKType)sdkType;//相机模块识别结果回调
- (void)cameraViewController:(UIViewController *)viewController didClickCancelButton:(id)sender;//相机模块返回按钮点击回调

@end

@interface ISOpenSDKCameraViewController : UIViewController

- (instancetype)initWithPreviewSDKType:(ISOpenPreviewSDKType)previewSDKType appkey:(NSString *)appKey subAppkey:(NSString *)subAppkey;

@property (nonatomic, assign) BOOL needShowBackButton;//是否显示右上角返回按钮
@property (nonatomic, assign) BOOL needShowflashLightButton;//是否显示左上角闪光灯按钮
@property (nonatomic, assign) BOOL shouldHightlightCorners;//找边成功之后是否高亮显示
@property (nonatomic, strong) UIView *coverView;//相机界面出现前的遮盖界面，默认为空，不显示，可选择直接修改backgroundColor
@property (nonatomic, weak) id<ISOpenSDKCameraViewControllerDelegate>delegate;
@property (nonatomic, copy) NSString *customInfo;//自定义文字信息
@property (nonatomic, assign) NSInteger frameInterval;//识别帧数间隔，默认为系统每秒最小帧数／6，即30帧下为5

@end
