#include<stdio.h>

double fact(int n);

int main(){

    int n;
    double facts;

    printf("please input a postive number,n=");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        facts=fact(i);
        printf("%d!=\t%.0f\n",i,facts);
    }
    return 0;
}

double fact(int n){
    double fact=1;
    if(n>=0){
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
    return fact;
    }else{
        printf("error!please input a vaild key");
    }
}
