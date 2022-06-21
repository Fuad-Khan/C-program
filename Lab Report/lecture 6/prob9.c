//Printing 2D array

#include <stdio.h>

int main() {
    int row, column, i, j;

    printf("Enter how many row you wants: ");
    scanf("%d", &row);
    printf("Enter how many column you wants: ");
    scanf("%d", &column);

    int arr[row][column];

    printf("Enter elements of your 2D array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
