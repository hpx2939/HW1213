#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));

	int counter[11] = { 0 };
	int i;
	for (i = 0; i <= 36000; i++){
		int j1 = rand() % 6 + 1;
		int j2 = rand() % 6 + 1;
		int sum = j1 + j2;
		counter[sum - 2]++;

	}
	for (i = 2; i <= 12; i++)
		printf("骰子出現%2d點 : %4d 次\n", i, counter[i - 2]);
	system("pause");
	return 0;
}