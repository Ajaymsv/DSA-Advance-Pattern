#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
             printf(" ");
        }
          for(int k=1;k<=i;k++)
          {
              if(i==5||k==1||i==k)
              {
              printf(" %d",k);
              }
              else
              {
                  printf("  ");
              }
          }
          printf("\n");
    }
}

/*	OUTPUT

	  1
     1 2
    1   3
   1     4
  1 2 3 4 5
  
  
  */