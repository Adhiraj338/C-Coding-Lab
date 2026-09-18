#include <stdio.h>

int main () {

	int number;
	int password;
	
	printf("Enter username number\n");
	scanf("%d",&number);
	
	if(number==101){
		printf("Enter the password\n");
		scanf("%d",&password);
		
		if(password==202){
			printf("Login successful\n");
				
		}
		
		else{
			printf("Wrong password\n");
		}
	}

	else{
		printf("Wrong username\n");
	}

	return 0;
	
}	


		
	

	