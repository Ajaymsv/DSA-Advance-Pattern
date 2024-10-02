#include<stdio.h>

int main()
{
    int i, j, N, c;
    printf("Enter number of columns:");
    scanf("%d",&N);
    c=1;
    for(i=1;i<=N*2;i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("*");
        }
        if(i < N)
        {
             c++;
        }
        else
        {
         c--;
        }
        printf("\n");
    }
}


/* 		OUTPUT


						Enter number of columns:8
						*
						**
						***
						****
						*****
						******
						*******
						********
						*******
						******
						*****
						****
						***
						**
						*

*/