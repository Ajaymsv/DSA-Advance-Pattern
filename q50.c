#include<stdio.h>
void main()
    {
            for(int i=1;i<=5;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    if(j==3)
                    {
                        printf(" 1");
                    }
                    else if(i==3)
                    {
                        printf(" 0");
                    }
                    else
                    {
                        printf(" #");
                    }
                }
                printf("\n");
            }
    }
	
	
	/*		output
	
	
	
					 # # 1 # #
					 # # 1 # #
					 0 0 1 0 0
					 # # 1 # #
					 # # 1 # #



*/
