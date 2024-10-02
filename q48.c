#include<stdio.h>
void main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf(" %c",(char)(k+64));
            k++;
        }
        printf("\n");
    }
}

/*				output


 A B C D
 E F G H
 I J K L
 M N O P


*/