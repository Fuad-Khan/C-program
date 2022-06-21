// Name: Fuad Khan
// ID: 221-35-883
//
#include<stdio.h>
#include<conio.h>
int main()
{
    int Arif, Fahmid, Joy;

    printf("Enter the age of Arif: ");
    scanf("%d", &Arif);

    printf("Enter the age of Fahmid: ");
    scanf("%d", &Fahmid);

    printf("Enter the age of Joy: ");
    scanf("%d", &Joy);

    if (Arif<=Fahmid)
    {
        if(Arif<=Joy)
        {
            printf("Arif is the Youngest");
        }
        else
        {
            printf("Joy is the Youngest");
        }
    }
    else if(Fahmid<=Joy)
    {
        printf("Fahmid is the Youngest");
    }
    else
    {
        printf("Joy is the Youngest");
    }
    return 0;
}
