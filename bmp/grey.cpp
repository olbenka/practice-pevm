#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"

RgbImg Gray(RgbImg const& image)
{
    RgbImg greypic = copyRgbImg(image);

    for (size_t row = 0; row < image.height; ++row)
   {
        for (size_t col = 0; col < image.width; ++col)
        {
            RGB const pixel = image.pixels[row][col];
            unsigned char const gray = (char)((pixel.Blue + pixel.Green + pixel.Red) / 3);
            greypic.pixels[row][col] = {gray, gray, gray};
        }
    }

    return greypic;
}

int main(int argc, char const* argv[])
{
    RgbImg input = readRgbImg("RainbowDash.bmp");
    RgbImg gray = Gray(input);

    writeRgbImg("NoRainbowDash.bmp", gray);

    deleteRgbImg(input);
    deleteRgbImg(gray);

    return 0;
}
