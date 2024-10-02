#include<stdio.h>
void  main()
{
    char c=65;
    for(int i=1;i<=9;i++)
    {
        for ( int j = 1; j <= 9; j++)
        {
            if(i==j&&i<=5||i+j==10&&i<=5)
            {
                printf(" %c",c);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        c++;
        
    }
}

/*		OUTPUT


 A        A
  B      B 
   C    C  
    D  D   
     E    
	 
	 
	 */