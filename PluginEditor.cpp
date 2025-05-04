#include "PluginProcessor.h"
#include "PluginEditor.h"

HardTekkKickAudioProcessorEditor::HardTekkKickAudioProcessorEditor (HardTekkKickAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (800, 600);

    addAndMakeVisible(lowEQSlider);
    lowEQSlider.setSliderStyle(juce::Slider::Rotary);
    lowEQSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);

    addAndMakeVisible(midEQSlider);
    midEQSlider.setSliderStyle(juce::Slider::Rotary);
    midEQSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);

    addAndMakeVisible(highEQSlider);
    highEQSlider.setSliderStyle(juce::Slider::Rotary);
    highEQSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);

    addAndMakeVisible(saturationAmountSlider);
    saturationAmountSlider.setSliderStyle(juce::Slider::Rotary);
    saturationAmountSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);

    addAndMakeVisible(waveformDisplay);
    addAndMakeVisible(cpuMeter);

    addAndMakeVisible(savePresetButton);
    savePresetButton.setButtonText("Save Preset");
    savePresetButton.onClick = [this]() {
        // Save preset logic
    };

    addAndMakeVisible(loadPresetButton);
    loadPresetButton.setButtonText("Load Preset");
    loadPresetButton.onClick = [this]() {
        // Load preset logic
    };
}

HardTekkKickAudioProcessorEditor::~HardTekkKickAudioProcessorEditor() {}

void HardTekkKickAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::darkgrey);
    g.setColour (juce::Colours::white);
    g.drawFittedText ("Hard Tekk Kick Plugin", getLocalBounds(), juce::Justification::centredTop, 1);
}

void HardTekkKickAudioProcessorEditor::resized()
{
    auto bounds = getLocalBounds();
    lowEQSlider.setBounds(20, 80, 100, 100);
    midEQSlider.setBounds(140, 80, 100, 100);
    highEQSlider.setBounds(260, 80, 100, 100);
    saturationAmountSlider.setBounds(380, 80, 100, 100);

    waveformDisplay.setBounds(20, 200, 400, 100);
    cpuMeter.setBounds(450, 200, 100, 50);

    savePresetButton.setBounds(20, 320, 100, 30);
    loadPresetButton.setBounds(140, 320, 100, 30);
}
