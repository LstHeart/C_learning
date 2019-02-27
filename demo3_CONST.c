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
