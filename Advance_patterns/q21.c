#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1)
            {
                printf(" %d",j);
            }
            else if(j==1)
            {
                printf(" %d",i);
            }
            else if(i+j==6)
            {
                printf(" 5");
            }
            else
            {
                printf("  ");
            }
        
        }
        printf("\n");
    }
}


/*			OUTPUT


 1 2 3 4 5
 2     5  
 3   5    
 4 5      
 5     
 
 */