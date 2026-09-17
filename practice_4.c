#include <stdio.h>

int main() {

    int number;

    printf("Enter the number: \n");
    scanf("%d", &number);

    if(!(number % 2 == 0)) {
        printf("Number is odd\n");
    }
    else {
        printf("Number is even\n");
    }

    return 0;
}
