// Name: Fuad Khan
// ID: 221-35-883
#include<stdio.h>
void main()
{
	float bill,units;

	printf("Enter Customer Units : ");
	scanf("%f",&units);

	if(units <= 200)
		bill = 0.50 * units;
	else if(units >= 201 && units <= 400)
		bill = 100 + 0.65 * (units - 200);
	else if(units >= 401 && units <= 600)
		bill = 230 + 0.85 * (units - 400);
	else
		bill = 390 + 1.00 * (units - 600);
	printf("\n Units consumed  = %.2f",units);
	printf("\n Bill = %.2f",bill);
	getch();
}
