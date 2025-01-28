#include <stdio.h>
#include <string.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main(int argc, char *argv[]) {
    char Chars[] = "@%#*+=-:.0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int Charslen = (int)strlen(Chars);
    if (argc < 2) {
        printf("Usage: %s <image_file>\n", argv[0]);
        return 1;
    }

    int width, height, pixelsize;
    unsigned char *ImageData = stbi_load(argv[1], &width, &height, &pixelsize, 0);

    if (ImageData) {
        unsigned char *Pixels = ImageData;
        for (int RowIndex = 0; RowIndex < height; RowIndex++) {
            for (int ColumnIndex = 0; ColumnIndex < width; ColumnIndex++) {
                unsigned char R = *Pixels++;
                unsigned char G = *Pixels++;
                unsigned char B = *Pixels++;
                if (pixelsize >= 4) {
                    unsigned char A = *Pixels++;
                }
                float Avg = (R + G + B) / 3.0f;
                int CharIndex = (int)(Charslen * (Avg / 255.0f));
                if (CharIndex >= Charslen) CharIndex = Charslen - 1;
                putchar(Chars[CharIndex]);
            }
            putchar('\n');
        }
        stbi_image_free(ImageData);
    } else {
        printf("Failed to load image %s\n", argv[1]);
    }

    return 0;
}
