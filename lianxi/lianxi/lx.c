#define _CTR_SECURE_NO_WARNINGS 1
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age < 30 && age >= 18)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 90)
//		printf("����");
//	else
//		printf("�ϲ���");
//	return 0;
//}



//
//int main()
//{
//	int a = 0;
//	printf("������һ����\n");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("��������\n");
//	else
//		printf("������\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("�������\n");
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
//			printf("���������%d\n", min);
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
//	printf("����������");
//	scanf("%s", input);
//	printf("��ȷ�����루Y/N)");
//	getchar();
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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



