//
//  SenseButton.h
//  Pods
//
//  Created by Sense Infoway on 24/10/16.
//
//

#import <UIKit/UIKit.h>

@interface SenseButton : UIButton
@property (nonatomic, readwrite) BOOL shouldDimWhenDisabled;
@property (nonatomic, readwrite) BOOL shouldAnimateStateChange;
- (void)setup;
- (void)setEnabled:(BOOL)enabled animated:(BOOL)animated;
@end

@interface SenseUnderlineButton : SenseButton
- (void)setUnderlinedTitle:(NSString *)title underlineRange:(NSRange)range forState:(UIControlState)state;
@end

@interface SenseInquireButton : SenseUnderlineButton
@end

@interface SenseUppercaseButton : SenseButton
@end

@interface SenseModalMenuButton : SenseUppercaseButton
@end

@interface SenseNavigationTabButton : SenseUppercaseButton
@end

// SenseFlatButton é efetivamente uma classe abstrata. Ele não fornece cores para texto, fundo ou de bordas.
// A única vez que você pode querer criar uma instância e personalizar um one-off SenseFlatButton é quando nenhum dos
// subclasses genéricas é adequada.

@interface SenseFlatButton : SenseUppercaseButton
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state animated:(BOOL)animated;

- (void)setBorderColor:(UIColor *)borderColor forState:(UIControlState)state;
- (void)setBorderColor:(UIColor *)borderColor forState:(UIControlState)state animated:(BOOL)animated;

- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
@end

@interface SenseMenuButton : SenseFlatButton
@end

@interface SenseClearFlatButton : SenseFlatButton
@end

@interface SenseRedFlatButton : SenseFlatButton
@end


// Um botão transparente para unidades de hero. Cor especifica da borda e `cor` do texto. Quando ativo,
// o fundo do botão torna-se de cor opaca com e o texto torna-se` inversa a cor`

@interface SenseHeroUnitButton : SenseMenuButton
- (void)setColor:(UIColor *)color;
- (void)setColor:(UIColor *)color animated:(BOOL)animated;
- (void)setInverseColor:(UIColor *)inverseColor;
@end
