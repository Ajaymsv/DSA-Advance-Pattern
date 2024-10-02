#include<stdio.h>
void main()
{
    int n=6;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j==7||i==6)
            {
                printf(" !");
            }
            else
            {
                printf(" @");
            }
        }
        printf("\n");
    }
}


/*			OUTPUT


 @ @ @ @ @ !
 @ @ @ @ ! @
 @ @ @ ! @ @
 @ @ ! @ @ @
 @ ! @ @ @ @
 ! ! ! ! ! !
 
 
 */