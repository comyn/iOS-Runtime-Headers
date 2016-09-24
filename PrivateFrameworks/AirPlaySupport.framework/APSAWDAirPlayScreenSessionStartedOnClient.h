/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int  _audioCompressionType;
    int  _awdlCCA;
    int  _awdlRSSI;
    unsigned int  _bonjourMs;
    unsigned int  _configMs;
    unsigned int  _connectMs;
    BOOL  _didFallbackToInfraToAvoidP2POverDFS;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int awdlCCA : 1; 
        unsigned int awdlRSSI : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int configMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int infraCCA : 1; 
        unsigned int infraRSSI : 1; 
        unsigned int infraSNR : 1; 
        unsigned int prepareMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int didFallbackToInfraToAvoidP2POverDFS : 1; 
    }  _has;
    int  _infraCCA;
    int  _infraRSSI;
    int  _infraSNR;
    unsigned int  _prepareMs;
    NSString * _sessionUUID;
    int  _status;
    unsigned int  _timestamp;
    unsigned int  _transportType;
}

@property (nonatomic) unsigned int audioCompressionType;
@property (nonatomic) int awdlCCA;
@property (nonatomic) int awdlRSSI;
@property (nonatomic) unsigned int bonjourMs;
@property (nonatomic) unsigned int configMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) BOOL hasAudioCompressionType;
@property (nonatomic) BOOL hasAwdlCCA;
@property (nonatomic) BOOL hasAwdlRSSI;
@property (nonatomic) BOOL hasBonjourMs;
@property (nonatomic) BOOL hasConfigMs;
@property (nonatomic) BOOL hasConnectMs;
@property (nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) BOOL hasInfraCCA;
@property (nonatomic) BOOL hasInfraRSSI;
@property (nonatomic) BOOL hasInfraSNR;
@property (nonatomic) BOOL hasPrepareMs;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int infraCCA;
@property (nonatomic) int infraRSSI;
@property (nonatomic) int infraSNR;
@property (nonatomic) unsigned int prepareMs;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) unsigned int transportType;

- (unsigned int)audioCompressionType;
- (int)awdlCCA;
- (int)awdlRSSI;
- (unsigned int)bonjourMs;
- (unsigned int)configMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)didFallbackToInfraToAvoidP2POverDFS;
- (BOOL)hasAudioCompressionType;
- (BOOL)hasAwdlCCA;
- (BOOL)hasAwdlRSSI;
- (BOOL)hasBonjourMs;
- (BOOL)hasConfigMs;
- (BOOL)hasConnectMs;
- (BOOL)hasDidFallbackToInfraToAvoidP2POverDFS;
- (BOOL)hasInfraCCA;
- (BOOL)hasInfraRSSI;
- (BOOL)hasInfraSNR;
- (BOOL)hasPrepareMs;
- (BOOL)hasSessionUUID;
- (BOOL)hasStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (int)infraCCA;
- (int)infraRSSI;
- (int)infraSNR;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)prepareMs;
- (BOOL)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (void)setAwdlCCA:(int)arg1;
- (void)setAwdlRSSI:(int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConfigMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1;
- (void)setHasAudioCompressionType:(BOOL)arg1;
- (void)setHasAwdlCCA:(BOOL)arg1;
- (void)setHasAwdlRSSI:(BOOL)arg1;
- (void)setHasBonjourMs:(BOOL)arg1;
- (void)setHasConfigMs:(BOOL)arg1;
- (void)setHasConnectMs:(BOOL)arg1;
- (void)setHasDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1;
- (void)setHasInfraCCA:(BOOL)arg1;
- (void)setHasInfraRSSI:(BOOL)arg1;
- (void)setHasInfraSNR:(BOOL)arg1;
- (void)setHasPrepareMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setInfraCCA:(int)arg1;
- (void)setInfraRSSI:(int)arg1;
- (void)setInfraSNR:(int)arg1;
- (void)setPrepareMs:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned int)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end