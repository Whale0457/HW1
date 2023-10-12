#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1 = 0, num2 = 0;
	printf("輸入兩個整數:");
	scanf("%d %d", &num1, &num2);
	if (num1%num2 == 0)  printf("%d為%d的倍數", num1, num2);
	else printf("%d不為%d的倍數", num1, num2);

	return 0;
}
