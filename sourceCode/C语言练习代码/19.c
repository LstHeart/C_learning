#include<stdio.h>

int fun(int m);
int main(){

    int m;
    printf("please input m=");

    scanf("%d",&m);

    int sum=fun(m);
    printf("%d\n",sum);

    return 0;
}

int fun(int m){
    
    int sum=3;

    if(m>2){
      for(int i=2;i<m;m--){  
      int flag=2;
        for(int i=2;i<m;i++){
            if(m%i) {
                flag++;
                continue; 
            }
          }

          if(flag==m) sum+=m;
        }
    }else if(m==1){
        sum=1;
    }else if(m<=0){
        sum=-1;
    }
    return sum;
}
