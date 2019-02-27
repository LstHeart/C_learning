#include<stdio.h>
#include<math.h>

int main(){

double x,s;
printf("input number:\n");
scanf("%lf",&x);
s = sin(x);
//printf("s is: %lf \n",s);
//printf("x is: %lf \n",x);
printf("sin of %lf is %lf\n",x,s);
return 0;
}
