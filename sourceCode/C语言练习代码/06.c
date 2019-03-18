#include<stdio.h>

int main(){
    int n;
    int m=1;
    double flag=1.0;
    double sum=0.0;

    printf("请输入正整数n:");
    scanf("%d",&n);
    if(n<=0){
        printf("您的输入有误，程序退出！\n");
    }else{
        for(int i=0;i<n;i++){
            sum=sum + flag*1/m;
            m=m+2;
            flag=-flag;
        }
        printf("表达式的前%d项和为%.2f\n",n,sum);
        }    

    return 0;
}
