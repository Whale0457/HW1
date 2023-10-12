#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int k = 0;//總里程數 
	int money = 0;//汽油價錢 
	int ave = 0;//一公升汽油平均行駛里數 
	int fee = 0;//停車費 
	int toll = 0;//過路費 
	int total = 0;//總花費
	printf("輸入一整天的總里程數:");
	scanf("%d", &k);
	printf("輸入汽油一公升/加侖多少錢:");
	scanf("%d", &money);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf("%d", &ave);
	printf("一天的停車費:");
	scanf("%d", &fee);
	printf("一天的通行費(過路費):");
	scanf("%d", &toll);
	total = (k / ave)*money + fee + toll;
	printf("一天開車所需費用=%d元", total);


	return 0;
}
