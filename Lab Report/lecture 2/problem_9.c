//print chacter's ASCII value

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character to know its ASCII value: ");
    scanf("%c", &ch);

    printf("%d is the AsCII value of %c.\n", ch, ch);

    return 0;
}