#include <stdio.h>


double power_optimized(double x, long long n) {
    
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    
    double result = 1.0;
    while (n > 0) {
        
        if (n % 2 != 0) {
            result *= x;
        }
        x *= x;  
        n /= 2;  
    }
    return result;
}

int main() {
    double base;
    long long exp;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%lld", &exp);

    double ans = power_optimized(base, exp);
    printf("%.4f^%lld = %.6f\n", base, exp, ans);

    return 0;
}
