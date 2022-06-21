//QUADRATIC EQUATION

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = pow(b, 2) - 4 * a *c;

    if (d < 0) {
        printf("Impossible to calculate.........\n");
    }
    else {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("First root is: %.2f\n", root1);
        printf("Second root is: %.2f\n", root2);
    }

    return 0;
}