#define _CRT_SECURE_NO_WARNINGS
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

//void menu()
//{
//	printf("\n*****************************\n");
//	printf("*********  0.exit ***********\n");
//	printf("*********  1.add  ***********\n");
//	printf("*********  2.sub  ***********\n");
//	printf("*********  3.mul  ***********\n");
//	printf("*********  4.div  ***********\n");
//	printf("*****************************\n");
//}int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*p[5])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请输入你的选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入你要计算的两个数字：");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", (*p[input])(a, b));
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("error\n");
//		}
//	} while (input);
//	return 0;
//}
//void begin(char* x)
//{
//	printf("%s\n", x);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("begin") ;
//}
//int main()
//{
//	test(begin);
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
struct Stu
{
	int sno;
	char sname[20];
	char class[100];
};
int cmp_struct_sname(const void* p1,const void* p2)
{
	return strcmp(((struct Stu*)p1)->sname, ((struct Stu*)p2)->sname);
}
void test3()
{
	struct Stu s[3] = { {1,"wlw","first"},{2,"dx","second"},{3,"zdhzdh","third"}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_sname);
	int i = 0;
	printf("\n结构体struct排序：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i]);
	}
	printf("\n");
}
int cmp_float(const void* p1, const void* p2)
{
	//return (int)(*(float*)p1 - *(float*)p2);//这个方法会出现排序错乱的情况
	if (*(float*)p1 > *(float*)p2)
		return 1;
	else if (*(float*)p1 == *(float*)p2)
		return 0;
	else
		return -1;
}
void test2()
{
	float f[] = { 6.6,2.4,5.5,1.1,9.4,3.4,1.0,8.8,6.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	printf("\n数组float排序：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}
int cmp_int(const void* p1,const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void test1()
{
	int arr[] = { 3,6,1,22,63,85,9,25,36,11,12,15,62,44,99 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	printf("数组int排序：\n");
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}