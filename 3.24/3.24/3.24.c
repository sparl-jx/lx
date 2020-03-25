#define _CTR_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[20] = "##########";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;

}



int main()
{
	char arr[] = "hello,bit";
	memset(arr,'*',5);
	printf("%s\n", arr);
	return 0;
}



get_max(int x, int y)
{
	return(x > y ? x : y);
}
int main()
{
	int a = 10;
	int b = 20;
	int max=get_max(a,b);
	printf("%d\n", max);
	return 0;
}



void Swap2(int*pa, int*pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}




int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n;i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200 ; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}




int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
	
}
int main()
{
	int year = 0;
	int count=0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year)==1)
		{
			count++;
			printf("%d\n", year);
			printf("%d\n", count);
		}
	}

	return 0;
}


void Add(int*p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}



int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}



int Add(int x,int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}

int Add(int x, int y)
{
	int z = x + y;
	return z;
}