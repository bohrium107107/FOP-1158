#include <stdio.h>
#include <conio.h>   // for getch()

int main()
{
    char pwd[9];
    int i;

    printf("Enter Password: ");

    for (i = 0; i < 8; i++) {
        pwd[i] = getch();
        printf("*");
    }

    pwd[i] = '\0'; //converts the pwd to string
    printf("\n");

    printf("Entered password: %s\n", pwd);

    getch(); // wait for key press
    return 0;
} 