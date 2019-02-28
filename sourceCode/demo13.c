#include<stdio.h>
// 猜数的游戏
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    int a = rand()%100+1; // a is a number between 1 and 100.
    int x; // input number
    int count = 0;//计数
    do{
        printf("请输入1-100以内的正整数：");
        scanf("%d",&x);
        count++;
        if( x > a ){
            printf("您猜的数太大了,请再来一次\n");
        }else if( x < a ){
            printf("您猜的数太小了，请再来一次\n");
        }
    }while( x != a );
    
    if( x == a ){
        printf("恭喜您猜对了！您一共猜了%d次\n",count);
    }
    //printf("%d\n",a);
    return 0;
}
