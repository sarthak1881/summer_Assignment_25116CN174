#include <stdio.h>

int main() {
    int num, reverseNum = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    while (num != 0) {
        remainder = num % 10;               
        reverseNum = reverseNum * 10 + remainder; 
        num = num / 10;                      
    }

    printf("Reversed number = %d\n", reverseNum);

    return 0;
}
