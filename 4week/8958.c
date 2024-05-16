#include <stdio.h>
#include <string.h>

int main(){
    
    char s[80];
    int a;
    int score, sum;
    
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        score = 0;
        sum = 1;
        scanf("%s",s);
        for(int j =0 ; j<strlen(s) ; j++)
        {
            if(s[j] =='O')
            {
                score += sum;
                sum++;
            }
            else if(s[j] == 'X')
            {
                sum = 1;
            }
            
        }
        printf("%d\n",score);
    }
    
}
