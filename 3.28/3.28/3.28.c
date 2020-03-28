#define _CTR_SECURE_NO_WARNINGS 1

int my_strlen(char*str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "bit";
		int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}



int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d", ret);
	return 0;
}

int my_add(int n)
{
	if (n > 9)
		return my_add(n / 10) + n % 10;
	else
		return n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = my_add(n);
	printf("%d\n", ret);
	return 0;
}


int Fib(n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = Fib(i);
	printf("%d\n", ret);
}


void BubbleSort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void Print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	BubbleSort(arr, sz);
	Print(arr, sz);
	return 0;
}
