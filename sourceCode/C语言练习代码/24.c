#include<stdio.h>

int main(){

    long int f,s;
    int i,j,n;
    
    s=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        f=1;
        for(j=1;j<=2*i-1;j++)
            f*=j;
        s=s+f;
    }

    printf("n=%d,s=%ld\n",n,s);
    return 0;
}
