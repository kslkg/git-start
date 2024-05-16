#include <stdio.h>

int main()
{
    int b,c;
    int arr[8];
    int num;
    for (b = 0; b < 9; b++)
    {
        scanf("%d\n",&arr[b]);
       
    }
    
    int max = arr[0];
    
    for (c = 0; c <9; c++)
    {
        if (max < arr[c])
        {
            max = arr[c];
        }
        if(max == arr[c])
        {
           num = c;      
        }
    }
    printf("%d\n%d",max,num+1);
}
