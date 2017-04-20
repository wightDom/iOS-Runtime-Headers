/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCalendarEntryModel : NTKTimelineEntryModel {
    BOOL  _displayAsConflicting;
    BOOL  _displayAsFirstInDay;
    BOOL  _displayAsTomorrow;
    NSDate * _eventEndDate;
    NSDate * _eventStartDate;
    unsigned int  _eventsInDayCount;
    NSString * _identifier;
    NSURL * _launchURL;
    unsigned int  _overlappingEventCount;
    NSString * _primaryEventLocation;
    NSString * _primaryEventOrganizerName;
    NSString * _primaryEventTitle;
    NSString * _secondaryEventTitle;
}

@property (nonatomic) BOOL displayAsConflicting;
@property (nonatomic) BOOL displayAsFirstInDay;
@property (nonatomic) BOOL displayAsTomorrow;
@property (nonatomic, retain) NSDate *eventEndDate;
@property (nonatomic, retain) NSDate *eventStartDate;
@property (nonatomic) unsigned int eventsInDayCount;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSURL *launchURL;
@property (nonatomic) unsigned int overlappingEventCount;
@property (nonatomic, retain) NSString *primaryEventLocation;
@property (nonatomic, retain) NSString *primaryEventOrganizerName;
@property (nonatomic, retain) NSString *primaryEventTitle;
@property (nonatomic, retain) NSString *secondaryEventTitle;

+ (id)_entryForTemplateDescription:(id)arg1 family:(int)arg2;
+ (id)_extraLargeCalendarImageProvider;
+ (id)_extraLargeConflictImageProvider;
+ (id)_modularSmallCalendarImageProvider;
+ (id)_modularSmallConflictImageProvider;
+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 timeZone:(id)arg6 options:(unsigned int)arg7;
+ (id)_utilityCalendarImageProvider;
+ (id)circular:(id)arg1 isMedium:(BOOL)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)loadingEntryForFamily:(int)arg1;
+ (id)lockedEntryForFamily:(int)arg1;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (BOOL)displayAsConflicting;
- (BOOL)displayAsFirstInDay;
- (BOOL)displayAsTomorrow;
- (id)eventEndDate;
- (id)eventStartDate;
- (unsigned int)eventsInDayCount;
- (id)identifier;
- (id)launchURL;
- (unsigned int)overlappingEventCount;
- (id)primaryEventLocation;
- (id)primaryEventOrganizerName;
- (id)primaryEventTitle;
- (id)secondaryEventTitle;
- (void)setDisplayAsConflicting:(BOOL)arg1;
- (void)setDisplayAsFirstInDay:(BOOL)arg1;
- (void)setDisplayAsTomorrow:(BOOL)arg1;
- (void)setEventEndDate:(id)arg1;
- (void)setEventStartDate:(id)arg1;
- (void)setEventsInDayCount:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setOverlappingEventCount:(unsigned int)arg1;
- (void)setPrimaryEventLocation:(id)arg1;
- (void)setPrimaryEventOrganizerName:(id)arg1;
- (void)setPrimaryEventTitle:(id)arg1;
- (void)setSecondaryEventTitle:(id)arg1;
- (id)templateForComplicationFamily:(int)arg1;

@end