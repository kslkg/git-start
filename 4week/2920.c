#include <stdio.h>

int main()
{
    int arr[8] = {0};
    int check;
    for(int a = 0 ; a<8 ; a++)
    {
        scanf("%d",&arr[a]);
    }
    //1~8로 올라가는수
    if(arr[0] == 1)
    {
        for(int i=0; i<8;i++)
        {
            if(arr[i] == i+1)
            {
                check = 1;
            }
            else
            {
                check = 0;
                break;
            }
        }
    }
    //8~1로 가는수
    if(arr[0] == 8)
    {
        for(int i=0; i<8;i++)
        {
            if(arr[i] == 8-i)
            {
                check = 2;
            }
            else
            {
                check = 0;
                break;
            }
        }
    }
    if(check == 1) { printf("ascending");}
    else if(check == 2) { printf("descending");}
    else { printf("mixed");}
    return 0;
}
