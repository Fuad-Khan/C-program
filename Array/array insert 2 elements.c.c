//Fuad Khan
#include <stdio.h>
int main()
{
    int arr[100];
    int i, size, num1, num2, pos1,pos2;

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input new element and position to insert */
    printf("Enter 1st element to insert : ");
    scanf("%d", &num1);
    printf("Enter 2nd element to insert : ");
    scanf("%d", &num2);
    printf("Enter the 1st element position : ");
    scanf("%d", &pos1);
    printf("Enter the 2nd element position : ");
    scanf("%d", &pos2);

        for(i=size-1; i>=pos1-1; i--)
        {
            arr[i+1] = arr[i];
        }

        arr[pos1-1] = num1;


         for(i=size; i>=pos2-1; i--)
        {
            arr[i+1] = arr[i];
        }

        arr[pos2-1] = num2;


        /* Print array after insert operation */
        printf("Array elements after insertion : ");
        for(i=0; i<size+2
        ; i++)
        {
            printf("%d\t", arr[i]);
        }


    return 0;
}