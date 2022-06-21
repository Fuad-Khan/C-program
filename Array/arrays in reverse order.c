// Name: Fuad Khan
// ID: 221-35-883
// a program that prints arrays in reverse order.
#include<stdio.h>
int main()
{
    int n, i;
     printf("enter the size of an array : ");
     scanf("%d",&n);
     int arr[n];
        printf("Please give value for index: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Array in reverse order is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
