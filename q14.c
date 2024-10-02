#include<stdio.h>
void main()
{
    int n=9;
    int m=n/2+1; //5
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n||j==m||j==m+1||i+j==m-1||i+j==m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
        
            }
        }
        printf("\n");
}
}

/*			OUTPUT


****   
 ** **   
**  **   
*   **   
    **   
    **   
    **   
    **   
*********

*/