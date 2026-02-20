#include <stdio.h>
int main() {
    float a[2][2], b[2][2], c[2][2];
    int i, j, c;
    printf("Enter elements of 2x2 matrix row-wise:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of next 2x2 matrix row-wise:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Choose operation\n1.Sum\n2.Difference\n3.Product\n4.Quotient");
    scanf("%d", &c);

    switch(c){
        case 1:

    }


    printf("Sum of matrices is:\n");
    for (int i =0; i<2; i++) {
        for (int j =0; j<2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}
