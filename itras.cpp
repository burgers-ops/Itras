#include "image.cpp"

int main(int argc, char** argv) {
    Image test("enter.jpg");

    Image gray_avg = test;
    gray_avg.grayscale_avg();
    gray_avg.write("grayavg.png");

    return 0;
}