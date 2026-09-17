#include <stdio.h>

int marks;

int main () {
    printf("Enter the marks :\n ");
    scanf("%d",&marks);

    if(marks<0 || marks>100){
        printf("Invalid marks\n");
    }
    else{
        printf("Valid marks\n");
    }
    return 0;
}