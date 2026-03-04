#include <stdio.h>
#include <string.h>
//str reverse str palindrome str subset
int main() {
    char str1[50];
    char w[50];
    char str[50];
    int s;
    int i;

    printf("Enter string ");
    scanf("%s", str1);
    s = strlen(str1);

    printf("Reverse string is ");

    for(i = s-1; i >= 0; i--)
    {
    str[s-1-i] = str1[i];
    }
    str[s] = '\0';

    printf(str);

    (strcmp(str1, str) == 0) ? printf("\nIt is a palindrome.") : printf("\nNot a palindrome.");
    
    return 0;


}
