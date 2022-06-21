//Finding out the frequency of elementd in 1D array
#include <stdio.h>

int main() {
    //Variable declaration
    int n, i, one, two, three;

    //taking input as array size
    printf("Please enter how many mumber you want to test: ");
    scanf("%d", &n);

    //defining array
    int arr[n];

    one = 0;
    two = 0;
    three = 0;



    printf("Enter numbers here(The number will be 1, 2 and 3): ");

    //taking array's input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //cheaking condition and store result
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

    //showing output
    printf("1 occurs %d times\n", one);
    printf("2 occurs %d times\n", two);
    printf("3 occurs %d times\n", three);

    return 0;
}
