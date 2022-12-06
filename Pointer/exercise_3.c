#include<stdio.h>
int main()
{
	int x=10,y=20,*ptr1,*ptr2,sum;
    ptr1=&x;
    ptr2=&y;
    
    sum= *ptr1 + *ptr2;
    
    printf("Sum=%d\n",sum);
    
    
    
    
    
    
    
	return 0;
}
