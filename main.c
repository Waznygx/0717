//#include<stdio.h>
//struct Day
//{
//	int id;
//	char weekday[20];
//	char weekend[20];
//};
//void swap(char* p1, char* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		int temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//	}
//}
//void maopaopaixu(void* base, int length, int size, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < length - 1; i++)
//	{
//		for (j = 0; j < length - 1 - i; j++)
//		
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int cmp_struct(const void* p1, const void* p2)
//{
//	return ((struct Day*)p1)->id - ((struct Day*)p2)->id;
//}
//void jiegouti()
//{
//	struct Day d[] = {{6,"mon","five"},{2,"tue","two"},{3,"wed","three"}};
//	int length = sizeof(d) / sizeof(d[0]);
//	maopaopaixu(d, length, sizeof(d[0]), cmp_struct);
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void shuzu()
//{
//	int arr[] = { 1,2,3,77,4,24,33,17,85,35 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	maopaopaixu(arr, length, sizeof(int), cmp_int);
//	int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	shuzu();
//	jiegouti();
//	return 0;
//}