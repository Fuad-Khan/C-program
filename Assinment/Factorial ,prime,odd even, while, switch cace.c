// Name:Fuad Khan
// ID:221-35-883
#include<stdio.h>
int main()
{
    int c=0, num, res, n, flag=0, i;
    while(c!=4)
    {
        printf("1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");


        printf("Enter your choice:");
        scanf("%d", &c);


        switch(c)
        {

            case 1:


                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;
                res=num;
                while(num>1)
                {
                    res = res*(num-1);
                    num = num-1;
                }
                printf("\nFactorial of %d is %d. \n",n, res);
                break;

            case 2:

                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                for(i=2;i<=n/2;i++)
                {
                    if(num%i==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(num==1)
                    printf("\n1 is neither prime nor composite");
                else
                {
                        if(flag==0)
                            printf("\n%d is Prime Number.", n);
                        else
                            printf("\n%d is not a Prime Number.\n", n);
                }
                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                if(num%2==0)
                    printf("\n%d is Even Number.\n\n",n);
                else
                    printf("\n%d is Odd Number.\n\n",n);
                break;

            case 4:
                printf("\nExit");
                break;
        }
    }
}
