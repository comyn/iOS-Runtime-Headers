/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray;

@interface MKPanoramaAnnotationGeometry : MKStreetViewGeometry {
    struct { 
        unsigned char c[3]; 
        unsigned char a; 
    NSInteger _arrowNumIndices;
    NSInteger _arrowSize;
    NSInteger _colorSize;
    } _intersectionColor;
    NSUInteger _intersectionNumSides;
    NSInteger _labelSize;
    NSArray *_labels;
    NSInteger _lineNumIndices;
    NSInteger _lineSize;
    struct { unsigned char x1[3]; unsigned char x2; } *_linkColors;
    BOOL _linkPressed;
    float _opacity;
    NSUInteger _pressedLinkIndex;
}

@property BOOL linkPressed;
@property float opacity;
@property NSUInteger pressedLinkIndex;

- (void)dealloc;
- (void)drawWithLabelCache:(id)arg1;
- (id)initWithAnnotations:(id)arg1;
- (BOOL)linkPressed;
- (float)opacity;
- (NSUInteger)pressedLinkIndex;
- (void)setLinkPressed:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPressedLinkIndex:(NSUInteger)arg1;

@end