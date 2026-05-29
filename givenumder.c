#include <stdio.h>

int main() {
    int num, i;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    // Loop to print the table from 1 to 10
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
