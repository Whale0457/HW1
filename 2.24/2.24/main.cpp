#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i = 0;
	int num = 0;
	printf("��J�@��ƧP�_�_��:");
	scanf("%d", &num);
	if (num == 0) printf("������");
	else if (num % 2 == 0) printf("������");
	else if (num % 2 != 0) printf("���_��");

	return 0;
}
