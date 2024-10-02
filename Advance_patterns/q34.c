#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf(" %c",(char)(j+64));
            }
            else
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
}
/*	OUTPUT

 1
 A B
 1 2 3
 A B C D
 1 2 3 4 5


*/