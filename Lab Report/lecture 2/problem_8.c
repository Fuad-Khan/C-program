//add and avg subject number

#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, avg;

    printf("Enter first subject number: ");
    scanf("%f", &sub1);

    printf("Enter second subject number: ");
    scanf("%f", &sub2);

    printf("Enter third subject number: ");
    scanf("%f", &sub3);

    printf("Enter fourth subject number: ");
    scanf("%f", &sub4);

    printf("Enter fifth subject number: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    avg = total / 5;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", avg);

    return 0;
}