// 做任意整数的逆序

#include<stdio.h>

int main(){

    int x;
    scanf("%d",&x);

    // x = 123456789;
    int ret = 0;
    int digit;


    while( x > 0 ){

    digit = x%10;
    ret = ret*10 + digit;
    printf("%d\n",ret);
    // printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
    x /= 10;
    }
    return 0;
}
