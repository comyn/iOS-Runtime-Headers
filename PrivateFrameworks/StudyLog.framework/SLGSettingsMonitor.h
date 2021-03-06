/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

@interface SLGSettingsMonitor : NSObject <SLGSettingsMonitoring> {
    <SLGSettingsMonitorDelegate> * _delegate;
    bool  _isEnabled;
    NSUserDefaults * _userDefaults;
}

@property (getter=isEnabled, nonatomic) bool Enabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SLGSettingsMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadPreferences;
- (void)_postSettingsChangedNotification;
- (void)_registerForSettingsChangedNotification;
- (void)_reloadPreferences;
- (void)_savePreferences;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
