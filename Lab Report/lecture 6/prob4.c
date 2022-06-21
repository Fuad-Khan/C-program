//Finding minimum from an array
#include <stdio.h>

int main() {
    int n, i, min;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements below: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = 0;

    for(i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum value of the array is: %d\n", min);

    return 0;
}
