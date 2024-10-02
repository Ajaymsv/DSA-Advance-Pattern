#include<stdio.h>
void  main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %c",(char)(j+64));
        }
        printf("\n");
    }
}

/*			OUTPUT


 A
 A B
 A B C
 A B C D
 A B C D E


*/