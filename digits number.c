#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle 0 explicitly as it has one digit
    if (num == 0) {
        count = 1;
    } else {
        // Handle negative numbers by converting to positive
        if (num < 0) {
            num = -num;
        }
        
        // Remove the last digit in each iteration until num is 0
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("Total digits: %d\n", count);
    return 0;
}
