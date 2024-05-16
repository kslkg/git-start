#include <stdio.h>

int main()
{
    int num,max,count,point;
    max = 0;
    point = 1;
    
    for(int a=0;a<5;a++)
    {
        count =0;
        for(int b=0;b<4;b++)
        {
            scanf("%d",&num);
            count += num;
             if(max <count)
            {
                max =count;
                point = a + 1;
            }
            
        }
        
       
        
    }
    printf("%d %d",point,max);

    return 0;
}
