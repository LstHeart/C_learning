#include<stdio.h>
#include<stdlib.h>
int main(){

    int i,j,n,r;
    scanf("%d",&n);
    if(n==0){
        printf("data error \n");
        exit (0);
    }else if(n>0){
        printf("n=1");
    }else{
        printf("n=-1");
        n=-n;
    }
    for(i=2;i<=n;i++){
        r=n%i;
        while(r==0){
            printf("*%d",i);
            n=n/i;
            r=n%i;
        }
    }
    printf("\n");
    return 0;
}
