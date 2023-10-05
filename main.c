#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    printf("input a integer : ");
    scanf("%d", &a);
    
    if (a>0)
    {
         printf("absolute value is %d.\n", a);
    }
    else if (a<0)
    {
         printf("absolute value is %d.\n", -a);
    }
    else
    {
         printf("absolute value is %d.\n", a);
    } 
       
  
  system("PAUSE");	
  return 0;
}
