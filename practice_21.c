#include <stdio.h>

int main () {

	int number;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	
	if(number>=1 && number<=100){
		printf("check whether it is divisible by 5\n");
		
		if(number%5==0){
			printf("Divisible by 5\n");
		}	
			
		else{
			printf("Not divisible by 5");
		}

	}
	
	else{
		printf("Out of range");
	}	

	return 0;
	
}	