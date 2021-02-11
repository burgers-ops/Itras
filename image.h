#include <stdint.h>
#include <cstdio>

enum ImageType {
    PNG, JPG, BMP, TGA
};

struct Image {
    uint8_t* data;
    size_t size;
    int w, h, channels;

    Image(const char* filename);
    Image(int w, int h, int channels);
    Image(const Image& img);
    ~Image();

    bool read(const char* filename);
    bool write(const char* filename);

    ImageType getFileType(const char* filename);

    Image& grayscale_avg();
    Image& grayscale_lum();

};