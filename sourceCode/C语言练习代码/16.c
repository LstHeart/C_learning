#include<stdio.h>
#define N 10
int main(){
    
    int i,j,k,t;
    int a[N];
    for(i=0;i<=N-1;i++)
        scanf("%d",&a[i]);
 
    for(i=0;i<N-1;i++){
        k=i;
        for(j=i+1;j<N;j++)
            if(a[j]<a[k])
                k=j;
        if(i!=k){
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    printf("output the sorted array:\n");
    for(i=0;i<N;i++){
        printf("%5d",a[i]);
        printf("\n");
    }
    return 0;
}
