/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, GKCurvedCapBackgroundBrush;

@interface GKMultiplayerBackgroundView : UICollectionReusableView  {
    UIImageView *_imageView;
    GKCurvedCapBackgroundBrush *_backgroundBrush;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedImageSize;
}

@property(retain) UIImageView * imageView;
@property(retain) GKCurvedCapBackgroundBrush * backgroundBrush;
@property struct CGSize { float x1; float x2; } cachedImageSize;


- (void)setBackgroundBrush:(id)arg1;
- (void)setCachedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)backgroundBrush;
- (struct CGSize { float x1; float x2; })cachedImageSize;
- (void)dealloc;
- (void)setImageView:(id)arg1;
- (id)imageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end