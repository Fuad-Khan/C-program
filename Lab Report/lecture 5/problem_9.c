#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the last row number of your pattern: ");
    scanf("%d", &n);

    i = 1;

    while (i <= n) {
        j = 1;
        while(j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}