#include<stdio.h>

int main(){

    char str[80],ch;
    int i,k=0;
    fgets(str,sizeof(str),stdin);
    ch=getchar();

    for(i=0;str[i]!='\0';i++)
        if(str[i]!=ch){
            str[k]=str[i];
            k++;
        }
    str[k]='\0';
    puts(str);
    return 0;
}
