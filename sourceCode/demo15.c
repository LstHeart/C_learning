
#include<stdio.h>

int main(){

    float a,b;

    a=1.2f;
    b=1.1f;
float temp=a+b;
    printf("a+b=%f",a+b);
    
    if(temp==2.3){
        printf("相等！\n");
    }
    else{
        printf("不相等！\n");
    }
    return 0;
}
