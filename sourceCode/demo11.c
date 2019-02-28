/*
 * @Author: lstheart
 * @LastEditors: lstheart
 * @Description: file content
 * @Date: 2019-02-28 16:45:30
 * @LastEditTime: 2019-02-28 16:55:50
 */
#include<stdio.h>
// log2x的计算
int main(){

    int x; // 输入变量
    int n=0; // 计数变量
    printf("请输入您想计算的数:");

    scanf("%d",&x);
    //x=64;
    int temp=x;
    while( x > 1){
        x/=2;
        n++;
    }
    
    printf("log2 of %d ,the result is %d \n",temp,n);
    
return 0;
}
