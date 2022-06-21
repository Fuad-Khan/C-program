// Name: Fuad Khan
// ID: 221-35-883
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c );
    sum = a+b+c;

    if (sum == 180)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");

    return 0;
}
