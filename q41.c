#include<stdio.h>
void main()
{
    int n=9;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==5||i==5||i==j&&i<=3||i+j==10&&i<=3||i+j==10&&j<=3||i==j&&j>=7)
            {
                printf("*");
            }
            else
            {
                printf(" "); 
            }
        }
        printf("\n");
    }
}

/*			output


*   *   *
 *  *  * 
  * * *  
    *    
*********
    *    
  * * *  
 *  *  * 
*   *   *

*/