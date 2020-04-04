#define _CTR_SECURE_NO_WARNINGS 1
int QiShui(int n)
{
	static int flag = 0;
	if (2 * n + flag < 2)
	{
		return 0;
	}
	if (n % 2 == 0)
	{
		return n + QiShui(n / 2);
	}
	else if (n % 2 == 1 && flag == 0)
	{
		flag = 1;
		return n + QiShui(n / 2);
	}
	else if (n % 2 == 1 && flag == 1)
	{
		flag = 0;
		return n + QiShui(n / 2 + 1);
	}
}
int main()
{
	int money = 20;
	int num = 0;
	num = QiShui(money);
	printf("¿ÉÒÔÂò %d Æ¿ÆûË®\n", num);
	return 0;
}
