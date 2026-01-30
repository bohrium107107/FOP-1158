#include <stdio.h>
int main() {
    int a[10];
    printf("Enter 10 integers:\n");
        for (int i = 0; i<10; i++) {
            scanf("%d", &a[i]);}
    printf("The entered integers are:\n");
            for (int i = 0; i<10; i++) {
                printf("a[%d] = %d\n", i, a[i]);}
return 0;
            }
