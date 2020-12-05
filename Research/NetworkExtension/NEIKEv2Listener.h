/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NEIKEv2TransportDelegate.h>
#import <libobjc.A.dylib/NEIKEv2ConfigurationDelegate.h>

@protocol OS_dispatch_queue, OS_nw_listener, NEIKEv2ListenerDelegate, NEIKEv2PacketDelegate;
@class NSObject, NEIKEv2IKESAConfiguration, NEIPSecSASession, NSString, NSMutableArray, NEIKEv2Transport;

@interface NEIKEv2Listener : NSObject <NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate> {

	NSObject*<OS_dispatch_queue> _listenerQueue;
	NEIKEv2IKESAConfiguration* _ikeConfig;
	NEIPSecSASession* _saSession;
	NSString* _kernelSASessionName;
	NSObject*<OS_nw_listener> _listener;
	NSMutableArray* _sessionsBeforeAuth;
	NEIKEv2Transport* _transport;
	id<NEIKEv2ListenerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<NEIKEv2PacketDelegate> _packetDelegate;

}

@property (nonatomic,retain) NEIKEv2IKESAConfiguration * ikeConfig;                        //@synthesize ikeConfig=_ikeConfig - In the implementation block
@property (nonatomic,retain) NEIPSecSASession * saSession;                                 //@synthesize saSession=_saSession - In the implementation block
@property (nonatomic,retain) NSString * kernelSASessionName;                               //@synthesize kernelSASessionName=_kernelSASessionName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> listenerQueue;                   //@synthesize listenerQueue=_listenerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_listener> listener;                           //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * sessionsBeforeAuth;                          //@synthesize sessionsBeforeAuth=_sessionsBeforeAuth - In the implementation block
@property (nonatomic,retain) NEIKEv2Transport * transport;                                 //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic,__weak) id<NEIKEv2ListenerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<NEIKEv2PacketDelegate> packetDelegate;              //@synthesize packetDelegate=_packetDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NEIKEv2ListenerDelegate>)delegate;
-(void)setDelegate:(id<NEIKEv2ListenerDelegate>)arg1 ;
-(void)cancel;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_nw_listener>)listener;
-(void)setListener:(NSObject*<OS_nw_listener>)arg1 ;
-(NEIKEv2Transport *)transport;
-(void)setTransport:(NEIKEv2Transport *)arg1 ;
-(void)reportError:(int)arg1 ;
-(id<NEIKEv2PacketDelegate>)packetDelegate;
-(void)requestConfigurationForSession:(id)arg1 sessionConfig:(id)arg2 childConfig:(id)arg3 validateAuthBlock:(/*^block*/id)arg4 responseBlock:(/*^block*/id)arg5 ;
-(void)setPacketDelegate:(id<NEIKEv2PacketDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)listenerQueue;
-(NEIKEv2IKESAConfiguration *)ikeConfig;
-(NEIPSecSASession *)saSession;
-(NSString *)kernelSASessionName;
-(NSMutableArray *)sessionsBeforeAuth;
-(void)setSessionsBeforeAuth:(NSMutableArray *)arg1 ;
-(void)setIkeConfig:(NEIKEv2IKESAConfiguration *)arg1 ;
-(void)setSaSession:(NEIPSecSASession *)arg1 ;
-(void)setKernelSASessionName:(NSString *)arg1 ;
-(void)setListenerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)handleNewConnection:(id)arg1 ;
-(void)receivePacket:(id)arg1 ;
-(id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 kernelSASessionName:(id)arg3 listenerUDPPort:(id)arg4 listenerInterface:(id)arg5 listenerQueue:(id)arg6 delegate:(id)arg7 delegateQueue:(id)arg8 ;
-(id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 kernelSASessionName:(id)arg3 packetDelegate:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 ;
-(void)sessionFailedBeforeRequestingConfiguration:(id)arg1 ;
-(id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 ;
-(id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 ;
-(id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
@end

