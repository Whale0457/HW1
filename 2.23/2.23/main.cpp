#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3];
	int i = 0, j = 0;
	int temp = 0;
	printf("叫块俱计:");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	/*	for(i=0;i<3;i++)
		{
			printf("%d",a[i]);
		}*/
	printf("程计:%d\n", a[0]);
	printf("程计:%d\n", a[2]);

	return 0;
}
