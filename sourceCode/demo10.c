/*
 * @Author: lstheart
 * @LastEditors: lstheart
 * @Description: file content
 * @Date: 2019-02-28 15:36:24
 * @LastEditTime: 2019-02-28 15:36:25
 */
#include<stdio.h>

int main(){
	int now=0; //现在时间eg:1106
	int min=0; // 消逝的时间分钟

	scanf("%d %d",&now,&min);

	int future=now/100*60+now%100;
	future=(future+min)/60*100+(future+min)%60;
	printf("%d\n",future);

return 0;
}
