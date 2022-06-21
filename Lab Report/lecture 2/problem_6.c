//distance calculator

#include <stdio.h>

int main() {
    float inpt, feet, inchs, cm;

    printf("Enter distance in meter: ");
    scanf("%f", &inpt);

    feet = inpt * 3.21;
    inchs = inpt * 39.37;
    cm = inpt * 100;

    printf("%.2f meter = %.2f feet\n", inpt, feet);
    printf("%.2f meter = %.2f inchs\n", inpt, inchs);
    printf("%.2f meter = %.2f centimeter\n", inpt, cm);

    return 0;
}