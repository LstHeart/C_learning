#include<stdio.h>

int main(){

	int height;

	scanf("%d",&height);

int foot = height/30.48;//英尺数
int	inch = height*12/30.48-foot*12;//英寸数
	printf("%d %d",foot,inch);

return 0;

}
