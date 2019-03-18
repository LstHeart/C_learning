#include<stdio.h>

int main(){

    int n;

    printf("please input a postive number!n=");
    scanf("%d",&n);

    if(n%2){
        printf("%d is a odd number\n",n);
    }else{
        printf("%d is a even number\n",n);
    }
    return 0;
}
