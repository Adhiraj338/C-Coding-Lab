#include <stdio.h>

int main()
{
    
    // int length = 14;
    // int breadth = 20;

    int length, breadth;
    printf("Enter the length\n");
    scanf("%d", &length);

    printf("Enter the breadth\n");
    scanf("%d", &breadth);

    int area = length * breadth;
    printf("Area = %d\n", area);

    return 0;
}