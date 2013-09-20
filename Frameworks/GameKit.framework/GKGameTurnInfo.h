/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame, NSDate;

@interface GKGameTurnInfo : NSObject {
    GKGame *_game;
    NSDate *_lastTurnDate;
    unsigned int _numberOfActiveMatches;
    unsigned int _numberOfLocalPlayerTurns;
}

@property(retain) GKGame * game;
@property(retain) NSDate * lastTurnDate;
@property unsigned int numberOfActiveMatches;
@property unsigned int numberOfLocalPlayerTurns;

- (void)dealloc;
- (id)description;
- (id)game;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lastTurnDate;
- (unsigned int)numberOfActiveMatches;
- (unsigned int)numberOfLocalPlayerTurns;
- (void)setGame:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setNumberOfActiveMatches:(unsigned int)arg1;
- (void)setNumberOfLocalPlayerTurns:(unsigned int)arg1;

@end