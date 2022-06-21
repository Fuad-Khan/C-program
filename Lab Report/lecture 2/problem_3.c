//Calculate the area of a rectangle

#include <stdio.h>

int main() {
    float len, bre, area;

    printf("Please enter the length of rectangle: ");
    scanf("%f", &len);
    printf("Please enter the breath of rectangle: ");
    scanf("%f", &bre);

    area = len * bre;

    printf("Area of the rectangle is: %.2f meter square\n", area);

    return 0;
}