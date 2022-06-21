// Name: Fuad Khan
// ID: 221-35-883
// a program to print the elements of a 2D array.
#include<stdio.h>
int main(){
   int a[3][3];
   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for a[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", a[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
