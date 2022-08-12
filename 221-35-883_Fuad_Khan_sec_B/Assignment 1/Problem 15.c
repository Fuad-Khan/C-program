#include <stdio.h>

int main() {
    int age_arif, age_fahmid, age_joy;

    printf("Enter the age of Arif: ");
    scanf("%d", &age_arif);
    printf("Enter the age of Fahmid: ");
    scanf("%d", &age_fahmid);
    printf("Enter the age of Joy: ");
    scanf("%d", &age_joy);

    if(age_arif < age_fahmid && age_arif < age_joy ) {
        printf("Arif is youngest\n");
    }
    else if (age_fahmid < age_joy) {
        printf("Fahmid is youngest\n");
    }
    else {
        printf("Joy is youngest\n");
    }

    return 0;
}
