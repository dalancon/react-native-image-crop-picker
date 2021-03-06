//
//  ImageManager.h
//
//  Created by Ivan Pusic on 5/4/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#ifndef RN_IMAGE_CROP_PICKER_h
#define RN_IMAGE_CROP_PICKER_h

#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"
#import "RCTLog.h"
#import <QBImagePickerController/QBImagePickerController.h>
#import <RSKImageCropper/RSKImageCropper.h>
#import "UIImage+Resize.h"

@interface ImageCropPicker : NSObject<
  RCTBridgeModule,
  QBImagePickerControllerDelegate,
  RSKImageCropViewControllerDelegate,
  RSKImageCropViewControllerDataSource>

@property (nonatomic, strong) NSDictionary *defaultOptions;
@property (nonatomic, retain) NSMutableDictionary *options;
@property (nonatomic, strong) RCTPromiseResolveBlock resolve;
@property (nonatomic, strong) RCTPromiseRejectBlock reject;

@end

#endif
