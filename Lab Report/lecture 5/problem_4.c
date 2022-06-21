//Reversing a number and comparing with original

#include <stdio.h>
#include <windows.h>

int main() {
    int num, digit, reverse, origin;

    printf("Please enter a five digit number here: ");
    scanf("%d", &num);

    origin = num;

    system("cls");

    printf("\nThe original number is: %d\n", origin);

    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("The reverse number is: %d\n", reverse);

    if(reverse == origin) {
        printf("Both are equal number\n");
    }
    else {
        printf("They are not equal\n");
    }

    return 0;
}