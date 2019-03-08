/*
 * @Author: lstheart
 * @LastEditors: lstheart
 * @Description: file content
 * @Date: 2019-03-02 00:51:22
 * @LastEditTime: 2019-03-02 00:56:12
 */
#include<stdio.h>

void sub(char *a,char b){
    while(*(a++)!='\0');

    while(*(a-1)<b)
    *(a--)=*(a-1);
    *(a--)=b;
}
int main(){
    char s[10]="612",c='3';
    sub(s,c);
    puts(s);

    return 0;
}

