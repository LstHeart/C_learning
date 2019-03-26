#include<stdio.h>

long fun(int n){
    long s;
    int m;
    m=n;
    s=0;
    for(int i=2;i<=m;i+=2){
        s=s+i*i;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    long s=fun(n);
    printf("s=%ld\n",s);
    return 0;
}
