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

    (strcmp(str1, str) == 0) ? printf("\nIt is a palindrome.") : printf("\nNot a palindrome.\n");

    char str1[50], str2[50];
    int k, j;

    printf("Enter main string: ");
    scanf("%s", str1);

    printf("Enter string to check: ");
    scanf("%s", str2);

    for(k = 0; str1[i] != '\0'; k++)
    {
        j = 0;

        while(str2[j] != '\0' && str1[k + j] == str2[j])
        {
            j++;
        }

        if(str2[j] == '\0')
        {
            printf("It is a substring");
            return 0;
        }
    }

    printf("Not a substring");


    return 0;


}
