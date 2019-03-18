#include<stdio.h>

int main(){

    double x;
    int n;
    double result=1;

    printf("please input x=");
    scanf("%lf",&x);
    printf("please input a postive number,n=");
    scanf("%d",&n);
    // pow(x,n)
    for(int i=0;i<n;i++){
        result=result*x;
    }
    
    printf("%f的%d次方为%f\n",x,n,result);
    return 0;
}
