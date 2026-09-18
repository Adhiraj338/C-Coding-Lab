#include <stdio.h>

int main () {

        int age;

        printf("Enter the age :\n");
        scanf("%d",&age);

        if(!(age<18)){
                printf("Age is 18 or older\n");
        }

        else{
                printf("Age is under 18\n");
        }

        return 0;

}