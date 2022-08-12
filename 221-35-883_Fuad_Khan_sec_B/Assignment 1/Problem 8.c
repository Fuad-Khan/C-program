#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,reverse;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	reverse = e*10000+d*1000+c*100+b*10+a;
	printf("\nReverse number %d", reverse);
	return 0;
}