// Name: Fuad Khan
// ID: 221-35-883
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s, area, perimeter;

    printf("enter the 3 sides of the triangle\n");
    scanf("%f,%f,%f", &a,&b,&c);


    perimeter = a+b+c;
    s = perimeter / 2;
    area=  sqrt(s * (s - a) * (s - b) * (s - c));

    if(area > perimeter)
    {
        printf("yes, area(%0.2f) is greater than its perimeter(%0.2f)\n",
               area, perimeter);
    }
    else
    {
        printf("Area(%0.2f) is not greater than its perimeter(%0.2f)\n",
               area, perimeter);
    }

    return 0;
}
