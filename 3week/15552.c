#include <stdio.h>

int main()
{
    int i,j;
    int num1,num2;
    
    scanf("%d",&j); //반복횟수
    
    for (i = 0; i < j; i++)
    {
     scanf("%d %d",&num1,&num2);//입력받을 값
     printf("%d\n",num1+num2);//출력값
    }
    return 0;
}
