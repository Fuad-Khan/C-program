#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("\nTemperature in Celsius is : %.2f", celsius);
    return 0;
}