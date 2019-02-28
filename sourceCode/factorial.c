// 阶乘计算
// 分析：变量用户输入的数x，保存结果s,自增变量i，
// 循环递增，初始为1，到x为止，即为1*2*3*4*.......*X
#include<stdio.h>

int main(){

    int x;
    int s = 1;
    
    printf("请输入你想要进行阶乘的数：");
    scanf("%d",&x);
    // x=10;
    for( int i = 1;i<=x;i++){
        s *= i;
    }

    printf("%d的阶乘的结果为: %d\n",x,s);

    return 0;
}
