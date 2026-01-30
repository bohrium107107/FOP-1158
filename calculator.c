#include <stdio.h>
int main(){
    float a;
    float b;
    int c;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);
    printf("Choose\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &c);
    switch (c)
    {case 1:
    printf("%.2f", a+b);
    break;

    case 2:
    printf("%.2f", a-b);
    break;

    case 3:
    printf("%.2f", a*b);
    break;

    case 4:
    printf("%.2f", a/b);
    break;

    default:
    printf("Wrong");
    }
}