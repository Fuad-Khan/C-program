    #include<stdio.h>
      
    int main()  
    {  
        int cp, sp;  
      
        printf("Enter the cost price of the product\n");  
        scanf("%d", &cp);  
      
        printf("Enter the selling price of the product\n");  
        scanf("%d", &sp);  
      
        if(sp > cp)  
        {  
            printf("Your profit is %d\n", (sp-cp));  
        }  
        else if(cp > sp)  
        {  
            printf("Loss Incurred is %d\n", (cp-sp));  
        }  
        else  
        {  
            printf("Neither profit, nor loss\n");  
        }  
      
        return 0;  
    }  