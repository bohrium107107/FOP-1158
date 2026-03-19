#include <stdio.h>

// function to input matrix
void inputMatrix(int mat[2][2]) {
    int i, j;
    printf("enter elements of 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// function to display matrix
void displayMatrix(int mat[2][2]) {
    int i, j;
    printf("matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// function to find sum of all elements
int sumMatrix(int mat[2][2]) {
    int i, j, sum = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

int main() {
    int mat[2][2];
    int total;

    inputMatrix(mat);
    displayMatrix(mat);

    total = sumMatrix(mat);
    printf("sum of all elements = %d\n", total);

    return 0;
}