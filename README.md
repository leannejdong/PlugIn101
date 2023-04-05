# JUCE mini plugin demo with projucer (arch linux)

## Install JUCE via cmake

    - First, extract the contents of the JUCE 7 Linux zip file to a directory of your choice. You can do this by right-clicking on the zip file and selecting "Extract Here".

    - Open a terminal window and navigate to the directory where you extracted the JUCE files.

    - Run the following command to install the required dependencies:
    
    ```sudo pacman -S gcc make pkg-config freetype2 xorg-xrandr libxinerama libxcursor libxcomposite libxdamage libxfixes mesa-libgl ladspa    
```

    - `cmake . -B cmake-build -DCMAKE_BUILD_TYPE=Release -DJUCE_BUILD_EXTRAS=ON`
    
    - 
    
    ```
    cd cmake-build
    cmake --build .
    ```
    
    This will build JUCE and generate the juce library in the lib directory.

## build and install the Projucer:
    
```
cmake --build . --target Projucer
sudo make install
```

## Build from command line

`cmake .`

`make`




