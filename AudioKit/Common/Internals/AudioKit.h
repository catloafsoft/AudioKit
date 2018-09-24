//
//  AudioKit.h
//  AudioKit
//
//  Created by Aurelius Prochazka, revision history on Github.
//  Copyright © 2018 AudioKit. All rights reserved.
//
#pragma once

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#if !TARGET_OS_TV
#import <CoreAudioKit/CoreAudioKit.h>
#endif

//! Project version number for AudioKit.
FOUNDATION_EXPORT double AudioKitVersionNumber;

//! Project version string for AudioKit.
FOUNDATION_EXPORT const unsigned char AudioKitVersionString[];

#import "AKAudioUnitBase.h"
#import "AKGeneratorAudioUnitBase.h"

// Effects
#import "AKOperationEffectAudioUnit.h"


// Playback
#import "AKPresetManager.h"

// Taps
#import "AKRenderTap.h"

// EZAudio
//#import "EZAudio.h"
#import "EZAudioUtilities.h"
#import "EZAudioFFT.h"
