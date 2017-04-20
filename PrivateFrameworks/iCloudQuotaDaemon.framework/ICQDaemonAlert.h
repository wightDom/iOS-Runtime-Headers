/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonAlert : NSObject {
    NSLock * _alertLock;
    NSObject<OS_dispatch_queue> * _alertQueue;
    NSObject<OS_dispatch_semaphore> * _alertSema;
    int  _alertState;
    struct __CFUserNotification { } * _cfAlert;
    ICQDaemonOffer * _daemonOffer;
    BOOL  _handleActionsBeforeCallingCompletionHandler;
    BOOL  _showOnlyInSpringboard;
}

@property (nonatomic, readonly) ICQDaemonOffer *daemonOffer;
@property (nonatomic) BOOL handleActionsBeforeCallingCompletionHandler;
@property (nonatomic) BOOL showOnlyInSpringboard;

+ (void)dismissAlertsWithNotificationID:(id)arg1;
+ (BOOL)shouldShowForDaemonOffer:(id)arg1;

- (void).cxx_destruct;
- (void)_handleLink:(id)arg1;
- (id)daemonOffer;
- (void)dealloc;
- (void)dismissAlert;
- (BOOL)handleActionsBeforeCallingCompletionHandler;
- (id)init;
- (id)initWithDaemonOffer:(id)arg1;
- (void)setHandleActionsBeforeCallingCompletionHandler:(BOOL)arg1;
- (void)setShowOnlyInSpringboard:(BOOL)arg1;
- (BOOL)showAlertWithCompletion:(id /* block */)arg1;
- (BOOL)showOnlyInSpringboard;

@end