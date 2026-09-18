#include <stdio.h>

int main () {
	int number;
	
	printf("Enter the number");
	scanf("%d",&number);
	
	if(number>0){
		printf("Number is positive\n");
		
		if(number %3==0 && number%5==0){
			printf("Divisible by both 3 and 5\n");
		}

		else if(number %3==0 && number%5!=0){
			printf("Divisible by 3 only\n");
		}

		else{
			printf("Not divisible by 3\n");
		}
	}

	else{
		printf("Not positive\n");
	}

	return 0;
	
}	