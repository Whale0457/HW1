#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int k = 0;//�`���{�� 
	int money = 0;//�T�o���� 
	int ave = 0;//�@���ɨT�o������p���� 
	int fee = 0;//�����O 
	int toll = 0;//�L���O 
	int total = 0;//�`��O
	printf("��J�@��Ѫ��`���{��:");
	scanf("%d", &k);
	printf("��J�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%d", &money);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf("%d", &ave);
	printf("�@�Ѫ������O:");
	scanf("%d", &fee);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf("%d", &toll);
	total = (k / ave)*money + fee + toll;
	printf("�@�Ѷ}���һݶO��=%d��", total);


	return 0;
}
