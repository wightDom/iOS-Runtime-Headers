/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _firstNameMapping;
    struct _CFBurstTrie { } * _firstnames;
    NSString * _fullNameMapping;
    NSString * _lastNameMapping;
    struct _CFBurstTrie { } * _lastnames;
    NSString * _possessiveMapping;
}

@property (retain) NSString *firstNameMapping;
@property (retain) NSString *fullNameMapping;
@property (retain) NSString *lastNameMapping;
@property (retain) NSString *possessiveMapping;

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)firstNameMapping;
- (id)fullNameMapping;
- (id)initWithFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
- (id)lastNameMapping;
- (id)possessiveMapping;
- (void)setFirstNameMapping:(id)arg1;
- (void)setFullNameMapping:(id)arg1;
- (void)setLastNameMapping:(id)arg1;
- (void)setPossessiveMapping:(id)arg1;
- (id)transform:(id)arg1;

@end