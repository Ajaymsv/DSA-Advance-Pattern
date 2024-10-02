#include<stdio.h>
void main()
{
    int n=7;
    for(int i=1;i<=n;i++)
    {
          for(int j=1;j<=n;j++)
          {
              if(i==j||i+j==8)
              {
                  printf(" 1");
              }
              else
              {
                  printf(" 0");
              }
          }
          printf("\n");
    }
}

/*		OUTPUT

 1 0 0 0 0 0 1
 0 1 0 0 0 1 0
 0 0 1 0 1 0 0
 0 0 0 1 0 0 0
 0 0 1 0 1 0 0
 0 1 0 0 0 1 0
 1 0 0 0 0 0 1
 
 */