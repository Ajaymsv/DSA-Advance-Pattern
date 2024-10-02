#include<stdio.h>
void main()
{
    int k=0;
    int i,j;
    for(int i=1;i<=11;i++)
    {
      i<=6?k++:k--;
        for(int j=1;j<=k;j++)
        { 
            printf(" *");
        }
        printf("\n");
    }
}

/*		OUTPUT


 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 
 */