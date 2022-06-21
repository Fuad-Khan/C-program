//cheaking is this prime or not

#include <stdio.h>
#include <math.h>

int main() {
    int num, i, root;

    printf("Please enter a number to cheak: ");
    scanf("%d", &num);

    root = sqrt(num);

    if(num == 2) {
        printf("%d is prime number.\n", num);
    }
    else {
        for(i = 2; i <= root; i++) {
            if(num % i == 0) {
                printf("%d is not prime number\n", num);
                break;
            }
            else {
                printf("%d is prime number\n", num);
                break;
            }
        }
    }

    return 0;
}