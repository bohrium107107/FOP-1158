#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    int m1,m2;
    float grade;
};

int main()
{   struct Student S[2];

    for(int i=0; i<4 ; i++){
        printf("Enter Student name ");
        scanf("%s", S[i].name);
    //}
    //for(int i=0; i<4 ; i++){
        printf("Enter Student roll no ");
        scanf("%d", &S[i].roll);
    //}

    //for(int i=0; i<4 ; i++){
        printf("Enter Student marks 1 ");
        scanf("%d", &S[i].m1);
   // }

    //for(int i=0; i<4 ; i++){
        printf("Enter Student marks 2 ");
        scanf("%d", &S[i].m2);
    }

    for(int i=0; i<4 ; i++){
        S[i].grade = (S[i].m1 + S[i].m2)/2;
    }
   
    for(int i=0; i<4 ; i++){
        printf("%s your grade is %.2f\n", S[i].name, S[i].grade);
    }

    return 0;
}