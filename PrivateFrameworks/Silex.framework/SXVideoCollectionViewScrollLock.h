/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoCollectionViewScrollLock : NSObject <SXVideoTransitionObserver> {
    <SXVideoCollectionViewProviding> * _collectionViewProvider;
    bool  _pagingAllowed;
    <SXVideoSkipLockObserving> * _skipLockObserver;
    <SXVideoSkipLockObserverFactory> * _skipLockObserverFactory;
}

@property (nonatomic, readonly) <SXVideoCollectionViewProviding> *collectionViewProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pagingAllowed;
@property (nonatomic, retain) <SXVideoSkipLockObserving> *skipLockObserver;
@property (nonatomic, readonly) <SXVideoSkipLockObserverFactory> *skipLockObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionViewProvider;
- (id)initWithCollectionViewProvider:(id)arg1 skipLockObserverFactory:(id)arg2 pagingAllowed:(bool)arg3;
- (bool)pagingAllowed;
- (void)setSkipLockObserver:(id)arg1;
- (id)skipLockObserver;
- (id)skipLockObserverFactory;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
