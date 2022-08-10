#include<stdio.h>
int main()
{
    float mark1, mark2, mark3, mark4, mark5, average, ag, percentage;
    printf("Enter five marks: ");
    scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);
    ag = mark1+ mark2+ mark3+ mark4+ mark5;
    printf("Aggregate mark is %.2f\n", ag);
    percentage = ag * (100.00/500.00);
    printf(" the percentage is %.2f\n", percentage);


    return 0;
}