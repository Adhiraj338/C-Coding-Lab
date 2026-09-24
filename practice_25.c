#include <stdio.h>

int main () {	
	
	int marks;
	int attendance;
	
	printf("Enter the marks\n");
	scanf("%d",&marks);
	
	printf("Enter the attendance\n");
	scanf("%d",&attendance);
	
	if(marks>=40){
		printf("Pass in marks\n");
		
		if(attendance>=75){
			printf("Eligible to pass\n");
		}

		else{
			printf("Low attendance\n");
		}
	}

	else{
		printf("Fail in marks\n");
	}	
		
	return 0;

}	