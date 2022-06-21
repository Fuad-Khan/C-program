//printing all prime number of a rang

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n, i, j, a, prime, root;

    printf("Enter the last number of your rang: ");
    scanf("%d", &n);

    prime = 1;

    for(i = 2; i <= n; i++) {
        if(i == 2) {
            printf("%d. prime number is %d\n", prime, i);
            prime++;
        }

        root = sqrt(i);

        for(j = 2; j  <= root ; j++) {
            if (i % j == 0) {
                 a = false;
            }
        }
        if(a != false) {            
            printf("%d. prime number is %d\n", prime, i);
            prime++;
        }
    }

    return 0;
}