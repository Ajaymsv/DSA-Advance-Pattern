#include<stdio.h>
void main()
	{
	  int i,j,k=0;
	  
	  for(i=1;i<=9;i++)
	  {
		  i<=5?k++:k--;
		  for(j=5;j>0;j--)
		  {
           if(j>k)
		  {
		        printf(" ");
		  }  
		  else 
          if(i==j||i+j==10||i*j==i)
		printf(" *");
	else
		printf("  ");
		  } 
	 printf("\n");
      }		 
		  
	  }
	  
	  /*			output
	  
	  
	  
	  
	 *
    * *
   *   *
  *     *
 *       *
  *     *
   *   *
    * *
     *
	 
	 
	 
	 */