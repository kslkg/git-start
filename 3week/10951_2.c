#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) == 2 )//scanf 가 %d %d 값에 아무 숫자를 넣어도 2가되는데 그외 문자를 첫번째%d에 문자를 넣으면0 두번째%d에 문자를 넣으면 1이 출력되서 끝남. 
    {
        
        printf("%d\n",a+b);
    }

    return 0;
}
