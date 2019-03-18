#include<stdio.h>
#include<math.h>

int main(){

    int n;

    printf("please input a postive number,n=");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        double power=pow(2,i);
        printf("2的%d次方\t %.0f\n",i,power);
    }
    printf("\n");
    return 0;
}
