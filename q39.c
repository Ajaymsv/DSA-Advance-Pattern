#include<stdio.h>
void main()
{
    int n=7;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i+j==8)
            {
                printf(" 0");
            }
            else if(i==1||j==1||j==n||i==n)
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

/*			OUTPUT

 0 1 1 1 1 1 0
 1 0 0 0 0 0 1
 1 0 0 0 0 0 1
 1 0 0 0 0 0 1
 1 0 0 0 0 0 1
 1 0 0 0 0 0 1
 0 1 1 1 1 1 0



*/