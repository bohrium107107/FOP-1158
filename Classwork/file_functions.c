#include <stdio.h>

#include <stdlib.h>     
int main(){
    FILE *fp;
    char data[] = "Hello World!!!!";
    char buffer[50];
    
    //Open file in write mode
    fp = fopen("project.txt", "w+");
    if(fp == NULL){
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    //Write data to file
    fwrite(data, sizeof(char), sizeof(data), fp);
    printf("Data written to file successfully.\n");

    //Move file pointer to the beginning of the file
    fseek(fp, 0, SEEK_SET);

    //Read data from file
    fread(buffer, sizeof(char), sizeof(data), fp);
    printf("Data read from file: %s\n", buffer);

    //Close the file
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;   
}