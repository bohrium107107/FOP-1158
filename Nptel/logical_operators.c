#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nLogical Operations Results:\n");

    printf("(a > 0) && (b > 0): %s\n", (a > 0 && b > 0) ? "true" : "false");
    printf("(a > 0) || (b > 0): %s\n", (a > 0 || b > 0) ? "true" : "false");
    printf("!(a > 0): %s\n", (!(a > 0)) ? "true" : "false");

    return 0;
}