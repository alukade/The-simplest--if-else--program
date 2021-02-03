#include<stdio.h>
int main()
{
	int i;
	printf("请输入你的年龄：");
	scanf_s("%d", &i);
	if (i >= 18)
	{
		printf("你是个成年人了\n");
	}
	else
	{
		printf("你还是为未成年人\n");
	}
	return 0;
}