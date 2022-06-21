//Finding is it alphabet or not

#include <stdio.h>

int main() {
    char inpt;

    printf("Give an input here: ");
    scanf("%c", &inpt);

    ((inpt >= 'A' && inpt <= 'Z') ||(inpt >= 'a' && inpt <= 'z')) ? printf("%c is an Alphabet.\n", inpt) : printf("%c is not an Alphabet.\n", inpt);

    return 0;
}