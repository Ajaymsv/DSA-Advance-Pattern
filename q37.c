#include<stdio.h>
void main()
{
    int n=9;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==5||j-i==4||i+j==14)
            {
                printf(" *");
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

		 *        
           *      
             *    
               *  
 * * * * * * * * *
               *  
             *    
           *      
         *       
		 
		  
		  
*/