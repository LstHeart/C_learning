#include<stdio.h>

float fun(int m){
    float y=0.0f;
    if(m<0){
        printf("输入的数不符合规范！");
        return -1;
    }else{
        for(int i=0;i<=m;i++){
            y+=1.0/(2*i+1);
        }
        return y;

    }
}
int main(){
    
    int m=9;

    float y=fun(m);
    printf("%f\n",y);
    return 0;
}
