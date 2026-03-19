#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nAssignment Operations Results:\n");

    // assign the value of a to c
    c = a;
    printf("c = a: c = %d\n", c);

    // add the value of b to c and assign the result to c
    c += b;
    printf("c += b: c = %d\n", c);

    // subtract the value of b from c and assign the result to c
    c -= b;
    printf("c -= b: c = %d\n", c);

    // multiply c by b and assign the result to c
    c *= b;
    printf("c *= b: c = %d\n", c);

    // check if b is not zero to avoid division by zero
    if (b != 0) {

        // divide c by b and assign the result to c
        c /= b;
        printf("c /= b: c = %d\n", c);

        // find the remainder of c / b and assign to c
        c %= b;
        printf("c %%= b: c = %d\n", c);

    } else {
        printf("Division and modulus operations skipped (b = 0).\n");
    }

    return 0;
}