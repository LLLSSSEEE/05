#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 32;
    int a;
    int trial = 0; // 숫자 세는 거는 0으로 초기 
    
    do
    {
        //1. input
        printf("Guess a number :");
        scanf("%d", &a);
        
        //2. decision(low/high)
        if(a > answer)
        {
            printf("High!\n");
        }
        else if(a < answer)
        {
            printf("Low!\n");
        }
        else
        {
            
        }
        trial = trial + 1; 
        
     }
     
     while(a != answer); //3. loop condition : answer is equal to num??
     
     printf("Congratulation! Trial : %d\n", trial); 
  
  system("PAUSE");	
  return 0;
}
