#include<stdio.h>
// 求两个数的最大公约数
// eg;输入 12 18
// 输出 6
//
int main(){

    // int a,b;
    // int gcd=-1;
    // printf("请输入两个数:(如12 18)\n");
    // scanf("%d %d",&a,&b);
    // // a=12,b=18;  
    // if(a>b){
    //     int temp=a;
    //     a=b;
    //     b=temp;
    // }
    // for(int i=1;i<=a;i++){
    //     int div=a%i;
    //     if(div==0){
    //         div=b%i;
    //         if(div==0) gcd=i;
    //     }
    //     // printf("div=%d,gcd=%d\n",div,gcd);
    // }
    // printf("最大公约数为:%d",gcd);
    // printf("\n");

// 辗转相除法
// 1.如果b等于0，计算结束，a就是最大公约数
// 2.否则，计算a除以b的余数，让a等于b，而b等于那个余数；
// 3.回到第一步
// 
// a    b   t
// 12   18  12
// 18   12  6
// 12   6   0
//  6   0   
//
 int a,b,t;

 scanf("%d %d",&a,&b);

 while( b!= 0 ){
     t=a%b;
     a=b;
     b=t;
 }

 printf("gcd=%d\n",a);

    return 0;
}
