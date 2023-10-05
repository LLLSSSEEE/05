#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num = 0; // 괜히 이상한 숫자 들어가 있으면 안되니 까 
    char c;
    printf("input a string : ");
    //scanf("%c", &a); getchar 쓰면 이거 안써도 됨. 
    

    while ((c=getchar())!='\n')
    {
          if((c>='0') && (c<='9'))
          {
              num++; // num = num + 1
          }
    }
              
          
    printf("the number of digits is %i\n.", num); 
  
  system("PAUSE");	
  return 0;
}
