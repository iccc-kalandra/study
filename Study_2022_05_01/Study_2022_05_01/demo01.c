#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针存放字符串
//int main()
//{
//	//*arr1中只是存放了字符串首元素的地址
//	//并且"spider"是常量不可修改
//	char* arr1 = "spider";
//	//将's'改为'j' --> err
//	//*arr1 = 'j';
//	printf("%c", *arr1);//s
//	printf("%s", arr1);//spdier
//
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------

//指针数组
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[] = { a,b,c };
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", *(arr[i] + j));
//	//	}
//	//	printf("\n");
//	//}
//			//printf("%d ", arr[0][1]);
//
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------


//数组指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa)+i));
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------

//void print(int (*start)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(start + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------



//void my_print(int* pa, int n)
//{
//	//int i = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	printf("%d ", *pa);
//	//	pa++;
//	//}
//	while (n--)
//	{
//		printf("%d ", *pa++);
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	my_print(arr, ret);
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------


//输出一个菱形
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < n ; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < (2*n-(2*i+1)); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------


//重新排序数组，让奇数都排在前半部分，偶数排在后半部分
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------


//打印杨辉三角形
/*
		  1
		 1 1
		1 2 1
	   1 3 3 1
	  1 4 6 4 1
	 1 5 10 10 5 1
	1 6 15 20 15 6 1
   1 7 21 35 35 21 7 1
  1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1
*/
int main()
{
	int arr[10][10] = {0};
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	int n = 0;
	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10-i; n++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
































