#include<stdio.h>
void main()
{
    int k=0;
    int i,j;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=5;j>=1;j--)
        {
            if(j>=k)
            {
                printf("*");
            }
            else if(i==j||i+j==10||i*j==i)
            {
                printf(" *");
            }
            
            for(j=5;j>=1;j--)
        {
            if(j>=k)
            {
                printf("*");
            }
            else 
            {
                printf("  ");
            }
        }
            
        }
        printf("\n");
    }
}

/*			OUTPUT


					* * * * * *
					* * * * *  
					* * * *    
					* * *      
					* *        
					* * *      
					* * * *    
					* * * * *  
					* * * * * *


*/