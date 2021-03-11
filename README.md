# UE4DeepSpeech

This repository was aimed to make the Deep Speech library available for use on Unreal Engine 4.
The intended uses was for games to use the library to be able to transcribe the voices of players to text and be able to analyse it for their purpose.

## Requirements
* Unreal Engine 4.26.0
* Windows x64
* Deep Speech learnt model

## How to install
* [Check out this useful overflow for installing the plugin](https://answers.unrealengine.com/questions/323539/view.html)
* Download a pretrained deep speech model (.pbmm), [is available straight from their github](https://github.com/mozilla/DeepSpeech), and put it in the content folder of your game.

## How to work with it
### This is assuming that the plugin was installed:

1. Add a `DeepSpeech component` on your `PlayerComponent`
2. On `BeginPlay` use the function `CreateModel`, and in the string box, type in the name of the file (for example "*deepspeech-0.9.3-models.pbmm*" - without quotation marks)
3. On `True` from `CreateModel` you may start adding hotwords (optional)
4. If you would like to process the result you can `Bind to OnSpeech Recognized`, which will output an `FString` (generally a short sentence).
5. Use the `Create Voice Capture Device` function to be able to record audio
6. Then you can `Start Recording`, in order to accept voice input

### Once you start recording, the following will happen:
* Audio will be captured from the input to a buffer.
* Once that buffer is big enough, it will be sent to be transcribed by deep speech library.
* Once the deep speech library transcribed it, an event will be broadcasted.

### How do you control the amount of audio you process?
On the Audio Component there is a variable called `minBufferSizeToProcess`.
Setting it on a value of `100000` usually produces a sentence that is processed, you may control that value in order to increase the amount of audio captured until processing or decrease it.

## Improtant notes

* **You cannot add hotwords if you do not create a model first**
* **You cannot start recording if you did not create a voice capture device**

## Why is this in Beta?
* I did not add all the features that DeepSpeech library supports into UE4, for example getting metadata about the scoring is not implemented.
* I put the minimal amount of development to try to create a POC for a game I'm developing.

If you'd like to help, feel free to contact - or submit PRs to this repo!
