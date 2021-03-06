/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {
    BOOL _forceFamilyNameFirst;
    BOOL _forceGivenNameFirst;
    BOOL _ignoresFallbacks;
    NSLocale *_locale;
    BOOL _phonetic;
    int _style;
}

@property BOOL forceFamilyNameFirst;
@property BOOL forceGivenNameFirst;
@property BOOL ignoresFallbacks;
@property (copy) NSLocale *locale;
@property BOOL phonetic;
@property int style;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forceFamilyNameFirst;
- (BOOL)forceGivenNameFirst;
- (BOOL)ignoresFallbacks;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFormatterData:(id)arg1;
- (id)locale;
- (BOOL)phonetic;
- (void)setForceFamilyNameFirst:(BOOL)arg1;
- (void)setForceGivenNameFirst:(BOOL)arg1;
- (void)setIgnoresFallbacks:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setPhonetic:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
