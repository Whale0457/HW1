#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i = 0, j = 0, k = 0;
	//
	printf("*********\n");
	for (i = 0; i < 7; i++)
	{
		printf("*       *\n");
	}
	printf("*********\n\n");
	//	

	printf("  ***  \n");
	printf(" *   *  \n");
	for (i = 0; i < 5; i++)
	{
		printf("*     *\n");
	}
	printf(" *   *  \n");
	printf("  ***  \n\n");

	//
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3 - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 6; i++)  printf("  *\n");
	printf("\n");

	//
	for (i = 1; i <= 9; i += 2)
	{
		// 打印前置空格
		for (j = 1; j <= (9 - i) / 2; j++)
		{
			printf(" ");
		}
		// 打印星??框
		printf("*");
		for (j = 1; j <= i - 2; j++)
		{
			printf(" ");
		}
		if (i > 1)
		{
			printf("*");
		}
		// 打印?行
		printf("\n");
	}

	// 打印下半部分
	for (i = 9 - 2; i >= 1; i -= 2)
	{
		// 打印前置空格
		for (j = 1; j <= (9 - i) / 2; j++)
		{
			printf(" ");
		}
		// 打印星??框
		printf("*");
		for (j = 1; j <= i - 2; j++)
		{
			printf(" ");
		}
		if (i > 1)
		{
			printf("*");
		}
		// 打印?行
		printf("\n");
	}



	return 0;
}
