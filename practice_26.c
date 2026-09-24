#include <stdio.h>

int main () {
	
	int number;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	
	if(number>=1 && number<=500){
		
		if(number%3==0){
			printf("Divisible by 3\n");
		}

		else{
			printf("Not divisible by 3\n");
		}
	}

	else{
		printf("Out of range\n");
	}

	return 0;
	
}	