#include<stdio.h>
#define N 20
int main(){
    
    int n=N;
    int f[N]={0}; // 变长数组，不能在定义时直接初始化？这个地方我做的时候会出错
    int i=0;
    int sum=0;
    for(i;i<n;i++)
    {
        if(i<=1){
            f[i]=1;
        }else{
            f[i]=f[i-1]+f[i-2];
        }
        sum+=f[i];
    }

    printf("斐波那契数列的前%d项和为%d\n",n,sum);

    return 0;
}
