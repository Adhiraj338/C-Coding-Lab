#include <stdio.h>

int main () {

int a=16,b=20;
int temp;


printf("before a=%d,b=%d\n",a,b);

temp=a;
a=b;
b=temp;

printf("after a=%d,b=%d\n", a,b);

return 0;
}
