/*
 * @Author: lstheart
 * @LastEditors: lstheart
 * @Description: file content
 * @Date: 2019-02-28 13:32:59
 * @LastEditTime: 2019-02-28 13:33:01
 */
#include<stdio.h>

int main(){

	int price=0;
//	int money=100;
	const int money =100;
	printf("请输入消费金额(元):");
	scanf("%d", & price);

	int change =money - price;

	printf("您的可用余额有%d元\n",money);
	printf("找您%d元\n",change);
	
	return 0;
}