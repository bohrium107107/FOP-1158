#include <stdio.h>

// function to check scholarship eligibility
void checkScholarship(int marks[], int n) {
    int i;
    int sum = 0;
    int fail = 0;

    // fail any subject below 50
    for (i = 0; i < n; i++) {
        sum += marks[i];
        if (marks[i] < 50) {
            fail = 1;
        }
    }

    float avg = sum / (float)n;

    printf("average = %.2f\n", avg);

    
    if (avg >= 75 && fail == 0) {
        printf("you got a scholarship\n");
    } else {
        printf("no scholarship\n");
    }
}

int main() {
    int n = 5;
    int marks[5];
    int i;

    printf("enter marks for 5 subjects:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // call function
    checkScholarship(marks, n);

    return 0;
}
