// Name:Fuad Khan
// ID:221-35-883
//Finding out the frequency of elements in 1D array
#include <stdio.h>

int main() {

    int n, i, one, two, three;

    printf("Please enter how many number you want to test: ");
    scanf("%d", &n);

    int arr[n];

    one = 0;
    two = 0;
    three = 0;
    printf("Enter numbers here(The number will be 1, 2 and 3): ");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == 1) {
            one++;
        }
        else if(arr[i] == 2) {
            two++;
        }
        else if(arr[i] == 3) {
            three++;
        }
    }

    printf("1 occurs %d times\n", one);
    printf("2 occurs %d times\n", two);
    printf("3 occurs %d times\n", three);

    return 0;
}
