#include<stdio.h>
/* 在C语言中，我们一般使用 <stdlib.h> 头文件中的 rand() 函数来生成随机数，它的用法为
 * int rand (void); 
 * int a = rand() % 10;    //产生0~9的随机数，注意10会被整除
 * int a = rand() % 51 + 13;    //产生13~63的随机数
*/
#include<stdlib.h>
int main(){
    int n;

    printf(" please input a postive number between 0 to 100! The number is:");
    scanf("%d",&n);
    int r = rand()%101;
    if(n<0 || n>100){
        printf("error!please input a vaild number!\n");
    }else if(n == r){
            printf("Good job!You are right!\n");
        }else{
            printf("Sorry!You are wrong!\n");
            if(n<r){ 
                printf("your guess is lower than the number!\n");
            }else{
                printf("your guess is biger than the number!\n");
            }
        }
    return 0;
}
