#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
              if(j==5||i==9||i==2&&j>=4&&j<=6||i==3&&j>=3&&j<=7||i==4&&j>=4&&j<=6||i==5&&j>=3&&j<=7||i==6&&j>=2&&j<=8)
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
/*				OUTPUT


         *        
       * * *      
     * * * * *    
       * * *      
     * * * * *    
   * * * * * * *  
         *        
         *        
 * * * * * * * * *
 
 */