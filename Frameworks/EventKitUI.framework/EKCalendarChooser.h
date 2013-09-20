/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKCalendarChooserDelegate>, <EKStyleProvider>, EKCalendar, EKEventStore, EKSource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, UIRefreshControl, UITableView, _UIAccessDeniedView;

@interface EKCalendarChooser : UIViewController {
    struct { 
        unsigned int listIsFlat : 1; 
        unsigned int showAll : 1; 
        unsigned int showColors : 1; 
        unsigned int allSelected : 1; 
        unsigned int allowsRotation : 1; 
        unsigned int allowsEdit : 1; 
        unsigned int showsDoneButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int showsWritableCalendarsOnly : 1; 
        unsigned int showsRefreshButton : 1; 
        unsigned int allowsPullToRefresh : 1; 
    _UIAccessDeniedView *_accessDeniedView;
    NSIndexPath *_checkedRow;
    int _chooserMode;
    NSMutableDictionary *_customGroupMap;
    <EKCalendarChooserDelegate> *_delegate;
    BOOL _disableCalendarEditing;
    unsigned int _entityType;
    EKEventStore *_eventStore;
    } _flags;
    NSMutableArray *_groups;
    int _lastAuthorizationStatus;
    EKSource *_limitedToSource;
    UIRefreshControl *_refreshControl;
    int _refreshCounter;
    NSMutableSet *_selectedCalendars;
    BOOL _showsDeclinedEventsSetting;
    NSMutableDictionary *_storeGroupMap;
    int _style;
    <EKStyleProvider> *_styleProvider;
    UITableView *_tableView;
}

@property(retain) _UIAccessDeniedView * accessDeniedView;
@property BOOL allowsEdit;
@property BOOL allowsPullToRefresh;
@property BOOL allowsRotation;
@property(retain) NSIndexPath * checkedRow;
@property int chooserMode;
@property(retain) NSMutableDictionary * customGroupMap;
@property <EKCalendarChooserDelegate> * delegate;
@property BOOL disableCalendarEditing;
@property unsigned int entityType;
@property(retain) EKEventStore * eventStore;
@property struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; } flags;
@property(retain) NSMutableArray * groups;
@property int lastAuthorizationStatus;
@property(retain) EKSource * limitedToSource;
@property(retain) UIRefreshControl * refreshControl;
@property int refreshCounter;
@property(retain) EKCalendar * selectedCalendar;
@property(retain) NSMutableSet * selectedCalendarSet;
@property(copy) NSSet * selectedCalendars;
@property int selectionStyle;
@property BOOL showsCancelButton;
@property BOOL showsDeclinedEventsSetting;
@property BOOL showsDoneButton;
@property BOOL showsRefreshButton;
@property(retain) NSMutableDictionary * storeGroupMap;
@property(retain) <EKStyleProvider> * styleProvider;
@property(retain) UITableView * tableView;

- (void).cxx_destruct;
- (void)_applySelection;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_beginSyncCompletedTimeout;
- (BOOL)_calendarAvailableForEditing:(id)arg1;
- (BOOL)_canEnableRefresh;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncCompletedTimeout;
- (int)_declinedEventsSwitchSection;
- (void)_eventStoreChanged:(id)arg1;
- (id)_filterCalendars:(id)arg1;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (BOOL)_isEllipsisCellForGroup:(id)arg1 rowIndex:(int)arg2;
- (id)_loadCalendars;
- (int)_numSelectedGroups;
- (void)_populateGroupsForCalendars:(id)arg1;
- (void)_pulledToRefresh:(id)arg1;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2;
- (void)_setCalendars:(id)arg1;
- (BOOL)_shouldShowGroupNameInSection:(int)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (void)_syncCompletedGracePeriodExpired;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (BOOL)_tableShouldDisplayAllCalendarButtons;
- (BOOL)_tableShouldDisplayAllCalendarsSection;
- (BOOL)_tableShouldDisplayAllCellForGroup:(id)arg1;
- (BOOL)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1;
- (id)accessDeniedView;
- (BOOL)allowsEdit;
- (BOOL)allowsPullToRefresh;
- (BOOL)allowsRotation;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)cancel:(id)arg1;
- (id)checkedRow;
- (int)chooserMode;
- (id)customGroupMap;
- (void)dealloc;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (id)delegate;
- (BOOL)disableCalendarEditing;
- (void)done:(id)arg1;
- (unsigned int)entityType;
- (id)eventStore;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; })flags;
- (id)groups;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned int)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned int)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 eventStore:(id)arg3;
- (int)lastAuthorizationStatus;
- (id)limitedToSource;
- (void)loadView;
- (float)marginForTableView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)refresh:(id)arg1;
- (id)refreshControl;
- (int)refreshCounter;
- (id)selectedCalendar;
- (id)selectedCalendarSet;
- (id)selectedCalendars;
- (int)selectionStyle;
- (void)setAccessDeniedView:(id)arg1;
- (void)setAllowsEdit:(BOOL)arg1;
- (void)setAllowsPullToRefresh:(BOOL)arg1;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setCheckedRow:(id)arg1;
- (void)setChooserMode:(int)arg1;
- (void)setCustomGroupMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCalendarEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEntityType:(unsigned int)arg1;
- (void)setEventStore:(id)arg1;
- (void)setFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; })arg1;
- (void)setGroups:(id)arg1;
- (void)setLastAuthorizationStatus:(int)arg1;
- (void)setLimitedToSource:(id)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setRefreshCounter:(int)arg1;
- (void)setSelectedCalendar:(id)arg1;
- (void)setSelectedCalendarSet:(id)arg1;
- (void)setSelectedCalendars:(id)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setShowsDeclinedEventsSetting:(BOOL)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (void)setShowsRefreshButton:(BOOL)arg1;
- (void)setShowsWritableCalendarsOnly:(BOOL)arg1;
- (void)setStoreGroupMap:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTableView:(id)arg1;
- (BOOL)showsCancelButton;
- (BOOL)showsDeclinedEventsSetting;
- (BOOL)showsDoneButton;
- (BOOL)showsRefreshButton;
- (BOOL)showsWritableCalendarsOnly;
- (id)storeGroupMap;
- (id)styleProvider;
- (unsigned int)supportedInterfaceOrientations;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end