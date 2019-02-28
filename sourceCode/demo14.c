#include<stdio.h>

// 求输入数的个数以及平均数，以-1表示输入结束

int main(){
    int number;
    int sum = 0;
    int count = 0;
    printf("请输入一个数之后进行回车\n");
    scanf("%d",&number);
    while( number != -1 ){
        sum += number;
        count ++;
        scanf("%d",&number);
    }

    printf("%f\n",1.0*sum/count);

    return 0;
}
