#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// void funa(int *x,int *y){
//     int p;
//     p=*x;
//     *x=*y;
//     *y=p;
// }
// #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
//-----------------------------------------------
// int A;
// double t;
// int *P;
// --------------------------------------
// int f(int n){
//     int t=0;
//     int a=5;
//     if(n/2){
//         int a=6;
//         t+=a++;
//     }else{
//         int a=7;t+=a++;
//         printf("int a=%d\n",a);
//     }
//     printf("a=%d\n",a);
//     return t+=a++;
// }
// ---------------------------------------
// int f(int n){
//     static int a=3;
//     n+=a++;
//     return n;
// }
// ---------------------------------------
// void fun(int a,int b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
// }
// --------------------------------
// void fun(char *t,char *s){
//     while(*t!=0) t++;
//     while((*t++=*s++)!=0);
// }
// --------------------------------------
// void f(int x[],int n){
//     if(n>1){
//         printf("%d\n",x[1]);
//     f(&x[1],n-1);
//     }
//     printf("%d",x[0]);
// }

struct {
    int k;
    char s[30];
} a[5]={1,"ABC",2,"abc"},*p=a;
int main(){

    printf("%s\n",*p->s);

// ---------------------------------------------------    
    // char *x="hello";
    // for(int i=0 ;i<strlen(x);i++){
    //     printf("%c\n",x[i]);
    // }
// ----------------------------------------------------
    // int i;
    // i=3,4,5,6;
    // printf("i=%d\n",i);
    // int m=1,n=2;
    // int i=5,a[i];
    // int b[3+3];
    // printf("i=%d\n",i);
    // printf("a[]=%d\n",sizeof(a)/sizeof(int));
    // printf("b[]=%d\n",sizeof(b)/sizeof(int));
    // printf("m=%d\n",m);
// -------------------------------------------------- 
    // int  a;
    // scanf("%d",&a);
    // while(a!=0)
  // {     
    // printf("%d",a%10);
    // a/=10;
  // }
// -------------------------------------------------
    // int i=1;
    // printf("i++: %d\n",i++);
    // printf("++i%d\n",++i);
// -----------------------------------------------
    // int a,b,c;
    // b=(int)1.94;
    // c=4+1.55;
    // a=(int)1.99*3;
    // printf("a=%d,b=%d,c=%d\n",a,b,c);
// -----------------------------------------------
    
    // int i=0;
    // do
    // {    printf("%d\n",i);}
    // while(i++); // 先执行，当出现符合while条件时，退出循环
    // printf("%d\n",i);
// ---------------------------------------------------

    // int a,c;
    // double b;
    // int *p;

    // const int d=5;
    // const int *q=&d;
    // printf("a=%d,,c=%d,b=%f,p=%p\n",a,c,b,p);
    // printf("A=%d,B=%f,P=%p\n",A,B,P);
    // printf("%d\n",*q);
// -----------------------------------------------------    
    // int x[5]={1,2,3,4,5};
    // int *pt=x;
    // printf("*(x+3)=%d\n",*(x+3));
// -------------------------------------------------------
    // double i = 67;
    // printf("%10.0f\n",i);
    // -------------------------------------------------------
    // char *p,*p2,*p1;
    // p2=p=(char*)malloc(sizeof(char)*10);
    // p1=(char*)malloc(sizeof(char)*10);
    // printf("the begin----p--->%p;p2---->%p;p1------>%p\n",p,p2,p1);
    // strcpy(p,"malloc");
    // strcpy(p2,p+1);
    // strcpy(p1,p+1);

    // p2="hello";
    // p="nihao";
    // p="hello";
    // p="malloc";
// p2=p+1;
    // printf("%c%c%c\n",p[0],p2[0],p1[0]);
    // printf("the end-----p--->%p;p2---->%p;p1------>%p\n",p,p2,p1);
    // -------------------------------------------------------------------
    // char a='a';
    // char A='A';
    // printf("'a'-'A'=%d\n",a-A);
    // char A='A';
    // char a='a';
    // for(char i='A';i<='Z';i++){
    //     printf("%c=%d\n",i,i);
    // }

    // for(char i='a';i<='z';i++){
    //     printf("%c=%d\n",i,i);
    // }
    // for(int i=91;i<=96;i++){
    //     printf("%d=%c\n",i,i);
    // }
    // -----------------------------------------------------------------

    // int a[2][3]={{1,2,3},{3,4,5}};
    // int b[3]={10,11,12};
    // int *p[3];
    // int *q;

    // p[0]=a;
    // q=b;
    // printf("p[0]=%p;q[0]=%d\n",p[0],q[0]);
    // printf("a=%p;a[0]=%p;b=%d\n",a,a[0],b[0]);
    // -----------------------------------------------------
    // int s=0,i=0;
    // for(;i<2;i++) s+=f(i);
    // printf("%d\n",s);
    // --------------------------------------------
    // int a=3,s;
    // s=f(a);
    // s+=f(a);
    // printf("%d\n",s);
    // -------------------------------------------
    // int c[10]={1,2,3,4,5,6,7,8,9,0},i;
    // for(i=0;i<10;i+=2) fun(c[i],c[i+1]);
    // for(i=0;i<10;i++) printf("%d,",c[i]); 
    // ---------------------------------------
    // char ss[10]="acc",aa[10]="bbxxyy";
    // fun(ss,aa);
    // printf("%s,%s\n",ss,aa);
    // --------------------------------------------
    // int z[6]={1,2,3,4,5,6};
    // f(z,6);
    // printf("\n");
    // ---------------------------------------------------
    // char a='1';
    // printf("%d\n",a);
    
    // float b=0.0f;
    // b=10/3.0*3;
    // printf("%f\n",b);

    // double a1=1.0;
    // f(a1);
    // -----------------------------------------------------
    // int a[]={1,2,3,4,5,};
    // int *p=a;
    // int *q=&a[5];
    // printf("%d",q-p);
    // -----------------------
    // char s[10]={0};
    // strcpy(s,"abcd");
    // int i=0;
    // putchar(TOUPPER(s[++i]));
    // -----------------------------------------------------
    // int k;
    // for(k=1;k;k++)
    //     printf("%d ",k);
    // int a=1;
    // int b=2;

    // int *p=&a;
    // int *q=&b;
    // // p=&a;
    // // q=&b;
    // funa(p,q);
    // printf("a=%d,b=%d\n",a,b);
    // -------------------------------
    // char c=-1;
    // printf("%d,%c,%hd,%hhd\n",c,c,c);






return 0;

}
// int f(int x){

//     return 0;

// }
