//find largest between three number by conditional operator

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three number here to check largest: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    (num1 > num2 && num1 > num3) ? printf("%d is largest number.\n") : (num2 > num3) ? printf("%d is largest.\n", num2) : printf("%d is largest.\n", num3);

    return 0;
}