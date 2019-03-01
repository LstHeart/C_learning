#include<stdio.h>

int main(){

    int a;
    a=6;

    printf("sizeof(int)=%d\n",sizeof(int));
    printf("sizeof(double)=%d\n",sizeof(double));
    printf("sizeof(a)=%d\n",sizeof(a));
    printf("a=%d\n",a);
    printf("sizeof(a++)=%d\n",sizeof(a++));
    printf("a now=%d\n",a);

    return 0;
}
