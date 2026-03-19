#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, k;
    int found = 0;

    printf("enter elements of 3x3 matrix:\n");

    // input matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // find saddle point
    for (i = 0; i < 3; i++) {

        // minimum in row
        int min = mat[i][0];
        int colIndex = 0;

        for (j = 1; j < 3; j++) { //if we find minimum in row we change the columns
            if (mat[i][j] < min) {
                min = mat[i][j];
                colIndex = j;
            }
        }

        // check if it is largest in column
        int isSaddle = 1;
        for (k = 0; k < 3; k++) {  //if we check if its largest in column we change the row
            if (mat[k][colIndex] > min) {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle) {
            printf("saddle point = %d\n", min);
            found = 1;
        }
    }

    if (!found) {
        printf("no saddle point\n");
    }

    return 0;
}