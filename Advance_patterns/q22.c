#include<stdio.h>
void main()
{
    int k=9;
    int x=k;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf(" ");
        }
        for( int k=1;k<=i;k++)
        {
            if(k%2==1)
            printf("%d",x);
        }
        printf("\n");
        k--;
        x=k;
    }
}


/* 		OUTPUT
 
     9
    8
   77
  66
 555
 
 */