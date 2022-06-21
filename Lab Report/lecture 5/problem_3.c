//calculate sum of all digit

#include <stdio.h>

int main() {
    int num, digit, sum;

    printf("Enter five digit number here: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("The summition is: %d\n", sum);

    return 0;
}