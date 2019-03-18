#include<stdio.h>

int main(int argc,char const *argv[]){

    printf("%s:%d\n",__FILE__,__LINE__);
    printf("%s,%s\n",__DATE__,__TIME__);
    printf("你好\n");
    return 0;
}
