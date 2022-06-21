// Name: Fuad Khan
// ID: 221-35-883
//following number prime or not by taking input from the user
#include <stdio.h>

int main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }
  if (c == 2) {
        printf("%d is a Prime number",n);
  }
  else {
         printf("%d is not a Prime number",n);
  }
  return 0;
}
