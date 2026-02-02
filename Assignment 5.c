//Write a program in C to perform basic operations such as addition, saddle point, inverse, magic 
//square of two matrices. 

#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2];
    printf("Enter the first matrix ");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the next matrix ");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of matrices is:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

