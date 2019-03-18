#include<stdio.h>
#include<math.h>
// 需要导入数学库
int main(){
    double money;
    int year;
    double rate;
    double sum;

    printf("请输入存款金额:");
    scanf("%lf",&money);
    printf("请输入存期:");
    scanf("%d",&year);
    printf("请以小数形式输入年利率:");
    scanf("%lf",&rate);

    sum = money*pow((1+rate),year);
    printf("您的税前本息和为%.2f\n",sum);
    return 0;
}
