#include <stdio.h>

int main() {
    int c, d, temp;

    printf("Enter two value of C and D: ");
    scanf("%d %d", &c, &d);

    printf("Before interchange:\nC = %d and D = %d\n", c, d);

    temp = c; 
    c = d;
    d = temp;
    
    printf("After interchange:\nC = %d and D = %d\n", c, d);

    return 0;
}