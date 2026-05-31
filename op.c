#include <stdio.h>

int main() {
    int n;
    
    long long t1 = 0, t2 = 1; 
    long long nextTerm = 0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        
        printf("%lld", t1);
        
        
        if (i < n) {
            printf(", ");
        }

        nextTerm = t1 + t2;
        t1 = t2;      
        t2 = nextTerm; 
    }

    printf("\n");
    return 0;
}
