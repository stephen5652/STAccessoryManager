//
//  STLogTool.h
//  STAccessoryManager
//
//  Created by stephenchen on 2024/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define STLogDebug(...) _STLogExe_(@"D", ##__VA_ARGS__)
#define STLogWarning(...) _STLogExe_(@"W", ##__VA_ARGS__)
#define STLogErr(...) _STLogExe_(@"E", ##__VA_ARGS__)
#define STLogInfo(...) _STLogExe_(@"I", ##__VA_ARGS__)
#define STLogFatal(...) _STLogExe_(@"F", ##__VA_ARGS__)
#define _STLogExe_(le, formatter, ...) [STLogTool logExecuteFile:__FILE__ function:__func__ line:__LINE__ level:le des:formatter, ##__VA_ARGS__]

#define STLogDebug_file(...) _STLogExe_file_(@"D", ##__VA_ARGS__)
#define STLogWarning_file(...) _STLogExe_file_(@"W", ##__VA_ARGS__)
#define STLogErr_file(...) _STLogExe_file_(@"E", ##__VA_ARGS__)
#define STLogInfo_file(...) _STLogExe_file_(@"I", ##__VA_ARGS__)
#define STLogFatal_file(...) _STLogExe_file_(@"F", ##__VA_ARGS__)

#define _STLogExe_file_(le, formatter, ...) [STLogTool logExecuteJustToLogFile_file:__FILE__ function:__func__ line:__LINE__ level:le des:formatter, ##__VA_ARGS__]

@interface STLogTool : NSObject
+ (void)logExecuteFile:(const char *)file function: (const char *)function line: (NSUInteger)line level: (NSString *)level des:(NSString *)format, ... NS_FORMAT_FUNCTION(5,6);
+ (void)logExecuteJustToLogFile_file:(const char *)file function: (const char *)function line: (NSUInteger)line level: (NSString *)level des:(NSString *)format, ... NS_FORMAT_FUNCTION(5,6);
@end

NS_ASSUME_NONNULL_END