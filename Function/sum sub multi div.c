#include<stdio.h>

int add(int a,int b){

	int c=a+b;

	

	return c;

	

}

int sub(int a,int b){

	int c=a-b;

	

	return c;

	

}

int mul(int a,int b){

	int c=a*b;

	

	return c;

	

}

int division(int a,int b)

{

	int c=a/b;

	

	return c;

	

	

}


int main()

{

	int addition=add(10,8);

	int substraction=sub(10,8);

	int multipication=mul(10,8);

	int div=division(10,8);

	

	printf("Addition=%d\n",addition);

	printf("Substraction=%d\n",substraction);

	printf("Multipication=%d\n",multipication);

	printf("Division=%d\n",div);

	

	return 0;

}