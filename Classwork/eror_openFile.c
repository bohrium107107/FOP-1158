#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char data[] = "Hello World";
    char buffer[50];
    fp = fopen("non_existent_file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    } 
    fclose(fp);
    return 0;
}