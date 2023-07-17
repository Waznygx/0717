#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	/*printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr+1));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));*/
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 1));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	return 0;
//}

int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p = a[0];
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/
	printf("%d", p[0]);
	return 0;
}