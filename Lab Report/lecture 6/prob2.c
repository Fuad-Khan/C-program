//Sorting in desending order

#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    //taking array's input
    printf("Enter element of arr below here: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //sorting in descending
    for(i = 0; i < n; i++) {
        for(j = 0; j < (n - i - 1); j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("After sort in descending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
