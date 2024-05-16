#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    int arr[a];
    for (b = 0; b < a; b++)
    {
        scanf("%d",&arr[b]);
       
    }
    int max = arr[0],min = arr[0];
    for (c = 0; c < a; c++)
    {
        if (max < arr[c])
        {
            max = arr[c];
        }
        if(min >arr[c])
        {
            min = arr[c];
        }
    }
    printf("%d %d",min,max);
}
