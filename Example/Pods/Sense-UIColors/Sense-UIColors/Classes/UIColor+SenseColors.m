#import "UIColor+SenseColors.h"
#import <UIKit/UIKit.h>

@implementation UIColor (SenseColors)

+ (UIColor *)ar_colorWithHex:(UInt32)hex
{
    return [self ar_colorWithHex:hex andAlpha:1];
}

+ (UIColor *)ar_colorWithHex:(UInt32)hex andAlpha:(CGFloat)alpha
{
    int r = (hex >> 16) & 0xFF;
    int g = (hex >> 8) & 0xFF;
    int b = (hex) & 0xFF;
    
    return [UIColor colorWithRed:r / 255.0f
                           green:g / 255.0f
                            blue:b / 255.0f
                           alpha:alpha];
}
+ (UIColor *)senseMainColor
{
    return [UIColor ar_colorWithHex:14108182];
}

+ (UIColor *)senseOpaqueRedButton
{
    return [UIColor ar_colorWithHex:0xe5e5e5];
}

+ (UIColor *)senseRedButton
{
    return [UIColor ar_colorWithHex:14108182];
}

+ (UIColor *)senseUnknowSituation
{
    return [UIColor ar_colorWithHex:0x666666];
}

+ (UIColor *)senseAlertSituation
{
    return [UIColor ar_colorWithHex:0x333333];
}

+ (UIColor *)senseNormalSituation
{
    return [UIColor ar_colorWithHex:0xe2d2ff];
}

+ (UIColor *)senseDangerSituation
{
    return [UIColor ar_colorWithHex:0x6e1fff];
}

@end
