#include <stdio.h>

int main()
{
   int youn;
   scanf("%d",&youn);
   
   // ||는 or (둘중 하나만 맞으면 T) &&는 and(둘다 T여야 T)
   
   if((youn % 400 == 0) || (youn % 4 ==0 && youn % 100 !=0))
   {
      printf("1");
       
   } 
   else{
       printf("0");
   }
}  

