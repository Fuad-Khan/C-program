#include<stdio.h>
int main()
{
    double km,meter,feet,inches,centimeter;
    printf("Enter the distance:);
    scanf("%lf",&km);
    meter = 1000* km ;
    feet = 3280.8399 * km ;
    inches = 39370.0787 * km ;
    centimeter = 100000* km ;
    printf(" The distance is %.2lf meter \n %.2lf feet \n %.2lf inches\n %.2lf centimeter", meter, feet,inches,centimeter);
    
    return 0;
}