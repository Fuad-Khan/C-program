#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter a four digit number : ");
	scanf("%d", &num);
	d=num%10;
	c=(num/10)%10;
	b=(num/100)%10;
	a=(num/1000)%10;
	printf("\n%d is the of first and last digit of %d", a+d,num);
	return 0;
}