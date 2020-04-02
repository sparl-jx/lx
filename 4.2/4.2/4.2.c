#define _CTR_SECURE_NO_WARNINGS 1
NumberOf1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret=NumberOf1(num);
	printf("%d\n", ret);
	return 0;
}




int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}




int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
	printf("\n");
	return 0;
}