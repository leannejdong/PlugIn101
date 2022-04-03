/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PlugIn101AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PlugIn101AudioProcessorEditor (PlugIn101AudioProcessor&);
    ~PlugIn101AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PlugIn101AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlugIn101AudioProcessorEditor)
};
