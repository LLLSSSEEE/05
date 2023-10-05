#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    printf("input a integer : ");
    scanf("%d", &a);
    
    if (a>0)
    {
          printf("positive.\n");
    }
    else if (a==0)
    {
         printf("zero.\n");
    }
    else
    {
        printf("negative.\n");
    }
       
  
  system("PAUSE");	
  return 0;
}
