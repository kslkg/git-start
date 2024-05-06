#include <stdio.h>

int main()
{
   int a,b;
   int num1,num2;
   scanf("%d",&a);
   for(b=0; b < a; b++)
   {
       scanf("%d %d",&num1,&num2);
       printf("%d\n",num1+num2);
   }

    return 0;
}
