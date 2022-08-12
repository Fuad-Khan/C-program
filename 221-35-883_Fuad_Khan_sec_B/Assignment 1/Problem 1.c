#include <stdio.h>
int main()
{
    double basic_salary, dearness_allowence, house_rent, gross_salary;
    printf("Enter basic salary:");
    scanf("%lf", &basic_salary);
    dearness_allowence = .4 * basic_salary;
    house_rent = .2 * basic_salary;
    gross_salary = basic_salary + house_rent + dearness_allowence;
    printf("\nGross salary is: %lf", gross_salary);

    return 0;
}