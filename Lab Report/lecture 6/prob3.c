//Finding max form array

#include <stdio.h>

int main() {
    int n, i, max;
    printf("Enter the how many number you want to store: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array below:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = 0;

    for(i = 0; i < n; i++){
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The max number of this array is: %d\n", max);

    return 0;
}
