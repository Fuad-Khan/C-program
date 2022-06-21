//Determining profit

#include <stdio.h>

int main() {
    float cost_price, sell_price, sub;

    printf("Please enter cost price: ");
    scanf("%f", &cost_price);
    printf("Please enter sell price: ");
    scanf("%f", &sell_price);

    if(cost_price < sell_price) {
        sub = sell_price - cost_price;

        printf("Hurrah! You made %.2f tk as profit\n", sub);
    }
    else if(cost_price > sell_price) {
        sub = cost_price - sell_price;

        printf("Alas! You made %.2f tk as lose\n", sub);
    }
    else {
        printf("\nYou no profit or lose, Your life is lose :)");
    }

    return 0;
}
