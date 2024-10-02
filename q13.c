#include<stdio.h>
int main()
{
  char str[20];
  printf("Enter a string: ");
  scanf("%s",&str);
  for(int i=0; i<=str[i]; i++)
  {
    for(int j=0; j<=i; j++)
    {
      printf(" %c", str[j]); 
    }
    printf("\n"); 
  }
}



/* 			OUTPUT


 Enter a string: AJAY
 A
 A J
 A J A
 A J A Y


*/