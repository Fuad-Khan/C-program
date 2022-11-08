#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j == 0)
                printf("* ");

            else if ((j == 1 || j == 2|| j == 3) &&(i == 0 || i == 2))

                printf("* ");

            else if (j == 4 && i == 0 )
                printf("* ");

            else
                printf("  ");
        }

        for (j = 0; j < 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 5; j++)
        {
            if (j == 0 || j == 4)
                printf("* ");

            else if (i == 4)
                printf("* ");

            else
                printf("  ");
        }

        for (j = 0; j < 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 5; j++)
        {
            if (j == 0 || j == 4)
                printf("* ");

            else if (i == 0 || i == 2)
                printf("* ");

            else
                printf("  ");
        }

        for (j = 0; j < 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 5; j++)
        {
            if (j == 0)
                printf("* ");

            else if ((j == 1 || j == 2) && (i == 0 || i == 4))
                printf("* ");

            else if (j == 3 && (i == 1 || i == 2 || i == 3))
                printf("* ");

            else
                printf("  ");
        }

        printf("\n");
    }
}
