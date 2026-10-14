#include<stdio.h>

int main() {

	int length;
	int breadth;
	
	printf("Enter the length\n");
	scanf("%d", &length);
	
	printf("Enter the breadth\n");
	scanf("%d", &breadth);
	
	printf("The area of rectangle = %d\n", breadth * length);
	
	return 0;
	
}	