#include <stdio.h>
int i, j, a, n, ch, r;
int number[100];

int main()
{
    int i, j, a, n, ch, r;
    int number[n];
    printf("Enter the number of element: ");
    scanf("%d", &n);
    
    printf("Enter the Numbers \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    while (ch != 0)
    {
        printf("Press 1. For ASCENDING ORDER\n");
        printf("Press 2. For DESCENDING ORDER\n");
        printf("Press 3. For Searching an element\n");
        printf("Press 0. For close the program\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ascending(number, n);
            break;

        case 2:
            descending(number, n);
            break;
        case 3:
            searching(number, n);
            break;
        case 0:
            break;
        default:
            printf("\n INVALID CHOICE \n");
        }
        printf("\n\n\n");
    }
    return 0;
}

void ascending(int number[100], int n)
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("\nThe numbers arranged in ascending order are given below\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", number[i]);
    }
}

void descending(int number[100], int n)
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("\nThe numbers arranged in descending order are given below\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", number[i]);
    }
}

void searching(int number[100], int n)
{
    printf("Enter the item to be searched: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++)

    {
        if (number[i] == r)

        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found");
}

