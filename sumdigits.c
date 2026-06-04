#include <stdio.h>

r
int reverse_number(int num, int accumulated_result) {
    
    if (num == 0) {
        return accumulated_result;
    }
    
    
    int last_digit = num % 10;
    accumulated_result = (accumulated_result * 10) + last_digit;
    
   
    return reverse_number(num / 10, accumulated_result);
}

int main() {
    int input_number;

   
    printf("Enter an integer to reverse: ");
    if (scanf("%d", &input_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

   
    int reversed_result = reverse_number(input_number, 0);

    
    printf("Reversed number: %d\n", reversed_result);

    return 0;
}
