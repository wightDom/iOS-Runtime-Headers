/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBAppLibraryLogger : NSObject {
    NSObject<OS_os_log> * _aggregateLog;
}

+ (id)sharedInstance;

- (id)init;
- (void)logToAggregateInstallationLog:(unsigned int)arg1 step:(unsigned int)arg2 success:(BOOL)arg3 bundleID:(id)arg4 description:(id)arg5;

@end
