#include <stdio.h>

int main() {

    char character;

    printf("Enter the character   : \n ");
    scanf("%c",&character);


    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
        printf("Vowell\n");
    }
    else{
        printf("Not a vowell\n");
    }

    return 0;

}







