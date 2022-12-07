#include <stdio.h>
#include <string.h>
typedef struct Person
{
    char name[50];
    char email[50];
    int phone;
} person;

int main()
{

    char n[50],e[50];
    person p1;
    printf("Enter Your Name: ");
    gets(n);
    strcpy(p1.name, n);
    printf("Enter Your email: ");
    gets(e);
    strcpy(p1.email, e);

    printf("Enter Your phone number: ");
    scanf("%d",&p1.phone);


    system("CLS");


    printf("\nName: %s\n", p1.name);
    printf("Email: %s\n", p1.email);
    printf("Phone: %d", p1.phone);

    return 0;
}
