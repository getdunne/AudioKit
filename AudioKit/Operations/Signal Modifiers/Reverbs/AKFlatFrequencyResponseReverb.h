//
//  AKFlatFrequencyResponseReverb.h
//  AudioKit
//
//  Auto-generated on 12/25/14.
//  Copyright (c) 2014 Aurelius Prochazka. All rights reserved.
//

#import "AKAudio.h"
#import "AKParameter+Operation.h"

/** Reverberates an input signal with a flat frequency response.

 This filter reiterates the input with an echo density determined by loop time. The attenuation rate is independent and is determined by the reverberation time (defined as the time in seconds for a signal to decay to 1/1000, or 60dB down from its original amplitude).  Output will begin to appear immediately.
 */

@interface AKFlatFrequencyResponseReverb : AKAudio
/// Instantiates the flat frequency response reverb with all values
/// @param input The input signal to be reverberated. [Default Value: ]
/// @param reverberationTime The time in seconds for a signal to decay to 1/1000, or 60dB down from its original amplitude. Updated at Control-rate. [Default Value: 3]
/// @param loopTime The loop time in seconds, which determines the “echo density” of the reverberation. [Default Value: 0.1]
- (instancetype)initWithInput:(AKParameter *)input
            reverberationTime:(AKParameter *)reverberationTime
                     loopTime:(AKConstant *)loopTime;

/// Instantiates the flat frequency response reverb with default values
/// @param input The input signal to be reverberated.
- (instancetype)initWithInput:(AKParameter *)input;

/// Instantiates the flat frequency response reverb with default values
/// @param input The input signal to be reverberated.
+ (instancetype)audioWithInput:(AKParameter *)input;

/// The time in seconds for a signal to decay to 1/1000, or 60dB down from its original amplitude. [Default Value: 3]
@property AKParameter *reverberationTime;

/// Set an optional reverberation time
/// @param reverberationTime The time in seconds for a signal to decay to 1/1000, or 60dB down from its original amplitude. Updated at Control-rate. [Default Value: 3]
- (void)setOptionalReverberationTime:(AKParameter *)reverberationTime;

/// The loop time in seconds, which determines the “echo density” of the reverberation. [Default Value: 0.1]
@property AKConstant *loopTime;

/// Set an optional loop time
/// @param loopTime The loop time in seconds, which determines the “echo density” of the reverberation. [Default Value: 0.1]
- (void)setOptionalLoopTime:(AKConstant *)loopTime;



@end
