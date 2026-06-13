#include <stdio.h>
int isPerfect(int num);

int main() {
    int number;
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to the running total
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}
