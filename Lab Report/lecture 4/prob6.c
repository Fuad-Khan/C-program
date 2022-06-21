//Caltculate percentage and grade of a student

#include <stdio.h>

int main() {
    int phy, chem, bio, math, computer, per;

    printf("Enter the mark of Physics: ");
    scanf("%d", &phy);
    printf("Enter the mark of Chemistry: ");
    scanf("%d", &chem);
    printf("Enter the mark of Biology: ");
    scanf("%d", &bio);
    printf("Enter the mark of Mathematics: ");
    scanf("%d", &math);
    printf("Enter the mark of computer: ");
    scanf("%d", &computer);

    per = (phy + chem + bio + math + computer) / 5;

    if(per >= 90) {
        printf("Grade A\n");
    }
    else if(per >= 80) {
        printf("Grade B");
    }
    else if(per >= 70) {
        printf("Grade C");
    }
    else if(per >= 60) {
        printf("Grade D");
    }
    else if(per >= 40) {
        printf("Grade E");
    }
    else {
        printf("Grade F");
    }

    return 0;
}
