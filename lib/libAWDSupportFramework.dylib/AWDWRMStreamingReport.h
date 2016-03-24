/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {
    unsigned int _counter;
    unsigned int _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int counter : 1; 
        unsigned int duration : 1; 
        unsigned int samplePeriods : 1; 
    } _has;
    NSMutableArray *_instValues;
    unsigned int _samplePeriods;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int counter;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasCounter;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasSamplePeriods;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSMutableArray *instValues;
@property (nonatomic) unsigned int samplePeriods;
@property (nonatomic) unsigned long long timestamp;

+ (Class)instValuesType;

- (void)addInstValues:(id)arg1;
- (void)clearInstValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (BOOL)hasCounter;
- (BOOL)hasDuration;
- (BOOL)hasSamplePeriods;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)instValues;
- (id)instValuesAtIndex:(unsigned int)arg1;
- (unsigned int)instValuesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)samplePeriods;
- (void)setCounter:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasCounter:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasSamplePeriods:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInstValues:(id)arg1;
- (void)setSamplePeriods:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end