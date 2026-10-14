#include <stdio.h>

int main() {
    char name[20];
    int number;
    char branch[20];

    printf("Enter your name\n");
    scanf("%19s", name);

    printf("Enter your roll number\n");
    scanf("%d", &number);

    printf("Enter your branch\n");
    scanf("%19s", branch);

    printf("name = %s\n", name);
    printf("number = %d\n", number);
    printf("branch = %s\n", branch);

    return 0;
}