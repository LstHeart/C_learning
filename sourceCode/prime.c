#include<stdio.h>
//判断用户输入的数是否为素数【只能被1和自己整除】
//分析：用户输入变量x,取余数r，判断是否为0，除数从x-1到2

int main(){

    int x;
    int r = 1;
    printf("请输入想要检查的整数:");
    scanf("%d",&x);
    // for( int i=2;i < x && r != 0;i++){
    // r = x%i;}
        for(int i=2;i<x;i++){
            if(x%i==0){
                r=0;
                break;
            }
        // printf("r=%d\n",r);
    }

    if( r == 1 ){
        printf("%d是素数！\n",x);
    }else{
        printf("%d不是素数！\n",x);
    }


    return 0;
}
