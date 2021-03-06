//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FSWMProxyWindow, FSWMWindow, NSMapTable, NSObject<OS_dispatch_source>;

@interface FSWindowManager : NSObject
{
    unsigned int _cid;
    struct __CFMachPort *_eventTap;
    NSMapTable *_rootContainers;
    NSMapTable *_windows;
    _Bool _dragging;
    NSObject<OS_dispatch_source> *_ignoreResizingTimer;
    NSObject<OS_dispatch_source> *_windowDraggingTimer;
    FSWMWindow *_currentDragWindow;
    NSObject<OS_dispatch_source> *_proxyTimer;
    struct CGPoint _proxyLastEventPosition;
    FSWMProxyWindow *_proxyWindow;
}

- (void).cxx_destruct;
- (void)_windowRemoved:(unsigned int)arg1;
- (void)_managedWindowListChanged;
- (void)_handleEvent:(struct __CGEvent *)arg1;
- (void)spacesMayHaveChanged;
- (void)spaceRemoved:(unsigned long long)arg1;
- (void)displayChanged;
- (void)windowResized:(unsigned int)arg1;
- (void)windowDragEnded;
- (void)windowDragStarted:(unsigned int)arg1;
- (id)init;

@end

