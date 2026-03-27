//Calculate factorial 
#include <stdio.h>
int m;
int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  printf("Enter number ");
  scanf("%d", &m);
  printf("Factorial is %d", factorial(m));
  return 0;
}



