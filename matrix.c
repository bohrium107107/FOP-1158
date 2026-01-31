#include <stdio.h>
int main() {
    int a[2][2], i, j;
    printf("Enter elements of 2x2 matrix row-wise:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("2x2 matrix is:\n");
    for (int i =0; i<2; i++) {
        for (int j =0; j<2; j++) {
            printf("%d ", a[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}
