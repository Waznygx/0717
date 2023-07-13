#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//}
//int main()
//{
//	/*int arr[10] = { 0 };
//	test(arr);
//	return 0;*/
//	char arr[] = "ab";
//	char* pstr = arr;
//	//const char* pstr = "hello";
//	printf("%s\n", pstr);
//	printf("%c\n", *pstr);
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	char* p1 = "abcd";
//	char* p = "abcd";
//	/*if (arr1 == arr2)
//	{
//		printf("arr1 = arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	if (p1 == p2)
//	{
//		printf("p1 = p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}*/
//	printf("%p\n", arr1);
//	printf("%p\n", arr2);
//	printf("%p\n", p1);
//	printf("%p\n", p);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int arr3[] = { 7,8,9 };
//	int* arr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			printf("%d", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void print_arr2(int(*p)[5], int hang, int lie)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < hang; i++)
//	{
//		for ( j = 0; j < lie; j++)
//		{
//			//printf("%d ", p[i][j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr1(int arr[][5], int hang, int lie)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//void test(int* arr[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = add;
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}

//char* my_strcpy(char* dest, char* src);
//int main()
//{
//	char* (*pf)(char*, const char*);
//	char* (*pfarr[4])(char*, const char*);
//	return 0;
//}

