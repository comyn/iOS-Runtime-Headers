/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface AWDWiProxLeAddServiceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    }  _has;
    unsigned int  _result;
    NSString * _resultString;
    NSString * _serviceUUID;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasResult;
@property (nonatomic, readonly) bool hasResultString;
@property (nonatomic, readonly) bool hasServiceUUID;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int result;
@property (nonatomic, retain) NSString *resultString;
@property (nonatomic, retain) NSString *serviceUUID;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResult;
- (bool)hasResultString;
- (bool)hasServiceUUID;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)result;
- (id)resultString;
- (id)serviceUUID;
- (id)sessionId;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setResultString:(id)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
