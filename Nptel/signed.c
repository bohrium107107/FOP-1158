#include <stdio.h>

int main() {
    signed int signedVar = -100;  
    unsigned int unsignedVar = 100; 

    printf("Signed Integer:\n");
    printf("  Value: %d\n", signedVar);

    printf("Unsigned Integer:\n");
    printf("  Value: %u\n", unsignedVar);

    // Assigning a negative value to an unsigned integer
    unsigned int invalidUnsigned = -1;
    printf("Unsigned Integer with a negative assignment (-1):\n");
    printf("  Value: %u\n", invalidUnsigned);

    return 0;
}
