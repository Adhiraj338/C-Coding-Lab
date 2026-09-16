#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    
    double d;

    char c;

    bool b;

    printf("int :%lu bytes\n", sizeof(int));

    printf("double :%lu bytes\n", sizeof(double));

    printf("float :%lu bytes\n", sizeof(float));

    printf("char :%lu bytes\n", sizeof(char));

    printf("bool :%lu bytes\n", sizeof(bool));

    printf("a :%lu bytes\n", sizeof(a));

    printf("d :%lu bytes\n", sizeof(d));

    printf("c :%lu bytes\n", sizeof(c));

    printf("b :%lu bytes\n", sizeof(b));

    return 0;
}