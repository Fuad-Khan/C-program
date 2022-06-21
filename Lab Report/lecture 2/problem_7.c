#include <stdio.h>

int main() {
    float gross_salary,  allowance, house_rent, basic_salary;

    printf("Please enter the basic salary: ");
    scanf("%f", &basic_salary);

    allowance = basic_salary * .4;
    house_rent = basic_salary * .2;

    gross_salary = basic_salary + allowance + house_rent;

    printf("The gross salary is: %.2f tk\n", gross_salary);

    return 0;
}