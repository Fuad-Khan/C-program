// Name: Fuad Khan
// ID: 221-35-883
// find the factorial value of any number entered through the keyboard.
#include <stdio.h>
void main()
{
    int i,f=1,num;

    printf("Input the number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
        f=f*i;

    printf("The Factorial of %d is: %d\n",num,f);
}
