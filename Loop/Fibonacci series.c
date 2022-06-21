// Name: Fuad Khan
// ID: 221-35-883
// Fibonacci series up to a certain number by taking input from the user
#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
