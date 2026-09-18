
#include <stdio.h>

int main() {
    int age;
    int hasID;

        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 18) {

            printf("Do you have an ID? (1=yes, 0=no): ");
            scanf("%d", &hasID);

        if (hasID == 1) {
            printf("Entry allowed\n");
        }
        else {
            printf("ID required\n");
        }

        }
        else {
            printf("Underage\n");
        }

        return 0;
}
