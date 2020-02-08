#include <stdio.h>
int main()
{
	int n = 0;
	do
	{
		puts("1、浏览所有数据");
		puts("2、添加数据");
		puts("3、删除数据");
		puts("4、修改数据");
		puts("0、退出数据");
		puts("=============");
		puts("请选择：");
		scanf_s("%d", &n);
		if (n == 0)
			puts("你选择了退出程序");
		else if (n == 1)
			puts("你选择了浏览所有数据");
		else if (n == 2)
			puts("你选择了添加数据");
		else if (n == 3)
			puts("你选择了删除数据");
		else if (n == 4)
			puts("你选择了修改数据");
		else
			puts("你输入的内容不合法！");

	} while (n!=0);

	return 0;
}