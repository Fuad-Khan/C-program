#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter the numbers: \n");
    scanf("%lf %lf",&a,&b);
    printf("\nSummation of the numbers:\n");
    printf("%.2lf\n",a+b);
    printf("\nSubstraction of the numbers: \n");
    printf("%.2lf\n",a-b);
    printf("\nMultiplication of the numbers: \n");
    printf("%.2lf\n",a*b);
    printf("\nDivision of the numbers: \n");
    printf("%.2lf\n",a/b);
    return 0;
}