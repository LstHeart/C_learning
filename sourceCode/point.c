#include<stdio.h>

int main(){

    int i=1;
    int *p=&i;

    printf("int i=1;\nint *p=&i;\n");
    printf("i以%%d方式输出,i=%d\n",i);
    printf("i以%%p方式输出,i=%p\n",i);
    printf("&i以%%p方式输出,&i=%p\n",&i);
    printf("&i以%%d方式输出,&i=%d\n",&i);
    printf("p以%%p方式输出,p=%p\n",p);
    printf("p以%%d方式输出,p=%d\n",p);
    printf("*p以%%p方式输出,*p=%p\n",*p);
    printf("*p以%%d方式输出,*p=%d\n",*p);
    printf("&*p以%%p方式输出,&*p=%p\n",&*p);
    printf("&*p以%%d方式输出,&*p=%d\n",&*p);



    *p ++;
    printf("*p=%d\n",*p);
    printf("i=%d\n",i);
    i++;
    printf("i=%d\n",i);





    return 0;
}
