#include <stdio.h>
int main()
{
	int n = 0;
	do
	{
		puts("1�������������");
		puts("2���������");
		puts("3��ɾ������");
		puts("4���޸�����");
		puts("0���˳�����");
		puts("=============");
		puts("��ѡ��");
		scanf_s("%d", &n);
		if (n == 0)
			puts("��ѡ�����˳�����");
		else if (n == 1)
			puts("��ѡ���������������");
		else if (n == 2)
			puts("��ѡ�����������");
		else if (n == 3)
			puts("��ѡ����ɾ������");
		else if (n == 4)
			puts("��ѡ�����޸�����");
		else
			puts("����������ݲ��Ϸ���");

	} while (n!=0);

	return 0;
}