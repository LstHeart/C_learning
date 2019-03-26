#include<stdio.h>

int fun(int n){
    int i,j,k,m;
    m=n;
    k=0;
    for(i=1;i<4;i++){
        j=m%10;
        m=(m-j)/10;
        k=k+j*j*j;
    }
    if(k==n) return 1;
    else return 0;
}

int main(){
    int i;
    for(i=100;i<1000;i++){
        if(fun(i)==1) printf("%d is ok!\n",i);
    }
    return 0;
}
