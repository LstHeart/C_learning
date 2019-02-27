#include<stdio.h>

int main(){

	int price=0;
//	int money=100;
	const int MONEY ;
	printf("请输入消费金额(元):");
	scanf("%d", & price);

	printf("请输入您的可用余额（元）:");
	scanf("%d", & MONEY  );
	int change =MONEY - price;

	printf("找您%d元\n",change);
	
	return 0;
}
