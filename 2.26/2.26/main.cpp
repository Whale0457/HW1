#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1 = 0, num2 = 0;
	printf("��J��Ӿ��:");
	scanf("%d %d", &num1, &num2);
	if (num1%num2 == 0)  printf("%d��%d������", num1, num2);
	else printf("%d����%d������", num1, num2);

	return 0;
}
