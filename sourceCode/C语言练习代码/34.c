#include<stdio.h>

int main(){
    int i,j,m,s,k,a[100];
    for(i=1;i<=1000;i++)
    {
        m=i;
        s=0;
        k=0;
        for(j=1;j<m;j++)
            if(m%j==0)
            {
                s=s+j;
                a[k++]=j;
            }
        if(s!=0&&s==m)
        {
            for(j=0;j<k;j++)
                printf("%4d",a[j]);
            printf(" =%4d\n",i);
        }

    }

    return 0;
}
