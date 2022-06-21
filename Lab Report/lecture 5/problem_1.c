//Printing hello world 10 times by using loop

#include <stdio.h>

int main() {
    int i;
    
    i =  1;

    while (i < 11) {
        printf("%d. Hello World!\n", i);

        i++;
    }

    return 0;
}