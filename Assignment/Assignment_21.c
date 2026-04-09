#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char ch;
    
    /* Open source file for reading */
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error: Cannot open source file!<br>");
        return 1;
    }
    
    /* Open destination file for writing */
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error: Cannot create destination file!<br>");
        fclose(source);
        return 1;
    }
    
    /* Copy file character by character */
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("File copied successfully!<br>");
    
    /* Close both files */
    fclose(source);
    fclose(destination);
    
    return 0;
}