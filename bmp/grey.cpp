#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"
typedef unsigned long temp;

RgbImg gray(RgbImg const& image)
{
    RgbImg greypic = copyRgbImg(image);

    for (temp row = 0; row < image.height; ++row)
   {
        for (temp col = 0; col < image.width; ++col)
        {
            RGB const pixel = image.pixels[row][col];
            unsigned char const gray = (char)((pixel.Blue + pixel.Green + pixel.Red) / 3);
           greypic.pixels[row][col] = {gray, gray, gray};
        }
    }

    return greypic;
}
