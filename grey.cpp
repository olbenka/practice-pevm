#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"

typedef unsigned long temp;

RgbImg Gray(RgbImg const& image)
{
    RgbImg out = copyRgbImg(image);

    for (temp row = 0; row < image.height; ++row)
    {
        for (temp col = 0; col < image.width; ++col)
        {
            RGB const pixel = image.pixels[row][col];
            unsigned char const gray = (char)((pixel.Blue + pixel.Green + pixel.Red) / 3);
            out.pixels[row][col] = {gray, gray, gray};
        }
    }

    return out;
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
