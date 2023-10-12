#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i = 0, j = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
