#include "array.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct{
//     int *array;
//     int size;
// }Array; // 自定义数组结构
const BLOCK_SIZE=20;
Array array_create(int init_size) // 初始化数组
{
    Array a;
    a.size =init_size;
    a.array=(int *)malloc(sizeof(int)*a.size);
    return a;
}
void array_free(Array *a) // 释放数组空间
{
    free(a->array);
    a->array = NULL;
    a->size = 0;
}
int array_size(const Array *a) // 封装，返回数组大小
{
    return a->size;

}
int *array_at(Array *a ,int index) // 返回当前位置
{
    if(index>= a->size){
        array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
    }
    return &(a->array[index]);
}
void array_inflate(Array *a,int more_size) // 数组自动增长
{
    int *p = (int*)malloc(sizeof(int)(a->size+more_size));
    int i;
    for(i=0;i< a->size;i++){
        p[i]=a->array[i];
    }
    free(a->array);
    a-array=p;
    a->size+=more_size;

}

int main(int argc,char const *argv[]){
    Array a = array_create(100);
    printf("数组大小:%d\n",array_size(&a));
    *array_at(&a,0) = 10;
    printf("在index所在位置的数值:%d\n",*array_at(&a,0));
    int number=0;
    int cnt=0;
    while(number != -1){
        scanf("%d",&number);
        if(number!=-1)
            *array_at(&a,cnt++)= number:
    }



    array_free(&a);
    return 0;
}
