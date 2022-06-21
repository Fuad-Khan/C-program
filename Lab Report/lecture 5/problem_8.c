//Fibonacci series

#include <stdio.h>

int main() {
    int i, first_number, second_number, fibbo_number, temp, n;

    printf("Please enter the last number of your series: ");
    scanf("%d", &n);
    printf("Enter first number of your fibbonacci series: ");
    scanf("%d", &first_number);
    printf("Enter second number of fibbonacci number series: ");
    scanf("%d", &second_number);

    i = 1;
    printf("\n\nThe series is:\n");
    printf("%d %d ", first_number, second_number);

    while (i <= n) {
        fibbo_number = first_number + second_number;

        printf("%d ", fibbo_number);

        first_number = second_number;
        second_number = fibbo_number;

        i++;
    }

    return 0;
}