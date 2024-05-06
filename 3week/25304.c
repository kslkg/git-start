#include <stdio.h>

int main()
{
   int a,b;
   int All_cost,cost;
   int num1,num2;
   cost=0;
   scanf("%d",&All_cost);
   scanf("%d",&a);
   for(b=1; b <= a; b++)
   {
       scanf("%d %d",&num1,&num2);
       cost=cost+num1*num2;
   }
   if (cost == All_cost){
       printf("Yes\n");
   }
   else{
       printf("No\n");
   }

    return 0;
}
