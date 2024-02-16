#include <stdio.h>
int main()
{
    float r, h, pi = 3.14, v, s, t;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%f%f", &r, &h);
    v = 2 * pi * r * r * h;
    s = (2 * pi * r * h + 2 * pi * r * r);
    printf("\nVolume: %.2f", v);
    printf("\nSurface area: %.2f", s);
}