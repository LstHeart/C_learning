/*
 * @Author: lstheart
 * @LastEditors: lstheart
 * @Description: file content
 * @Date: 2019-03-01 06:32:40
 * @LastEditTime: 2019-03-01 06:35:24
 */
#include<stdio.h>
// 函数求和，带分数,一正一负
int main(){

    double sum=0.0;
    int n;
    double mark=1.0;

    printf("请输入n的值:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=mark/i;
        mark=-mark;
        // printf("sum now is %f\n",sum);
    }

    printf("sum of %d is %f\n",n,sum);
    return 0;
}
