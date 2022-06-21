//Finding sum of all even number from an array

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

   printf("Summition of all even number from your array: %d", sum);

    return 0;
}
