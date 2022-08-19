#include<stdio.h>
int main()
{
    int i,n,a[100],position=2,newvalue=9;
printf("enter a value");
scanf("%d",&n);

    printf("enter some num");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=position;i--){

        a[i+1]=a[i];
    }
    a[position]=newvalue;
 for(i=0;i<n;i++)
        printf("a[%d]=%d\n",i, a[i]);
}
