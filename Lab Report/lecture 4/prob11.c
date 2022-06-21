//performing operation by using switch case


#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter two number: ");
    scanf("%f %f", &num1, &num2);
    printf("Which operation you want to perform: \n");
    printf("\tFor summition enter +: \n");
    printf("\tFor substraction enter -: \n");
    printf("\tFor multiplication enter *: \n");
    printf("\tFor divition enter /: \n");
    printf("\tFor mod enter %%: \n");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f x %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            break;

        case '%':
            result = (int)num1 % (int)num2;
            printf("%.2f %% %.2f = %.2f\n", num1, num2, result);
            break;

        default:
            printf("Enter the valid operator.........");

    }

    return 0;
}
