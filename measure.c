// write a c function which will accept 3 parameters l, b ,h and returns vloume of the qube //
#include <stdio.h>
int volume(int l, int b, int h)
{
    int volume = l * b * h;
    return volume;
}
void main()
{
    int l = 9;
    int b = 8;
    int h = 7;
    printf("volume of cube is %d", volume(l, b, h));
}