#define _CTR_SECURE_NO_WARNINGS 1

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
}



int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));

}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
		{
			printf("%d\n", year);
		}
	}

	return 0;
}




void Swap(int*pa, int*pb)
{
	int t = 0;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
int main()
{
	int a = 1;
	int b = 2;
	printf("a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

