//Search specify element from array

#include <stdio.h>

int main() {
    int arr[10] = {1 , 2, 3, 7, 5, 6, 7, 8, 9, 10};
    int search_element, i, flag, index;

    printf("Enter which element you want to search: ");
    scanf("%d", &search_element);

    flag = 0;

    for(i = 0; i < 10; i++) {
        if(arr[i] == search_element){
            flag = 1;
            index = i;
        }
    }

    if(flag) {
        printf("%d is in the array, at index: %d\n", search_element, index);
    }
    else {
        printf("Error 404\n");
    }

    return 0;
}
