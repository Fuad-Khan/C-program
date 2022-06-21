//Finding all odd from array

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter all elements of array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All odd number of your: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
