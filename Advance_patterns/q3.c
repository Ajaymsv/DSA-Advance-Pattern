#include<stdio.h>
void main()
{
    int k=0;
    char c='A';
    int i,j;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=5;j>0;j--)
        {
            if(j>k)
            {
                printf(" ");
            }
            else if(i==j||i+j==10||i*j==i)
            {
                printf(" %c",c);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        c++;
    }
}

/*		OUTPUT



	 A
    B B
   C   C
  D     D
 E       E
  F     F
   G   G
    H H
     I
	 
	 
	 */