#include<stdio.h>

int fun( int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]>max) max=a[i];
        }
    }
    return max;
}
int main(){
    int max=0;
    int a[]={1,4,2,6,4,7,10,12,999,100};
    int n=sizeof(a)/sizeof(a[0]);
    // printf("%d\n",n);
    max=fun(a,n);
    printf("max=%d\n",max);
    return 0;
}
