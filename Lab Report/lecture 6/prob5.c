//printing array in reverse order

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array element below: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reverse form of this array is: ");
    for (i = n-1; i >=  0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
