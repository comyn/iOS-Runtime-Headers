/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {
    int  _activityType;
    struct { 
        unsigned int activityType : 1; 
        unsigned int locationType : 1; 
        unsigned int wLengthValue : 1; 
        unsigned int wLocationType : 1; 
    }  _has;
    int  _locationType;
    NSString * _wLengthUnitString;
    double  _wLengthValue;
    int  _wLocationType;
}

@property (nonatomic) int activityType;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic, readonly) BOOL hasWLengthUnitString;
@property (nonatomic) BOOL hasWLengthValue;
@property (nonatomic) BOOL hasWLocationType;
@property (nonatomic) int locationType;
@property (nonatomic, retain) NSString *wLengthUnitString;
@property (nonatomic) double wLengthValue;
@property (nonatomic) int wLocationType;

- (void).cxx_destruct;
- (int)activityType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActivityType;
- (BOOL)hasLocationType;
- (BOOL)hasWLengthUnitString;
- (BOOL)hasWLengthValue;
- (BOOL)hasWLocationType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)locationType;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setActivityType:(int)arg1;
- (void)setHasActivityType:(BOOL)arg1;
- (void)setHasLocationType:(BOOL)arg1;
- (void)setHasWLengthValue:(BOOL)arg1;
- (void)setHasWLocationType:(BOOL)arg1;
- (void)setLocationType:(int)arg1;
- (void)setWLengthUnitString:(id)arg1;
- (void)setWLengthValue:(double)arg1;
- (void)setWLocationType:(int)arg1;
- (id)wLengthUnitString;
- (double)wLengthValue;
- (int)wLocationType;
- (void)writeTo:(id)arg1;

@end