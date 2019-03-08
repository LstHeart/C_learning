#include<stdio.h>

 // 计算用户输入的数字的平均数，并输出所有大于平均数的数
int main(){
    int x;
    double sum=0;
    int cnt=0;
    int number[100];
 // 读入数组
    scanf("%d",&x);
    while( x != -1 ){
        number[cnt] = x;
{
    int i;
    printf("%d\t",cnt);
    for( i=0;i<=cnt;i++ ){
        printf("%d\t",number[i]);
    }
    printf("\n");
}
        sum += x;
        cnt ++;
        scanf("%d",&x);

    }
    if( cnt > 0 ){
        printf("%f\n",sum/cnt);
        int i;
 // 遍历数组输出
        for( i=0; i<cnt; i++ ){
            if(number[i] > sum/cnt){
                printf("%d\n",number[i]);
            }
        }
    }
    return 0;
}
