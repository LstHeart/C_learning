#include<stdio.h>
//阶乘计算结果会很大可能超过int类型的范围大小，因此最好使用双精度类型，格式化输出时不保留小数就可以相当于整型输出。

int main(){
    double factorial=1.0;
    int n;

    printf("please input a number:");
    scanf("%d",&n);
    
    if(n>=0){
        for(int i=1;i<=n;i++){
            factorial=factorial*i;
        }
    printf("%d的阶乘是%.0f\n",n,factorial);
    }else{
        printf("please input a vaild number.Goodbye!\n");
    }
    return 0;
}
