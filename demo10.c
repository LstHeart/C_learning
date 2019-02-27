#includt<stdio.h>

int main(){
	int now=0; //现在时间eg:1106
	int min=0; // 消逝的时间分钟

	scanf("%d %d",&now,&min);

	int future=now/100*60+now%100;
	future=(future+min)/60*100+(future+min)%60;
	printf("%d\n",future);

return 0;
}
