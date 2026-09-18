#include <stdio.h>

int main () {

    int marks;

    printf("Enter the marks: \n");
    scanf("%d",&marks);

    if(marks>=90){
        printf("Excellent\n");
    }

    else if(marks>=75){
        printf("Very good\n");
    }

    else if(marks>=40){
        printf("pass\n");
    }

    else{
        printf("fail\n");
    }

    return 0;

}