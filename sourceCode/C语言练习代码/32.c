#include<stdio.h>


int main(){
    int a[7][7];
    int j,i;
    for(i=0;i<7;i++){
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=2;i<7;i++)
        for(j=1;j<i;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<7;i++){
        for(j=0;j<=i;j++)
            printf("%6d",a[i][j]);
        printf("\n");
    }
    return 0;
}
