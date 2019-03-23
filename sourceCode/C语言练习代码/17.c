#include<stdio.h>

double fun(int n);
int main(){
    
    int n;
    printf("please input n=");
    scanf("%d",&n);

    double sum=fun(n);
    printf("sum=%3.0f\n",sum);
    return 0;
}

// double fun(int n){

//     double sum=0.0;
//     double fac=1.0;
//     if(n==1) {
//         return 1;
//     }else{
//         for(int i=1;i<=n;i++){
//             fac*=i;
//         }
//         sum+=fac;
//         return sum+fun(n-1);
//     }
// }
double fun(int n){
    double sum=0.0;
    for(int i=1;i<=n;i++){
        double fac=1.0;
        for(int j=1;j<=i;j++){
            fac*=j;
        }
        sum+=fac;
    }
    return sum;
}

