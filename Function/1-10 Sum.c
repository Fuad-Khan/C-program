#include <stdio.h>

int add_num(int n);

int main()
{

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", add_num(num));
    return 0;
}

int add_num(int n)
{
    if (n != 0)
        return n + add_num(n - 1);
    else
        return n;
}