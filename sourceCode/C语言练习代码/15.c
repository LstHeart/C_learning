#include<stdio.h>
// 输入n个数，从小到大排序
// 读入n个数，1用数组A记录每一次读入的数；
// 2数组中的数两两比较，一次得到一个最大值/最小值，放入数组B
// 3重复n次；
// 4遍历输出新的数组B
#include<stdlib.h>

int main(){

    int n;
    const int BLOCK=30;// 每一次动态新增空间大小
    int block=BLOCK;
    int cnt=0; // 计数判断是否越界需要重新分配
    int *a,*b;
    a=(int*)calloc(BLOCK,sizeof(int)); // 动态分配初始占10个int的数组a
    b=(int*)calloc(BLOCK,sizeof(int)); // 动态分配初始占10个int的数组b

    // for(int i=0;i<BLOCK;i++) a[i]=0; // 不需要初始化calloc函数自动初始化了，但malloc不会。init array
    // for(int i=0;i<BLOCK;i++) b[i]=0;

    printf("请输入若干整数以-1表示输入完成.\n");
    printf("such as 1,2,3,4,5,6,-1\n");
    scanf("%d,",&n);
    printf("-----1------\n");
    for(int i=0;n!=-1;i++){
        if(n==','||n==' ') continue;
        cnt++;
        // printf("cnt=%d\n",cnt);
        if(cnt>block) {
           block+=BLOCK;
               // printf("a的地址为%p\n",a);
           int *a1=(int*)realloc(a,block*sizeof(int));
           int *b1=(int*)realloc(b,block*sizeof(int));
               // printf("a1的地址为%p\n",a1);
           if(a1!=a) {
               a=a1;
               free(a1);
           }
           if(b1!=b) {
               b=b1;
               free(b1);}
           // printf("---block=%d---\n",block);
            // if(realloc(b,block+=BLOCK/2)) printf("ERROR！动态分配失败！");
        }
        a[i]=n;
        // printf("a[%d]=%d\t",i,a[i]);
        // printf("\n");
        scanf("%d,",&n);
    }
    
    // for(int i=0;i<cnt;i++){
    //     printf("a[%d]=%d\n",i,a[i]);
    // }
    // printf("cnt=%d\n",cnt);
    // printf("---2----\n");
        int max=a[0];
        int flag=0;
    for(int j=cnt;j>0;j--){
        int min=a[cnt-j];
        // printf("-j=%d\n",j);
        for(int i=1;i<j;i++){
            
            if(a[cnt-j+i]<min){
                min=a[cnt-j+i];
                flag=cnt-j+i;
                int temp=a[cnt-j];
                a[cnt-j]=a[flag];
                a[flag]=temp;
            }else if(a[cnt-j+i]>=max){
                max=a[cnt-j+i];
            }
            // printf("i=%d,j=%d,a[%d]=%d,min=%d,flag=%d,max=%d\n",i,j,(cnt-j+i),a[cnt-j+i],min,flag,max);
        }
        // printf("-----------------------------\n");
        b[cnt-j]=min;

        b[cnt-1]=max;

    }
    printf("----3------\n");
    
    for (int i=0;i<cnt;i++) printf("b[%d]=%d\n",i,b[i]);
    
    free(a);
    free(b);
    
    
    return 0;
}

