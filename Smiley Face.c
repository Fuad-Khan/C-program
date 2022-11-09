#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {

            if ((i == 1 || i == 10) && (j == 4 || j == 5 || j == 6 || j == 7))
                printf("* ");

            else if ((j == 1 || j == 10) && (i == 4 || i == 5 || i == 6 || i == 7))
                printf("* ");

            else if ((i == 2 || i == 9) && (j == 3 || j == 8))
                printf("* ");
            else if ((i == 3 || i == 8) && (j == 2 || j == 9))
                printf("* ");

            else if ((i == 4 || i == 7) && (j == 3 || j == 7))
                printf(" *");

            else if (i == 8 && (j == 4 || j == 5 || j == 6))
                printf(" *");
            else
                printf("  ");
        }

        printf("\n");
    }
}