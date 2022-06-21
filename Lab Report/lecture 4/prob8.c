//Cheaking staight

#include <stdio.h>

int main() {
    int x1, x2, y1, y2, z1, z2, slope1, slope2, temp;

    printf("Enter the value of\n");
    printf("Point1: ");
    scanf("%d", &x1);
    printf("Point2: ");
    scanf("%d", &y1);
    printf("Point3: ");
    scanf("%d", &x2);
    printf("Point4: ");
    scanf("%d", &y2);
    printf("Point5: ");
    scanf("%d", &z1);
    printf("Point6: ");
    scanf("%d", &z2);

    slope1 = (y2 - y1) % (x2 - x1);\

    //swapping value for determined second slope
    y1 = x2;
    temp = z1;
    z1 = y2;
    y2 = temp;

    slope2 = (z2 - z1) % (y2 - y1);

    if(slope1 == slope2) {
        printf("\nAll the three points fall on one straight line\n");
    }
    else {
        printf("\nAll the three points not fall on one straight line\n");
    }

    return 0;
}
