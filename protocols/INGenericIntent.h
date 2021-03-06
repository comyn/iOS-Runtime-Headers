/* Generated by RuntimeBrowser.
 */

@protocol INGenericIntent <NSObject, NSCopying, NSSecureCoding>

@required

- (NSString *)domain;
- (bool)isGenericIntent;
- (NSDictionary *)parametersByName;
- (void)setDomain:(NSString *)arg1;
- (void)setParametersByName:(NSDictionary *)arg1;
- (void)setVerb:(NSString *)arg1;
- (NSString *)verb;

@end
