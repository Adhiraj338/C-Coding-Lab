#include <stdio.h>

int main()
{
    int r = 14;
    float pi = 3.14;

    printf("The area of circle with radius %d is %f\n", r, pi * r * r);
    printf("The area of circle %f is %f\n", pi, pi * r * r);
    printf("The circumference of circle %d is %f\n", r, 2 * pi * r);

    return 0;
}