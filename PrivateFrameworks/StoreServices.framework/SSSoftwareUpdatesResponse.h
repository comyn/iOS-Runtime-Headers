/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, NSArray;



@interface SSSoftwareUpdatesResponse : NSObject 
{
    NSError *_error;
    BOOL _failed;
    NSArray *_updateItems;
}

@property(readonly) NSError *error;
@property(getter=isFailed,readonly) BOOL failed;
@property(readonly) NSArray *updateItems;


- (BOOL)isFailed;
- (id)initWithError:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithDictionaryResponse:(id)arg1;
- (id)updateItems;
- (id)copyUpdateItemDictionaries;

@end