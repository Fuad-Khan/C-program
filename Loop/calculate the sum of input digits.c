
// calculate the sum of its digits
#include<stdio.h>
int main()
{
    int num,i,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num != 0){
        sum += num % 10;
        num = num/10;
    }

    printf("\n The sum of the digis is: %d",sum);
    return 0;
}
