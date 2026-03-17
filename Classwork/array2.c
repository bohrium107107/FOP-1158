#include <stdio.h>
void main() {
    int a[3];
    int b[3];
    int c[3];
    printf("Enter three integers for array a:\n");
    for (int i=0; i<3; i++) {
        scanf("%d", &a[i]); }

    printf("Enter three integers for array b:\n");
    for (int i=0; i<3; i++) {
        scanf("%d", &b[i]); }
    
        //addition of two arrays
    for (int i=0; i<3; i++) {
        c[i] = a[i] * b[i]; }

    printf("The resulting array c (a[i] + b[i]) is:\n");
    for (int i=0; i<3; i++) { // display c
        printf("%d ", c[i]); }
    }
    