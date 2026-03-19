#include <stdio.h>

// function to input matrix
void inputMatrix(int mat[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// function to add two matrices
void addMatrix(int a[2][2], int b[2][2], int result[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// function to display matrix
void displayMatrix(int mat[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[2][2], b[2][2], result[2][2];

    printf("enter first matrix:\n");
    inputMatrix(a);

    printf("enter second matrix:\n");
    inputMatrix(b);

    addMatrix(a, b, result);

    printf("resultant matrix:\n");
    displayMatrix(result);

    return 0;
}