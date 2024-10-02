#include<stdio.h>
void main()
{
    int n;
    printf("enter numbers\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i+j==n+1)
            {
                printf(" 7");
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

enter numbers
10
 7 7 7 7 7 7 7 7 7 7
                 7  
               7    
             7      
           7        
         7          
       7            
     7              
   7                
 7        
 
 */