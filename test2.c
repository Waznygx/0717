#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcdef";
	/*printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+1));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));*/
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 1));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	return 0;
}