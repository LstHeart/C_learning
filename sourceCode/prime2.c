#include<stdio.h>
//输出前50个素数【只能被1和自己整除】

int main(){

    int x;
    int cnt=0;
    for( x = 1;cnt<50;x++ ){    
        int r = 1;
        for(int i=2;i<x;i++){
            if(x%i==0){
                r=0;
                break;
            }
        }
        if (r==1){
            printf("%d\t",x);
            cnt++;
            if(cnt%5==0){
                printf("\n");
            }
        }
    }

    return 0;
}
