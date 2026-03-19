#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nRelational Operations Results:\n");

    printf("%d == %d: %s\n", num1, num2, (num1 == num2) ? "true" : "false");
    printf("%d != %d: %s\n", num1, num2, (num1 != num2) ? "true" : "false");
    printf("%d > %d: %s\n", num1, num2, (num1 > num2) ? "true" : "false");
    printf("%d < %d: %s\n", num1, num2, (num1 < num2) ? "true" : "false");
    printf("%d >= %d: %s\n", num1, num2, (num1 >= num2) ? "true" : "false");
    printf("%d <= %d: %s\n", num1, num2, (num1 <= num2) ? "true" : "false");

    return 0;
}