#include <stdio.h>

int main () {

	int number;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	
	if(number>=1 && number<=100){
	
		if(number%2==0){
			if(number%4==0){
				printf("Even and divisible by 4\n");
			}
			else{
				printf("Even but not divisible by 4\n");
			}
		}
		else{
			printf("It is odd number\n");
		}
	}

	else{
		printf("Out of range\n");
	}

	return 0;
	
}	