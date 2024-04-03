#include <stdio.h>
int main(void){
   
    int a,b,c;
    
    scanf("%d %d %d",&a ,&b ,&c );
   if(a - b==0 && b-c==0)//a,b,c 가 모두 같은 수일때 
   {
    printf("%d",10000+b*1000);
   }
   else if(a - b==0 || b-c==0 ){
       printf("%d",1000+b*100);//둘중 하나만 다른경우
       
    }
    else if(a == c){
        printf("%d",1000+a*100);
    }
   else{
       if(a>b && a>c){
           printf("%d",a*100);
       }
       else if(b>a && b>c){
           printf("%d",b*100);
       }
       else if(c>a && c>b){
           printf("%d",c*100);
       }
   }
    
   

    return 0;
}
