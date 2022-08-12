#include <stdio.h> 
int main() {
int distance;
float meter, feet, inches, centimeter;
 
printf("Enter the distance [in Kilometers]: ");
scanf("%d", & distance);
 
meter = distance * 1000;
feet = distance * 3280.84;
inches = distance * 39370.1;
centimeter = distance * 100000;
 
printf("Meter = %f\n", meter);
printf("Feet = %f\n", feet);
printf("Inches = %f\n", inches);
printf("Centimeters = %f\n", centimeter);
 
return 0;
}