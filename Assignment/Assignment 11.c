//Comput square, square root, cube and cube root of a number, factorial
#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld",&n);
    if (n<0) {
        printf("Invalid input");
        return 0;
    }
    printf("Square: %lld\n",(long long)n*n);
    printf("Square root: %.2f\n",sqrt(n));
    printf("Cube: %lld\n",(long long)n*n*n);
    printf("Cube root: %.2f\n",cbrt(n));
    long long fact = 1; //only valid up to 20!
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    printf("Factorial: %lld",fact);
    return 0;
}