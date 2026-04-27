#include <iostream>
#include <fstream>
#include <vector>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Drag an image onto this.exe or run: ascii.exe photo.jpg\n";
        return 1;
    }

    int width, height, channels;
    unsigned char* img = stbi_load(argv[1], &width, &height, &channels, 1);
    if (!img) {
        std::cout << "Can't open image. Is it.jpg or.png?\n";
        return 1;
    }

    const char* chars = ".:-=+*#%@"; // dark to bright
    int charCount = 10;

    // Resize width to 100 chars max so it fits in terminal
    int newWidth = 100;
    int newHeight = (height * newWidth) / width / 2; // /2 because chars are taller than wide

    std::cout << "\n";
    for (int y = 0; y < height; y += height / newHeight) {
        for (int x = 0; x < width; x += width / newWidth) {
            int brightness = img[y * width + x];
            int index = brightness * charCount / 256;
            std::cout << chars[index];
        }
        std::cout << "\n";
    }

    stbi_image_free(img);
    std::cout << "\nDone. Made from: " << argv[1] << "\n";
    return 0;
}
