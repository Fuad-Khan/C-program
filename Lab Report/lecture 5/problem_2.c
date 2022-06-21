//swapping number after add

#include <stdio.h>

int main() {
    int num, i, sum, reverse, n;

    i = 1;
    sum = 0;
    reverse = 0;

    printf("Enter the last number of the rang: ");
    scanf("%d", &n);

    //adding number here
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum before swapping: %d\n", sum);

    //swapping number
    while (sum > 0) {
        num = sum % 10;
        reverse = reverse * 10 + num;
        sum /= 10;
    }

    printf("Sum after swapping: %d\n", reverse);

    return 0;
}