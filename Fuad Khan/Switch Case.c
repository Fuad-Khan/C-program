
#include <stdio.h>
int main()
{
    int n,reversed = 0, remainder, original,i,ch,number, result;
    int arr[100];

    while (ch != 0)
    {
        printf("Press 1. For Maximum in an array\n");
        printf("Press 2. For Odd even\n");
        printf("Press 3. For palindrom\n");
        printf("Press 4. For recursion\n");
        printf("Press 0. For close the program\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number of elements (1 to 100): ");
            scanf("%d", &n);

            for ( i = 0; i < n; ++i)
            {
                printf("Enter number%d: ", i + 1);
                scanf("%d", &arr[i]);
            }

            // storing the largest number to arr[0]
            for ( i = 1; i < n; ++i)
            {
                if (arr[0] < arr[i])
                {
                    arr[0] = arr[i];
                }
            }

            printf("Largest element = %d", arr[0]);
            break;

        case 2:
            printf("Enter an integer: ");
            scanf("%d", &n);

            // true if num is perfectly divisible by 2
            if(n % 2 == 0)
                printf("%d is even.", n);
            else
                printf("%d is odd.", n);
            break;
        case 3:
            printf("Enter an integer: ");
            scanf("%d", &n);
            original = n;

            // reversed integer is stored in reversed variable
            while (n != 0)
            {
                remainder = n % 10;
                reversed = reversed * 10 + remainder;
                n /= 10;
            }

            // palindrome if orignal and reversed are equal
            if (original == reversed)
                printf("%d is a palindrome.", original);
            else
                printf("%d is not a palindrome.", original);
            break;
        case 4:
            printf("Enter a positive integer: ");
            scanf("%d", &number);

            result = sum(number);

            printf("Sum of Natural Numbers = %d", result);
            return 0;

        case 0:
            break;
        default:
            printf("\n INVALID CHOICE \n");
        }
        printf("\n\n\n");
    }
    return 0;
}
int sum(int n)
{
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1);
    else
        return n;
}
