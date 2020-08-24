/*
 * @Author: PlanC
 * @Date: 2020-08-20 13:53:50
 * @LastEditTime: 2020-08-24 10:32:26
 * @FilePath: \MyLib\demo\demo.c
 */

#include "../mylib.h"

int main() {
	// alphabet()
	printf("%s\n", alphabet(1, 0));
	// ABCDEFGHIJKLMNOPQRSTUVWXYZ
	printf("%s\n", alphabet(0, 1));
	// zyxwvutsrqponmlkjihgfedcba

	// bubble_sort()
	int i = 0;
	int *p;
	int *q;
	int num1[3] = {1, 3, 2};
	int num2[3] = {4, 6, 5};
	p = bubble_sort(num1, 3, 0);
	q = bubble_sort(num2, 3, 1);
	for (i = 0; i < 3; i++) {
		printf("%d ", *(p + i));
		// 1 2 3
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%d ", *(q + i));
		// 6 5 4
	}
	printf("\n");

	// lengthint()
	printf("%d\n", lengthint(1000));
	// 4

	// max_int() min_int()
	int num[3] = {16, 35, 7};
	printf("%d %d\n", max_int(num, 3), min_int(num, 3));
	// 35 7

	// stoi()
	printf("%d\n", stoi("1001"));
	// 1001(int)

	// itos()
	printf("%s\n", itos(1002));
	// 1002(char*)

	return 0;
}
