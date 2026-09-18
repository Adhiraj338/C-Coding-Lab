
#include <stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 100) {

        if (number % 2 == 0) {

            if (number % 10 == 0) {
                printf("Even and divisible by 10\n");
            }
            else {
                printf("Even but not divisible by 10\n");
            }

        }
        else {
            printf("Odd number\n");
        }

    }
    else {
        printf("Out of range\n");
    }

    return 0;
}