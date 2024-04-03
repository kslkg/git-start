#include <stdio.h>

int main(){
    
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if (c>=60 && c<=1000){
        int H=c/60;
        int M=c%60;
        a=a+H;
        b=b+M;
        
    }
    else if(c<59){
        b=b+c;
    }
    
    if (b > 59){
        int c_M = b/60;
        a=a+c_M;
        b = b%60;
        
    }
    
    if (a > 23){
         int c_H =a % 24;
         a = c_H;
    }
    printf("%d %d",a,b);
