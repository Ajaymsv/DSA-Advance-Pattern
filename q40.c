#include<stdio.h>
void main()
{
    int n=9;
    //printf("enter number\n");
    //scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==n||i==j&&i<=n/2||i+j==n+1&&i<=n/2||i==n/2+1&&j==n/2+1)
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

/*				output


 *               *
 * *           * *
 *   *       *   *
 *     *   *     *
 *       *       *
 *               *
 *               *
 *               *
 *               *
 
 */