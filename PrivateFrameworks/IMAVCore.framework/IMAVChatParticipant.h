/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChat, IMHandle, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer;

@interface IMAVChatParticipant : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSArray *_additionalPeers;
    BOOL _audioMuted;
    IMAVChat *_avChat;
    unsigned int _cameraOrientation;
    unsigned int _cameraType;
    unsigned int _chatEndedReason;
    int _chatError;
    NSString *_conferenceID;
    NSTimer *_connectTimeoutTimer;
    BOOL _hasReinitiateCapability;
    IMHandle *_imHandle;
    BOOL _inviteDelivered;
    IMHandle *_inviter;
    BOOL _isInitiator;
    BOOL _mediaStalled;
    NSMutableArray *_participantsCallInfo;
    NSDictionary *_properties;
    } _remoteLandscapeContentRect;
    } _remoteLandscapeOrientation;
    } _remotePIPLandscapeOrientation;
    } _remotePIPPortraitOrientation;
    } _remotePortraitContentRect;
    } _remotePortraitOrientation;
    unsigned int _screenOrientation;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    unsigned int _state;
    NSString *_vcPartyID;
    BOOL _videoDegraded;
    BOOL _videoPaused;
}

@property(readonly) int _activeCallID;
@property(setter=_setConferenceID:,retain) NSString * _conferenceID;
@property(setter=_setConnectTimeoutTimer:,retain) NSTimer * _connectTimeoutTimer;
@property(setter=_setInviteDelivered:) BOOL _inviteDelivered;
@property(retain) NSMutableArray * _participantsCallInfo;
@property(setter=_setRemoteLandscapeContentRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _remoteLandscapeContentRect;
@property(setter=_setRemoteLandscapeOrientation:) struct CGSize { float x1; float x2; } _remoteLandscapeOrientation;
@property(setter=_setRemotePIPLandscapeOrientation:) struct CGSize { float x1; float x2; } _remotePIPLandscapeOrientation;
@property(setter=_setRemotePIPPortraitOrientation:) struct CGSize { float x1; float x2; } _remotePIPPortraitOrientation;
@property(setter=_setRemotePortraitContentRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _remotePortraitContentRect;
@property(setter=_setRemotePortraitOrientation:) struct CGSize { float x1; float x2; } _remotePortraitOrientation;
@property(setter=_setScreenOrientation:) unsigned int _screenOrientation;
@property(retain) NSArray * additionalPeers;
@property IMAVChat * avChat;
@property(setter=_setCameraOrientation:) unsigned int cameraOrientation;
@property(setter=_setCameraType:) unsigned int cameraType;
@property int error;
@property(readonly) BOOL hasConnectingSessions;
@property BOOL hasReinitiateCapability;
@property(readonly) BOOL hasUnfinishedSessions;
@property(readonly) IMHandle * imHandle;
@property(readonly) IMHandle * invitedBy;
@property(setter=setAudioMuted:) BOOL isAudioMuted;
@property(setter=setAudioMuted:) BOOL isAudioMuted;
@property(readonly) BOOL isInitiator;
@property(readonly) BOOL isLocalParticipant;
@property(readonly) BOOL isMediaStalled;
@property(setter=setMediaStalled:) BOOL isMediaStalled;
@property(readonly) BOOL isSendingAudio;
@property(readonly) BOOL isSendingAudio;
@property(readonly) BOOL isSendingVideo;
@property(readonly) BOOL isSendingVideo;
@property(readonly) BOOL isVideoDegraded;
@property(setter=setVideoDegraded:) BOOL isVideoDegraded;
@property(setter=setVideoPaused:) BOOL isVideoPaused;
@property(setter=setVideoPaused:) BOOL isVideoPaused;
@property(readonly) NSString * name;
@property(retain) NSDictionary * properties;
@property(readonly) unsigned int reasonChatEnded;
@property unsigned int state;
@property(setter=setVCPartyID:,retain) NSString * vcPartyID;
@property void* videoBackLayer;
@property void* videoLayer;

- (int)_activeCallID;
- (id)_callInfoForCallID:(int)arg1;
- (id)_callInfoWithState:(int)arg1;
- (id)_callInfosWaitingForAcceptAction;
- (id)_callInfosWaitingForResponse;
- (void)_cleanupOrphanedCallInfos;
- (id)_conferenceID;
- (void)_connectTimeout:(id)arg1;
- (id)_connectTimeoutTimer;
- (BOOL)_generateCallInfo:(id)arg1;
- (void)_handleIMAVResponse:(unsigned int)arg1;
- (void)_hangupCallLaterIfReinitiateFails:(id)arg1;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(unsigned int)arg7 withError:(int)arg8 andReason:(unsigned int)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (BOOL)_inviteDelivered;
- (id)_natType;
- (void)_noteInviteDelivered:(BOOL)arg1;
- (id)_participantsCallInfo;
- (id)_processIncomingCallProperties:(id)arg1;
- (void)_processPropertyUpdate:(id)arg1;
- (BOOL)_processResponseDictionary:(id)arg1 allowSecondConnection:(BOOL)arg2;
- (id)_proxyRepresentation;
- (void)_reInitiate;
- (void)_registerCallInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_remoteLandscapeContentRect;
- (struct CGSize { float x1; float x2; })_remoteLandscapeOrientation;
- (struct CGSize { float x1; float x2; })_remotePIPLandscapeOrientation;
- (struct CGSize { float x1; float x2; })_remotePIPPortraitOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_remotePortraitContentRect;
- (struct CGSize { float x1; float x2; })_remotePortraitOrientation;
- (unsigned int)_screenOrientation;
- (void)_sendResponse:(unsigned int)arg1 callInfo:(id)arg2;
- (void)_setCameraOrientation:(unsigned int)arg1;
- (void)_setCameraType:(unsigned int)arg1;
- (void)_setChatError:(int)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectTimeoutTimer:(id)arg1;
- (void)_setInviteDelivered:(BOOL)arg1;
- (void)_setRemoteLandscapeContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setRemoteLandscapeOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRemotePIPLandscapeOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRemotePIPPortraitOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRemotePortraitContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setRemotePortraitOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setScreenOrientation:(unsigned int)arg1;
- (void)_setState:(unsigned int)arg1 withReason:(unsigned int)arg2 andError:(int)arg3;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (void)_updateProperties:(id)arg1;
- (id)additionalPeers;
- (struct CGSize { float x1; float x2; })aspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)avChat;
- (int)bestCallID;
- (id)callInfoBeingHandedOff;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)cancelInvitation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (void)disconnectFromAVChat;
- (int)error;
- (BOOL)hasConnectingSessions;
- (BOOL)hasReinitiateCapability;
- (BOOL)hasUnfinishedSessions;
- (id)imHandle;
- (id)init;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (id)invitedBy;
- (BOOL)isAudioMuted;
- (BOOL)isInitiator;
- (BOOL)isLocalParticipant;
- (BOOL)isMediaStalled;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (BOOL)isVideoDegraded;
- (BOOL)isVideoPaused;
- (struct CGSize { float x1; float x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (BOOL)matchesAVConferenceCallID:(int)arg1;
- (id)name;
- (id)properties;
- (unsigned int)reasonChatEnded;
- (void)receivedNoPacketsForCallID:(int)arg1 time:(double)arg2;
- (void)requestIconIfNecessary;
- (void)resetWaitingToConnectTimer;
- (void)sendAVMessage:(unsigned int)arg1 userInfo:(id)arg2;
- (void)sendInvitation;
- (void)sendResponse:(unsigned int)arg1;
- (void)setAVChat:(id)arg1;
- (void)setAdditionalPeers:(id)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setHasReinitiateCapability:(BOOL)arg1;
- (void)setMediaStalled:(BOOL)arg1;
- (void)setProperties:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateToEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)setVCPartyID:(id)arg1;
- (void)setVideoBackLayer:(void*)arg1;
- (void)setVideoDegraded:(BOOL)arg1;
- (void)setVideoLayer:(void*)arg1;
- (void)setVideoPaused:(BOOL)arg1;
- (void)setWaitingToConnect:(BOOL)arg1;
- (void)set_participantsCallInfo:(id)arg1;
- (unsigned int)state;
- (void)updateStateForCurrentCallInfo:(unsigned int)arg1;
- (id)vcPartyID;
- (void*)videoBackLayer;
- (void*)videoLayer;

@end