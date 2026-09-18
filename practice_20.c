#include <stdio.h>

int main () {
	
	int marks;
	
	printf("Enter the marks :\n");
	scanf("%d",&marks);
	
	if(marks>=0 && marks<=100){
		printf("valid marks\n");
		
		if(marks>=40){
			printf("Pass\n");
		}

		else{
            printf("Fail\n");
		}
	}

	else{
		printf("Invalid marks\n");
	}	
	
	return 0;
	
}	
			