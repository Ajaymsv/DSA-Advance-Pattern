#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=9;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
 for(int x=9;x>=1;x--)
     {
         for(int y=1;y<=x;y++)
         {
             printf(" *");
         }
    
         printf("\n");
     } }



    }
	
	
	/*				OUTPUT
	
											
												 * * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
												** * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
											   *** * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
											  **** * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
											 ***** * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
											****** * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
										   ******* * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
										  ******** * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
										 ********* * * * * * * * * *
										 * * * * * * * *
										 * * * * * * *
										 * * * * * *
										 * * * * *
										 * * * *
										 * * *
										 * *
										 *
*/