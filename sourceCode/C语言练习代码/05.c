#include<stdio.h>
// 摄氏温度 C=(5/9)(F-32)
int main(){
    int lower;
    int upper;
    double F;
    double C;
    
    printf("请输入摄氏温度的下限值:");
    scanf("%d",&lower);
    printf("请输入摄氏温度的上限值:");
    scanf("%d",&upper);
    
    F=lower;
    printf("华氏度 摄氏度\n");
    for(int i=lower;i<=upper;i++){
        C=(5/9.0)*(F-32);
        printf("%.1f %.1f\t",F,C);
        printf("\n");
        F++;
    }
    return 0;
}
