#include<stdio.h>

void sum(int a,int b,int c){
	
     int sum=a+b+c; 
     
     printf("Sum=%d\n",sum);
	
	
}
void substraction(int a,int b)
{
	int sub=a-b;
	printf("Substraction=%d",sub);
	
	
}


int main(){
	
	
	sum(10,20,30);
	substraction(30,10);
	
	return 0;
	
}
