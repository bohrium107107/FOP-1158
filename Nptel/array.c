#include <stdio.h>

// function to input array
void inputArray(int arr[], int n) {
    int i;
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// function to display array
void displayArray(int arr[], int n) {
    int i;
    printf("array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// function to find sum
int sumArray(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5];
    int total;

    inputArray(arr, 5);
    displayArray(arr, 5);

    total = sumArray(arr, 5);
    printf("sum = %d\n", total);

    return 0;
}