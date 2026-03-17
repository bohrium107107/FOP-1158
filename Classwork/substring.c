#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int i, j;

    printf("Enter main string: ");
    scanf("%s", str1);

    printf("Enter string to check: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while(str2[j] != '\0' && str1[i + j] == str2[j])
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