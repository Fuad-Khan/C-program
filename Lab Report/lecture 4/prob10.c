//cheakin is area greater then perimeter

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, peri, area, x;

    printf("Enter value of three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    peri = a + b + c;
    x = peri / 2;

    area = sqrt(x * (x - a) * (x - b) * (x - c));

    if(area > peri) {
        printf("Area is greater than Perimeter\n");
    }
    else if (area < peri) {
        printf("Perimeter is greater than Area\n");
    }
    else {
        printf("Both are equal\n");
    }

    return 0;
}
