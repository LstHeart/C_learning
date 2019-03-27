#include<stdio.h>
int fun(int a[],int n){
    int i,j,t;
    for(j=0;j<n;j++)
        for(i=0;i<n-1-j;i++)
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }            
}
int main(){

    int i;
    int a[10]={3,7,5,1,2,8,6,4,10,9};
    fun(a,10);
    for(i=0;i<10;i++)
        printf("%3d",a[i]);
        printf("\n");

    return 0;
}
