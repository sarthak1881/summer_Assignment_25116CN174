#include <stdio.h>
void printFibonacci(int n) {
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        // Print the current term
        printf("%d ", t1);
    
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    printFibonacci(terms);

    return 0;
}
