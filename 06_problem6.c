#include <stdio.h>

int main()
{
    int square;

    printf("Enter the number\n");
    scanf("%d", &square);

    printf("The square of the number is %d\n", square * square);
    printf("The perimeter of the square is %d\n", 4 * square);
    
    return 0;
}