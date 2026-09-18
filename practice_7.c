#include <stdio.h>

int main () {

        int number;

        printf("Enter the number : \n");
        scanf("%d",&number);

        if(!(number>50)){
                printf("The number is less than 50\n");
        }

        else{
          printf("The number is greater than 50\n");
        }

        return 0;

}
