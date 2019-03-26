#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[5][5],b[5],c[5],i,j,k,s=0;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            a[i][j]=rand()%10+20;
    for(i=0;i<5;i++){
        k=a[i][0];
        s=0;
        for(j=0;j<5;j++){
            if(k<a[i][j])
                k=a[i][j];
            s=s+a[i][j];
        }
        b[i]=k;
        c[i]=s;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%5d",a[i][j]);
        printf("%5d%5d",b[i],c[i]);
        printf("\n");
    }
    return 0;
}
