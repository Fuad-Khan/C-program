//Is a trangle valid or not by angel

#include <stdio.h>

int main() {
    int first_angl, second_angl, third_angl, sum;

    printf("Enter first angel here: ");
    scanf("%d", &first_angl);
    printf("Enter second angel here: ");
    scanf("%d", &second_angl);
    printf("Enter third angel here: ");
    scanf("%d", &third_angl);

    sum = first_angl + second_angl + third_angl;

    if(sum == 180) {
        printf("This triangle is valid\n");
    }
    else {
        printf("This triangle is not valid\n");
    }


    return 0;
}
