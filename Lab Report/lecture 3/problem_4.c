//salary calculator

#include <stdio.h>

int main() {
    float base, bonus, commision, total, sale, price, total_sale, total_sale_quantity;

    printf("Please enter price of each computer: ");
    scanf("%f", &price);
    printf("Enter the sale quantity of a month: ");
    scanf("%f", &total_sale_quantity);
    printf("Enter base salary: ");
    scanf("%f", &base);

    bonus = total_sale_quantity * 200.00;
    total_sale = price * total_sale_quantity;
    commision = total_sale * 0.02;

    total = base + bonus + commision;

    printf("Total salary is: %.2f\n", total);

    return 0;
}