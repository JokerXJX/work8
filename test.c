#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	double high = 0;
//	double sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &high);
//		sum += high;
//	}
//	printf("%.2f\n", sum / 5);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i+1; j++)
//			{
//				printf("%d ", j + 1);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int score = 0;
//	int max = 100;
//	int min = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int cut = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &cut);
//	for (i = n; i > 0; i--)
//	{
//		if (arr[i - 1] > cut)
//		{
//			arr[i] = arr[i - 1];
//		}
//		else
//		{
//			arr[i] = cut;
//			break;
//		}
//	}
//	if (i == 0)
//	{
//		arr[i] = cut;
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int arr[30];
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//						arr[j] = 0;
//			}
//		}
//			int count = 0;
//			for (i = 2; i <= n; i++)
//			{
//				if (arr[i] != 0)
//					printf("%d ", arr[i]);
//				else
//					count++;
//			}
//			printf("\n%d\n", count);
//	}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a[100][100] = { 0 }, b[100][100] = { 0 };
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int count = 0.0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] == b[i][j])
//				count++;
//		}
//	}
//	printf("%.2f\n", 100.0 * count / (m * n));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = {0};
//	char arr2[20] = {0};
//	scanf("%s%s", &arr1,&arr2);
//	if (strcmp(arr1, "admin") == 0 && strcmp(arr2, "admin") == 0)
//		printf("Login Success!\n");
//	else
//		printf("Login Fail!\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (int i = 1; i < 2020; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		else if (i /10 % 10 == 9)
//			count++;
//		else if (i /100 % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int even = 0;
	int odd = 0;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 1)
			odd++;
	}
	printf("%d %d\n", odd, n - odd);

	return 0;
}