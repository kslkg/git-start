#include <stdio.h>

int main()
{
   int a,b;
   int c;
   c=0;
   scanf("%d",&a);
   for(b=1; b <= a; b++)
   {
       c=c+b;
   }
   printf("%d\n",c);

    return 0;
}
