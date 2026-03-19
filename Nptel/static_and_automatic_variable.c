#include <stdio.h>
#include <conio.h>   // only for getch()

// GLOBAL VARIABLE
// Exists for the entire program and is accessible everywhere
int globalVar = 100;


// FUNCTION to demonstrate static vs automatic variables
void demonstrateVariables() {

    // STATIC VARIABLE
    // Created once and REMEMBERS its value between function calls
    static int staticVar = 10;

    // AUTOMATIC VARIABLE
    // Created every time the function is called
    // Destroyed when the function ends
    int autoVar = 5;

    printf("\nInside demonstrateVariables function:\n");

    // Print current values
    printf("Static Variable: %d\n", staticVar);
    printf("Automatic Variable: %d\n", autoVar);

    // Modify both variables
    staticVar++;   // This change will persist for next call
    autoVar++;     // This change will be lost after function ends
}


int main() {

    // LOCAL VARIABLE (inside main)
    // Exists only inside main function
    int localVar = 20;

    printf("In main function:\n");

    // Print global and local variables
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);

    // FIRST FUNCTION CALL
    printf("\nCalling demonstrateVariables for the first time:\n");
    demonstrateVariables();

    // SECOND FUNCTION CALL
    printf("\nCalling demonstrateVariables for the second time:\n");
    demonstrateVariables();

    // Pause so output doesn't disappear 
    getch();

    return 0;
}