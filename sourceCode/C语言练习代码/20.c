#include<stdio.h>
#define N 100
int main(){

    double sum=0.0;
    
    for(int i=1;i<=N;i++){
        if(i%2){
            sum=sum+i*i;
        }
    }
    printf("sum=%3.0f\n",sum);
    return 0;
}
