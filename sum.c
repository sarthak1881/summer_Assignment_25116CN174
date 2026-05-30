#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num, originalNum, remainder, sum = 0;

    
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
8
    originalNum = num;

    
    num = abs(num);

   
    while (num > 0) {
        remainder = num % 10; 
        sum += remainder;      
        num = num / 10;     
    }
2
   
    printf("The sum of the digits of %d is: %d\n", originalNum, sum);

    return 0;
}
