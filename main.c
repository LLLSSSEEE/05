#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num = 0; // ���� �̻��� ���� �� ������ �ȵǴ� �� 
    char c;
    printf("input a string : ");
    //scanf("%c", &a); getchar ���� �̰� �Ƚᵵ ��. 
    

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
