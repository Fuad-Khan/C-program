// Name: Fuad Khan
// ID: 221-35-883
// C Program To Make a Simple Calculator Using switch...case
#include <stdio.h>
int main(){
    char ch;
    int a, b, result;

    // Asking for Input
    printf("Enter an Operator (+, *, *, /): ");
    scanf("%c", &ch);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);

    switch(ch){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}
