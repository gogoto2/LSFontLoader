//
//  LSFontAsset.m
//  LSFontLoader
//
//  Created by Luo Sheng on 13-1-23.
//  Copyright (c) 2013年 Luo Sheng. All rights reserved.
//

#import "LSFontAsset.h"

@implementation LSFontAsset

- (id)initWithDictionary:(NSDictionary *)dictionary {
	self = [super init];
	if (self) {
		_info = dictionary;
	}
	return self;
}

- (NSURL *)downloadURL {
	NSString *baseURLString = self.info[@"__BaseURL"];
	NSString *relativePathString = self.info[@"__RelativePath"];
	return [NSURL URLWithString:[baseURLString stringByAppendingPathComponent:relativePathString]];
}

@end
