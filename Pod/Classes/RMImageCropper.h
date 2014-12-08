#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, RMImageEditorMode) {
    RMImageEditorModeAspectFill,
    RMImageEditorModeAspectFit
};

@interface RMImageCropper : UIView <UIGestureRecognizerDelegate>

@property (nonatomic, assign) NSInteger minimum;
@property (nonatomic, strong) UIImage * image;
@property (nonatomic, readonly) UIImage * editedImage;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) RMImageEditorMode initialScale;
@property (nonatomic, assign) RMImageEditorMode minimumScale;
@property (nonatomic, copy) void (^tapped)();

- (void)editedImageAsync:(void (^)(UIImage *image))complete;

@end

