#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,sum;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
    sum = a+b+c+d+e;
	printf("12345the sum of the digits is %d.", sum);
	getch();
	return 0;
}