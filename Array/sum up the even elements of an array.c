// Name: Fuad Khan
// ID: 221-35-883
// sum up the even elements of an array.
#include<stdio.h>
main()
{
    int a[100],i,n,sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
    printf("Total Sum of Even values is: %d ",sum);
    getch();
}
