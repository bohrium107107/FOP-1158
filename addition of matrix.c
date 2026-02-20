#include <stdio.h>

int main() {
    float a[2][2], b[2][2], c[2][2];
    int i, j, ch;

    // Input first matrix
    printf("Enter elements of 2x2 matrix row-wise:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of next 2x2 matrix row-wise:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &b[i][j]);
        }
    }

    // Choose operation
    printf("Choose operation:\n1.Sum\n2.Difference\n3.Product\n4.Quotient\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Sum of matrices is:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%.2f\t", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Difference of matrices is:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%.2f\t", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Product of matrices is:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    c[i][j] = a[i][j] * b[i][j];
                    printf("%.2f\t", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            printf("Quotient of matrices is:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    if (b[i][j] == 0) {
                        printf("Error: Div by zero at [%d][%d]\t", i, j);
                        c[i][j] = 0;
                    } else {
                        c[i][j] = a[i][j] / b[i][j];
                        printf("%.2f\t", c[i][j]);
                    }
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
