#define _CTR_SECURE_NO_WARNINGS 1
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age < 30 && age >= 18)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年");
//	else
//		printf("老不死");
//	return 0;
//}



//
//int main()
//{
//	int a = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("不是奇数\n");
//	else
//		printf("是奇数\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100;i++)
//	{
//	if (i % 2 == 1)
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//			break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0; 
//}



//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	if (i % 3 == 0)
//		printf("%d\n", i);
//	return 0;
//}


//
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int min = (m > n) ? (n) : (m);
//	while (1)
//	{
//		if (m % min == 0 && n%min == 0)
//		{
//			printf("最大公因数是%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}



//
//int main()
//{
//	int ch = 0;
//	while (ch = getchar()!= EOF);
//	{
//		putchar(ch);
//	}
//	return 0;
//
//}


//
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码");
//	scanf("%s", input);
//	printf("请确认密码（Y/N)");
//	getchar();
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//
//int main()
//{
//	for (;;)
//	{
//		printf("hehe");
//	}
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	while (i < 10);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//
//	while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}
//	printf("%d", ret);
//	return 0;
//}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		for (i = 1; i <= n; i++)
		{
			ret = ret*i;
		}
		sum=sum+ret
	}
	
	printf("%d\n", sum);
	return 0;
}



