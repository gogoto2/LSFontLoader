//
//  LSFontAsset.h
//  LSFontLoader
//
//  Created by Luo Sheng on 13-1-23.
//  Copyright (c) 2013年 Luo Sheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSFontAsset : NSObject {
	NSDictionary *_info;
}

- (id)initWithDictionary:(NSDictionary *)dictionary;

@property (nonatomic, readonly, strong) NSURL *downloadURL;
@property (nonatomic, readonly, strong) NSArray *infoList;

@end