//Calculate gross salary of an employee, given his base salary. Let HRA be 10% of base salary, and TA be 5% of base salary. 
//He pays tax of 2% on the total salary. Print the gross salary and net salary of the employee.

#include <stdio.h>
int main() { 
    float bs, gs, ns, hra, ta, tax;
    printf("Enter base salary ");
    scanf("%f", &bs);
    hra = bs * 0.10;
    ta = bs * 0.05;
    gs = bs + hra + ta;
    tax = gs * 0.02;
    ns = gs - tax;
    printf("Gross salary is ₹%.2f\n", gs);
    printf("Net salary is ₹%.2f\n", ns);
    return 0;

}