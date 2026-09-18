#include <stdio.h>

int main () {

    int PIN;
    int code;

    printf("Enter the PIN : \n");
    scanf("%d",&PIN);

    if(PIN==1234){
        printf("What is second security code\n");
        scanf("%d",&code);

        if(code==5678){
            printf("Login successful\n");
        }

        else{
         printf("Wrong security code\n");
        }

    }

    else{
     printf("Wrong PIN\n");
    }

    return 0;

}

