#include <stdio.h>

int main () {

    int marks;

    printf("Enter the marks : \n");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100){
        printf("A\n");
    }

    else if(marks>=75  && marks<=89){
        printf("B\n");
    }

    else if (marks>=60 && marks<=74){
        printf("C\n");
    }

    else if(marks>=40 && marks<=59){
        printf("D\n");
    }

    else{
        printf("Fail\n");
    }

    return 0;

}

