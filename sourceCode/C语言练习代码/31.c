#include<stdio.h>

int main(){

    int n,flag=0;
    long int sum=0;

    for(n=500;n>12&&flag<10;n--)
        if(n%13==0||n%17==0){
            sum+=n;
            flag++;
            // printf("n=%3d,flag=%3d,sum=%3ld\n",n,flag,sum);
        }

    printf("sum=%ld\n",sum);
    return 0;
}
