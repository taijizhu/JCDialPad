
@class JCDialPad, JCPadButton;

@protocol JCDialPadDelegate <NSObject>

@optional
- (BOOL)dialPad:(JCDialPad *)dialPad shouldInsertText:(NSString *)text forButtonPress:(JCPadButton *)button;

@end

@interface JCDialPad : UIView

@property (nonatomic, strong) UIColor *mainColor UI_APPEARANCE_SELECTOR;

@property (strong, nonatomic) NSString *rawText;
@property (nonatomic) BOOL formatTextToPhoneNumber;

@property (nonatomic, strong) UIView* contentView;
@property (nonatomic, strong) UIView* backgroundBlurringView;
@property (nonatomic, strong) NBAsYouTypeFormatter *numFormatter;

@property (nonatomic, strong) UIView* backgroundView;
@property (assign, nonatomic) BOOL showDeleteButton;

@property (nonatomic, strong) NSArray *buttons;
@property (nonatomic, strong) UIButton *deleteButton;
@property (nonatomic, strong) UITextField *digitsTextField;

@property (weak, nonatomic) id<JCDialPadDelegate> delegate;

/**
 Standard cell phone buttons: 0-9, # and * buttons
 */
+ (NSArray *)defaultButtons;
- (CGPoint) offsetButtonPosition;
- (id)initWithFrame:(CGRect)frame buttons:(NSArray *)buttons;
- (void)setRoundedView:(UIView *)roundedView toDiameter:(CGFloat)newSize;
@end
