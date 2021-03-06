/*
 
 Erica Sadun, http://ericasadun.com
 
 */

#import <Foundation/Foundation.h>
#import "Drawing-Gradient.h"

void DrawStringCenteredInRect(NSString *string, UIFont *font, UIColor *color, CGRect rect);
UIColor *ScaleColorBrightness(UIColor *color, CGFloat amount);

void DrawStrokedShadowedShape(UIBezierPath *path, UIColor *baseColor, CGRect dest);
void DrawStrokedShadowedText(NSString *string, NSString *fontFace, UIColor *baseColor, CGRect dest);

void DrawIndentedPath(UIBezierPath *path, UIColor *primary, CGRect rect);
void DrawIndentedText(NSString *string, NSString *fontFace, UIColor *primary, CGRect rect);

void DrawGradientOverTexture(UIBezierPath *path, UIImage *texture, Gradient *gradient, CGFloat alpha);
void DrawBottomGlow(UIBezierPath *path, UIColor *color, CGFloat percent);
void DrawIconTopLight(UIBezierPath *path, CGFloat p);

UIImage *GradientMaskedReflectionImage(UIImage *sourceImage);