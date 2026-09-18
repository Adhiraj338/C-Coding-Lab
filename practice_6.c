#include <stdio.h>

int main() {

    int number;

    printf("Enter the number:\n");
    scanf("%d",&number);

    if(number>0){
        printf("number is positive\n");
    }
    else if(number<0){
        printf("number is negative\n");
    }
    else{
        printf("number is 0\n");
    }

    return 0;
}