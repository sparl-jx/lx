#define _CTR_SECURE_NO_WARNINGS 1
Swap(int a, int b)
{
	a =a ^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
}
int main()
{
	int a = 2;
	int b = 3;
	printf("a=%d b=%d\n", a, b);
	Swap(a, b);
	return 0;
}



int main()
{
	int arr[32];
	int x = 0, i = 0, count = 0;
	scanf("%d", &x);
	for (i = 0; x != 0; i++)
	{
		arr[i] = x % 2;
		x = x / 2;
		count = i;
	}
	count ++;
	for (; count<32; count++)
	{
		arr[count] = 0;
	}
	printf("奇数位:\n");
	for (i = 31; i >= 0; i = i - 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("偶数位：\n");
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}