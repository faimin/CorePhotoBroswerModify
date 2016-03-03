//
//  PBModel.h
//  CorePhotoBroswerVC
//
//  Created by 成林 on 15/5/4.
//  Copyright (c) 2015年 冯成林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PhotoBroswerVCType) {
    
    //modal
    PhotoBroswerVCTypePush = 0,
    
    //push
    PhotoBroswerVCTypeModal,
    
    //transition
    PhotoBroswerVCTypeTransition,
    
    //zoom
    PhotoBroswerVCTypeZoom,
    
};


@interface PhotoModel : NSObject

/** mid，保存图片缓存唯一标识，必须传 */
<<<<<<< HEAD
@property (nonatomic, assign) NSUInteger mid;
=======
@property (nonatomic,assign) NSUInteger mid;

>>>>>>> origin/MyCorePhotoBroswer

/*
 *  网络图片
 */

/** 高清图地址 */
<<<<<<< HEAD
@property (nonatomic, copy) NSString *image_HD_U;
=======
@property (nonatomic,copy) NSString *image_HD_U;
>>>>>>> origin/MyCorePhotoBroswer

/*
 *  本地图片
 */
<<<<<<< HEAD
@property (nonatomic, strong) UIImage *image;
=======
@property (nonatomic,strong) UIImage *image;
>>>>>>> origin/MyCorePhotoBroswer

/** 标题 */
@property (nonatomic, copy) NSString *title;

/** 描述 */
@property (nonatomic, copy) NSString *desc;

/** 源frame */
@property (nonatomic, assign, readonly) CGRect sourceFrame;

/** 源imageView */
@property (nonatomic, weak) UIImageView *sourceImageView;

/** 是否从源frame放大呈现 */
<<<<<<< HEAD
@property (nonatomic, assign) BOOL isFromSourceFrame;
=======
@property (nonatomic,assign) BOOL isFromSourceFrame;
>>>>>>> origin/MyCorePhotoBroswer

/*
 *  检查数组合法性
 */
<<<<<<< HEAD
+ (NSString *)check:(NSArray *)photoModels type:(PhotoBroswerVCType)type;
=======
+(NSString *)check:(NSArray *)photoModels type:(PhotoBroswerVCType)type;
>>>>>>> origin/MyCorePhotoBroswer

/**
 *  读取
 *
 *  @return 是否已经保存到本地
 */
<<<<<<< HEAD
- (BOOL)read;
=======
-(BOOL)read;
>>>>>>> origin/MyCorePhotoBroswer

/*
 *  保存
 */
<<<<<<< HEAD
- (void)save;
=======
-(void)save;

>>>>>>> origin/MyCorePhotoBroswer

@end
