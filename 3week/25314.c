#include <stdio.h>

int main()
{
   int N;
   scanf("%d",&N);
   
   int num1 =N/4;//4의 배수일때long 을 출력해야해서 횟수 를 알기위한 식
   
   for (int i=0;i<num1;i++)
   {
       printf("long ");
   }
   printf("int");

    return 0;
}   
