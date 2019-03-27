#include<stdio.h>
double fun(int n)
{
    double product=1.0;
    int i,m;
    m=n;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            product=product*i;
        }
    }
    return product;
}
int main(){
    int n=10;
    double product=1.0;
    product = fun(n);
    printf("%d,%4.0f\n",n,product);
    return 0;
}
