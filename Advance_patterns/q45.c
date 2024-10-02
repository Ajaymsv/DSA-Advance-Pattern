#include<stdio.h>
void main()
{
    int k=0;
    int n=9;
    for(int i=1;i<=n;i++)
    {
        i<=5?k++:k--;
        for(int j=1;j<=k;j++)
        {
            if(i%2==0)
            {
                printf(" -");
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}

/*				output


				 *
				 - -
				 * * *
				 - - - -
				 * * * * *
				 - - - -
				 * * *
				 - -
				 *
 
 
 */