#include <stdio.h>
int main(){
    char buffer[100];
    FILE *stream;
    stream = fopen("Project.txt", "r");
    int count = fread(&buffer, sizeof(char), 100, stream);
    fclose(stream);
    printf("The number of characters read: %d\n", count);
    printf("The characters read: %s\n", buffer);
    return 0;   
}