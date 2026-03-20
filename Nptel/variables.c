#include <stdio.h>

int main() {
    // Integer data type
    int intVar = 10;

    // Floating-point data type
    float floatVar = 20.5f;

    // Double-precision floating-point data type
    double doubleVar = 30.123456;

    // Character data type
    char charVar = 'A';

    // String (character array)
    char stringVar[] = "Hello, C!";

    printf("Integer:\n");
    printf("  Value: %d\n", intVar);
    printf("  Size: %zu bytes\n\n", sizeof(intVar)); //use zu for sizeof function

    printf("Float:\n");
    printf("  Value: %.2f\n", floatVar);
    printf("  Size: %zu bytes\n\n", sizeof(floatVar));

    printf("Double:\n");
    printf("  Value: %.6f\n", doubleVar);
    printf("  Size: %zu bytes\n\n", sizeof(doubleVar));

    printf("Character:\n");
    printf("  Value: %c\n", charVar);
    printf("  Size: %zu byte\n\n", sizeof(charVar));

    printf("String:\n");
    printf("  Value: %s\n", stringVar);
    printf("  Size: %zu bytes\n\n", sizeof(stringVar)); //sizeof returns 10 but strlen returns 9

    return 0;
}
