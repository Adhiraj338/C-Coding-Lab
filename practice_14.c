#include <stdio.h>

int main () {

  int number;

  printf("Enter the number :\n");
  scanf("%d",&number);

  if(number > 100){
    printf("Large\n");
  }

  else if(number > 50){
    printf("Medium\n");
  }

  else if(number >0){
    printf("small\n");
  }

  else {
    printf("negative\n");
  }

return 0;
}