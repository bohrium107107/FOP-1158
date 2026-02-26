#include <stdio.h>


#define MAX 10

void addMatrices(int r, int c, int A[MAX][MAX], int B[MAX][MAX]);
void saddlePoint(int r, int c, int A[MAX][MAX]);

void addMatrices(int r, int c, int A[MAX][MAX], int B[MAX][MAX]) {
    int sum[MAX][MAX];

    printf("Result:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int r, int c, int A[MAX][MAX]) {
    int found = 0;

    for (int i = 0; i < r; i++) {
        int min = A[i][0], col = 0;

        for (int j = 1; j < c; j++) {
            if (A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        int k;
        for (k = 0; k < r; k++) {
            if (A[k][col] > min)
                break;
        }

        if (k == r) {
            printf("Saddle Point: %d\n", min);
            found = 1;
        }
    }

    if (!found)
        printf("No Saddle Point found.\n");
}

int main() {
    int choice, r, c;
    int A[MAX][MAX], B[MAX][MAX];

    while (1) {
        printf("\n---- MATRIX OPERATIONS ----\n");
        printf("1. Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse (2x2 only)\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4)
            break;

        switch (choice) {

        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            printf("Enter Matrix A:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &A[i][j]);

            printf("Enter Matrix B:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &B[i][j]);

            addMatrices(r, c, A, B);
            break;

        case 2:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            printf("Enter Matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &A[i][j]);

            saddlePoint(r, c, A);
            break;

        case 3: {
            float a, b, c, d;
            float det;

            printf("Enter elements of 2x2 matrix:\n");
            printf("a b\nc d\n");
            scanf("%f %f %f %f", &a, &b, &c, &d);

            det = a*d - b*c;

            if (det == 0) {
                printf("Inverse does not exist (Determinant = 0)\n");
            } else {
                printf("\nInverse Matrix:\n");
                printf("%.2f  %.2f\n",  d/det, -b/det);
                printf("%.2f  %.2f\n", -c/det,  a/det);
            }
            break;
        }

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}