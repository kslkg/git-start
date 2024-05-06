#include <stdio.h>

int main()
{
    int a,b,c,d;
    
    scanf("%d",&a);
    int num1 = a-1;
    for(b=0;b<a;b++)
    {
        
        for(c = num1; c > b ; c--)
        {
            printf(" ");
        }
        for(d = 0;d <= b; d++ )
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
