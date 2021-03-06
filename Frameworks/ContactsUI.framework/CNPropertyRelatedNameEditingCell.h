/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyRelatedNameEditingCell : CNPropertySimpleEditingCell <CNContactPickerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)performAccessoryAction;

@end
