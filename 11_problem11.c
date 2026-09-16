#include <stdio.h>

int main () {
    int second;
    printf("Enter the second\n");
    scanf("%d",&second);

    printf("Minutes is %dmin \n", second / 60);
    scanf("%d",&second);

    printf("Remaining seconds is %dsec \n", second % 60);

    return 0;
}