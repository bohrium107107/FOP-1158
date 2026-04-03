#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d, b=%d\n ", a,b);
}

void swapbyref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a by ref =%d, b by ref =%d ", *a,*b);
}


int main() {
    int a = 2;
    int b = 3;
    swap(2,3);
    swapbyref(&a,&b);
    return 0;
}
