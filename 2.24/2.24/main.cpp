#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i = 0;
	int num = 0;
	printf("块俱计耞案:");
	scanf("%d", &num);
	if (num == 0) printf("案计");
	else if (num % 2 == 0) printf("案计");
	else if (num % 2 != 0) printf("计");

	return 0;
}
