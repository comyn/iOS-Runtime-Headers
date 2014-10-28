/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier;

@interface CKDPInvitationDeclineRequest : PBRequest <NSCopying> {
    CKDPIdentifier *_invitationId;
}

@property(readonly) BOOL hasInvitationId;
@property(retain) CKDPIdentifier * invitationId;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInvitationId;
- (unsigned int)hash;
- (id)invitationId;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setInvitationId:(id)arg1;
- (void)writeTo:(id)arg1;

@end