#include<stdio.h>

double fun(int m);

int main(){

    int m;
    printf("please input m=");
    scanf("%d",&m);
    
    double sum=fun(m);
    printf("%.6f\n",sum);

    return 0;
}

double fun(int m){
    
    double y=0.0;
    for(int i=0;i<=m;i++){
        y=y+1.0/(5+i);
    }
    return y;
}
