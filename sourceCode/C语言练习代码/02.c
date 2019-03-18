#include<stdio.h>
// C =(5/9)(F-32)
int main(){
    const double F = 100.0;
    double C;
    C=(5.0/9)*(F-32);
    printf("华氏温度%.2f对应的摄氏温度为%.2f\n",F,C);
    return 0;
}
