#include<stdio.h>
void main()
{
    int n=9;
    for( int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==5||i+j==6||i-j==4)
            {
                printf(" *");

            }
            else
            {
                printf(" ");

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