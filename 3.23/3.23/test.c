#define _CTR_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("�ҵ��ˣ��±���%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("�Ҳ���\n");
	}
		return 0;
}



int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 4;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}



#include<windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!!!!";
	char arr2[] = "######################";
	int len = strlen(arr1);
	int left = 0;
	int right =len-1 ;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(200);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}




#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������");
		scanf("%s", password);    
		if (0 == strcmp(password, "123456"))
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("������������˳�\n");
	}
	return 0;
}





#include<stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("**** 1.play  0.exit  ****\n");
	printf("*************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100+1;
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				printf("������\n");
				break;
			case 0:
				printf("�˳�\n");
				break;
			default:
				printf("����\n");
				break;
		}
	} while (input);
	return 0;
}






#include<stdlib.h>
#include<string.h>
int main()
{
	char input[100] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ĵ��Խ���1�����ڹػ������룺123����ȡ���ػ�");
	printf("������");
	scanf("%s", input);
	if (0==strcmp(input, "123"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		return 0;
}



int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}




int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}
	printf("sum=%f\n", sum);
	return 0;
}




int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}




int main()
{
	int i = 0;
	for (i = 1; i <=9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d",i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}