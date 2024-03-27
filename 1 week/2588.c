#include <stdio.h>

int main()
{
    int num1,num2;
    int a,b,c;
    scanf("%d %d",&num1,&num2);
    a = ((num2 % 10) * num1);//1의 자리
    b = (((num2 % 100)/10 ) * num1);//10의 자리
    c = ((num2 / 100) * num1);//100의 자리
    printf("%d \n",a);
    printf("%d \n",b);
    printf("%d \n",c);
    printf("%d \n",num1*num2);
    return 0 ;
}
