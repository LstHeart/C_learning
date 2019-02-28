#include<stdio.h>
// 凑钱数,用1角，2角，5角凑出任意金额[1,2,5都得用]

int main(){

    int x;
    int one,two,five;
    // int mark=0;

    printf("您想要凑成的金额:");
    scanf("%d",&x);

    for(five=1;five<=10*x/5;five++){
    for(two =1;two<=10*x/2;two++){
        for( one=1;one<=10*x;one++){
            if(one*1+two*2+five*5==10*x){
            printf("%d元可以由:%d个1角，%d个2角，%d个5角凑出\n",x,one,two,five);
            // mark= 1;
            // break;//跳出循环
            goto out;//使用goto跳出循环
            }
            // if(mark==1) break;
        }
        // if(mark==1) break;
    }
        // if(mark==1) break;
    }
out:
    return 0;
}
