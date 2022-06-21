
#include <stdio.h>

int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 != 1) {
        printf ("%d is even\n", num);
    }
    else {
        printf("%d is odd\n");
    }

    return 0;
}
