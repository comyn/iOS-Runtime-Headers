/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBAppLink : PBCodable <NSSecureCoding, _SFPBAppLink> {
    _SFPBPunchout * _appPunchout;
    struct { 
        unsigned int imageAlign : 1; 
    }  _has;
    _SFPBImage * _image;
    int  _imageAlign;
    NSString * _title;
}

@property (nonatomic, retain) _SFPBPunchout *appPunchout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppPunchout;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasImageAlign;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)appPunchout;
- (id)dictionaryRepresentation;
- (bool)hasAppPunchout;
- (bool)hasImage;
- (bool)hasImageAlign;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)image;
- (int)imageAlign;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppPunchout:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
