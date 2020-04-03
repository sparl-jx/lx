#define _CTR_SECURE_NO_WARNINGS 1
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int*p = arr;
	printf("%d", *(p + i));
	return 0;
}



void reverse_string(char*str)
{
	char tmp = str[0];
	int len = strlen(str);
	str[0] = str[len - 1];
	str[len - 1] = '\0';
	if (strlen(str + 1) >= 2)
		reverse_string(str + 1);
	str[len - 1] = tmp;
}

int main()
{
	char arr[] = "I am a student";
		reverse_string(arr);
		printf("%s\n", arr);
		return 0;
}




int main()
{
	int i = 0;
	int m = 0;
	int Sn = 0;
	int tmp = 0;
		scanf("%d", &m);
	for (i = 1; i <= 5; i++)
	{
		tmp = tmp * 10 + m;			
		Sn += tmp;							
	}
	printf("Sn=%d\n", Sn);
	return 0;
}