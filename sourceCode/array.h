#ifndef _ARRAY_H
#define _ARRAY_H

typedef struct{
    int *array;
    int size;
}Array; // 自定义数组结构

Array array_create(int init_size); // 初始化数组
void array_free(Array *a); // 释放数组空间
int array_size(const Array *a); // 返回数组大小
int *array_at(Array *a ,int index); // 返回当前位置
void array_inflate(Array *a,int more_size); // 数组自动增长

#endif
