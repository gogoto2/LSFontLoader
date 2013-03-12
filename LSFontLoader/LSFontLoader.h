//
//  LSFontLoader.h
//  LSFontLoader
//
//  Created by Luo Sheng on 13-1-23.
//  Copyright (c) 2013年 Luo Sheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreText/CoreText.h>
#import "LSPropertyListRequestOperation.h"
#import "LSFontAsset.h"
#import "LSFontInfo.h"
#import "AFNetworking.h"

@interface LSFontLoader : NSObject

+ (instancetype)sharedLoader;
+ (NSString *)fontBasePath;
- (void)fetchManifestWithCompletionBlock:(void (^)(void))completionBlock;
- (void)downloadFont:(LSFontAsset *)fontAsset withCompletionBlock:(void (^)(void))completionBlock downloadProgressBlock:(void (^)(NSUInteger bytesRead, long long totalBytesRead, long long totalBytesExpectedToRead))downloadProgressBlock;
- (void)loadFont:(LSFontAsset *)fontAsset;
- (void)unloadFont:(LSFontAsset *)fontAsset;
- (BOOL)isFontDownloaded:(LSFontAsset *)fontAsset;
- (LSFontAsset *)fontAssetContaingFontWithName:(NSString *)fontName;

@property (nonatomic, readonly, copy) NSArray *fontAssets;

@end
