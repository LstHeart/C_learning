#include<stdio.h>

// 输入数量确定的[0-9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束
int main(){
    const int number = 10; // 数组大小
    int x;
    int count[number]; // 定义数组
    // int count[number]={0}; // 另一种初始化数组的办法
    int i;
    for( i=0;i<number;i++ ){
        count[i]=0;
    } // 初始化数组
    scanf("%d",&x); // 读入第一个整数
    while( x!= -1 ){
        if( x>=0 && x<=9 ){
            count[x]++;
            }
        scanf("%d",&x); // 再次读入整数
    }
    for( i=0; i<number;i++ ){
        printf("%d:%d\n",i,count[i]);
    }
    return 0;
}
