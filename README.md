# ascii-art-generator

Turn any image into terminal ASCII art. Fast. Zero dependencies.

                    /\_/\  
                   ( o.o ) 
                    > ^ <

### Demo

**Input:** `cat.jpg`

Works with `.jpg`, `.png`, `.bmp`, `.tga`

### Install

**1. Clone the repo**
```bash
git clone https://github.com/Abdul-abu/img-Ascii-cpp.git
cd ascii-art-generator
*2. Compile*
# Mac/Linux
g++ src/main.cpp -o ascii -std=c++11

# Windows with MinGW
g++ src/main.cpp -o ascii.exe
No external libraries needed. `stb_image.h` is already included.

### Usage
# Mac/Linux
./ascii path/to/image.jpg

# Windows
ascii.exe path/to/image.jpg

# Drag & drop on Windows
Drag image.jpg onto ascii.exe
*Optional: Save to file*
./ascii cat.jpg > cat.txt
### How it works

1. Loads image using `stb_image.h`
2. Converts to grayscale
3. Maps brightness to ASCII chars: `.:-=+*#%@`
4. Scales to 100 chars wide to fit your terminal
5. Prints it




### Why C++
hella fast. Converts 4K images in ∼0.02s. Python would take 2s.

### Credits
Image loading by `stb_image.h` from nothings/stb

### License
MIT. Do whatever you want with it.

