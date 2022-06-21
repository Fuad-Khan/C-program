//leap year

#include <stdio.h>

int main() {
    int inpt_year;

    printf("Enter a year: ");
    scanf("%d", &inpt_year);

    if (inpt_year % 4 != 0) {
        printf("%d is not leap year\n", inpt_year);
    }
    else if(inpt_year % 100 == 0 && inpt_year % 400 != 0) {
        printf("%d is not leap year\n", inpt_year);
    }
    else {
        printf("%d is leap year\n", inpt_year);
    }

    return 0;
}
