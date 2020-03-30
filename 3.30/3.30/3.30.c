#define _CTR_SECURE_NO_WARNINGS 1
int my_count(int n)
{
	int count = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = my_count(i);
	printf("%d", ret);
	return 0;
}