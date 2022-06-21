//Electric bill

#include <stdio.h>

int main() {
    float unit, bill;

    printf("Enter Unit: ");
    scanf("%f", &unit);

    if (unit < 201) {
        bill = unit * 0.5;
        printf("Your bill is %.2f\n", bill);
    }
    else if(unit < 401) {
        bill = 100 + ((unit - 200) * 0.65);
        printf("Your bill is %.2f\n", bill);
    }
    else if(unit < 601) {
        bill = 230 + ((unit - 400) * 0.8);
        printf("Your bill is %.2f\n", bill);
    }
    else {
        bill = 390 + ((unit - 600) * 1.0);
        printf("Your bill is %.2f\n", bill);
    }

    return 0;
}
