#include<stdio.h>
#define STRING "helleh"
#include <string.h>
void comp(const char *s);
int main(){

    char *s=STRING;
    comp(s);

    return 0;
}

void comp(const char *s){
    
    const char *s1=s;
    int n=strlen(s);
printf("字符串长度为%d(不含最后结束符)\n",n);

    char s2[n+1];
    s2[n]='\0';
    for(int i=n-1;i>=0;i--){
        s2[n-i-1]=*(s+i);
        printf("i=%d---",i);
        printf("%c\n",*(s+i));
    }
    if(!strcmp(s1,s2)){
        printf("%s是回文\n",s);
    }else{
        printf("%s不是回文\n",s);
    }
}
