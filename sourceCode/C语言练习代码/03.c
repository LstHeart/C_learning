#include<stdio.h>
// 保留两位有效数字
int main(){
    double x;
    double y;
    printf("请输入您的用水量:");
    scanf("%lf",&x);
    if(x>=0){
        if(x<= 15.0){
            y=4*x/3.0;
        }else{
            y=2.5*x-10.5;
        }
    printf("您的水费是%.2f\n",y);
    }else{
        printf("请输入有效的用水量！\n");
    }
    return 0;
}
