#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "WaveformDisplay.h"
#include "CPUMeter.h"

class HardTekkKickAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    HardTekkKickAudioProcessorEditor (HardTekkKickAudioProcessor&);
    ~HardTekkKickAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    HardTekkKickAudioProcessor& audioProcessor;

    juce::Slider lowEQSlider, midEQSlider, highEQSlider;
    juce::Slider saturationAmountSlider;
    WaveformDisplay waveformDisplay;
    CPUMeter cpuMeter;
    juce::TextButton savePresetButton, loadPresetButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HardTekkKickAudioProcessorEditor)
};
