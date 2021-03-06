/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate> {
    <TUCallProviderManagerDataSource> * _dataSource;
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <TUCallProviderManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TUCallProvider *defaultProvider;
@property (nonatomic, retain) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TUCallProvider *emergencyProvider;
@property (nonatomic, readonly) TUCallProvider *faceTimeProvider;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *providers;
@property (nonatomic, readonly, copy) NSDictionary *providersByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TUCallProvider *telephonyProvider;
@property (nonatomic, readonly) TUCallProvider *voicemailProvider;

+ (id)defaultProviders;
+ (int)serviceForProvider:(id)arg1 video:(BOOL)arg2;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultProvider;
- (id)delegateToQueue;
- (id)emergencyProvider;
- (id)faceTimeProvider;
- (id)init;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;
- (id)providerForFavoritesEntry:(id)arg1;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;
- (id)providerForRecentCall:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)providerWithService:(int)arg1 video:(BOOL*)arg2;
- (id)providers;
- (id)providersByIdentifier;
- (void)providersChangedForDataSource:(id)arg1;
- (id)providersPassingTest:(id /* block */)arg1;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (void)setDelegateToQueue:(id)arg1;
- (id)telephonyProvider;
- (id)voicemailProvider;

@end
