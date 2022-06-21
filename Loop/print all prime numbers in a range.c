// Name: Fuad Khan
// ID: 221-35-883
// C program to find prime numbers in a given range
#include <stdio.h>
int main()
{
    int num,a, b, i, count;
    printf("\nEnter start value : ");
    scanf("%d",&a);
    printf("\nEnter end value : ");
    scanf("%d",&b);
    printf("\nPrime Numbers between %d and %d : \n", a, b);
    for (num = a; num <= b; num++)
    {
        count = 0;
        for (i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
        {
            printf("%d \n", num);
        }
    }
    return 0;
}
