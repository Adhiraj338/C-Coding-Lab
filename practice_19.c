#include <stdio.h>

int main() {

	int number;
	
	printf("Enter the number:\n");
    scanf("%d",&number);
	
	if(number>0){
		printf("Number is positive\n");
		
		
		if(number%2==0){
			printf("It is even\n");
		}

		else{
			printf("It is odd\n");
		}

	}

	else{
		printf("Not a positive number");
	}
 
	return 0;
	
}
		
	  
		  
		  