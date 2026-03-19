#include <stdio.h>

// 1. no arguments, no return
void greet() {
    printf("hello, welcome to c programming\n");
}

// 2. arguments, no return
void add(int a, int b) {
    int sum = a + b;
    printf("sum = %d\n", sum);
}

// 3. no arguments, with return
int getNumber() {
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    return x;
}

// 4. arguments, with return
int multiply(int a, int b) {
    return a * b;
}

int main() {

    // calling function 1
    greet();

    // calling function 2
    add(5, 3);

    // calling function 3
    int num = getNumber();
    printf("you entered: %d\n", num);

    // calling function 4
    int result = multiply(4, 5);
    printf("product = %d\n", result);

    return 0;
}