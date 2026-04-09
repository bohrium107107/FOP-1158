#include <stdio.h>
int main() {
    char a[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    FILE *fs;
    fs = fopen("project.txt", "w");
    fwrite(a, 1, 10, fs);  
    fclose(fs);     
    return 0;
}