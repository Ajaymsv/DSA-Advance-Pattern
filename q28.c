#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            if(i%2==0)
            {
                printf(" 0");
            }
            if(i%2==1)
            {
                printf(" %c",(char )(i+64));
            }
        
        }
        printf("\n");
    }
}

/*			OUTPUT


      A
     0 0
    C C C
   0 0 0 0
  E E E E E
  
  */