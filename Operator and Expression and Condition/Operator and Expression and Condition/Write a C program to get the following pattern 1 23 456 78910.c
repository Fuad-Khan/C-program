// Name:Fuad Khan
// ID:221-35-883
#include <stdio.h>
int main() {
   int i, j, num = 1;
   for (i = 1; i <= 4; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", num);
         ++num;
      }
      printf("\n");
   }
   return 0;
}
