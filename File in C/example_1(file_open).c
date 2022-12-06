#include<stdio.h>
int main()
{
	
	FILE *file;
	
	file=fopen("MK.txt","w");
	
	if(file==NULL){
		
		printf("File doesn't exist");
	}
	else{
		
		printf("File is open");
	}
	
	
	
	return 0;
	
}
