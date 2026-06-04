#include <stdio.h>


unsigned long long factorial(int n);

int main() {
    int num;
    unsigned long long result;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Error: Input too large. Maximum supported input is 20 to prevent overflow.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}


unsigned long long factorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}
