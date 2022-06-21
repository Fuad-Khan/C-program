// Name: Fuad Khan
// ID: 221-35-883
#include<stdio.h>
#include<conio.h>
void main()
{
    int cp,sp,tl,tp;
    printf("Enter the Cost price\n");
    scanf("%d",&cp);
    printf("Enter the Selling price\n");
    scanf("%d",&sp);

    if(sp>cp)
    {
        tp=sp-cp;
        printf("The profit is %d",tp);
    }
    else if (sp<cp)
    {
        tl=cp-sp;
        printf("The loss is %d",tl);
    }
    else
        printf("There is neither profit nor loss");
}
