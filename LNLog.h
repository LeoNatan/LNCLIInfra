//
//  LNLog.h
//  LNCLIInfra
//
//  Created by Leo Natan on 13/07/2017.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LNLogLevel) {
	LNLogLevelInfo,
	LNLogLevelDebug,
	LNLogLevelWarning,
	LNLogLevelError,
	LNLogLevelStdOut
};

extern void LNLog(LNLogLevel logLevel, NSString* format, ...) NS_FORMAT_FUNCTION(2,3);
