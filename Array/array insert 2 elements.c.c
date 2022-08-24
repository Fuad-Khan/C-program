#include<stdio.h>

int main(){

    
    int size,i;
    
    printf("Enter array length - ");
    scanf("%d",&size);
    
    int array[size];

    printf("Enter array elements : \n");
    for(i=0; i<size; i++){
        scanf("%d",&array[i]);
    }    

    int el_no; //el_no means elemnet no which user should input
    printf("How many element you want to insert - ");
    scanf("%d",&el_no);

    int element[el_no];

    printf("Element value - ");
    for(i=0; i<el_no;i++){
     scanf("%d",&element[i]);  
    }
    int index[el_no];

    printf("Index no - ");
    for(i=0; i<el_no;i++){
    scanf("%d",&index);   
    }

    for(i=0; i<el_no;i++){
        for(i=index[i]; i< size+el_no;i++){
            array[i+1]=array[i];
        }
    }
    for(i=0; i<el_no; i++){
        array[index[i]]=element[i];
    }
    for(i=0; i<size+el_no; i++){
        printf("%d\t",array[i]);
    }
    return 0;
}