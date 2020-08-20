/*
 * @Author: PlanC
 * @Date: 2020-08-20 13:53:50
 * @LastEditTime: 2020-08-20 14:17:44
 * @FilePath: \MyLib\demo\demo.c
 */

#include "../mylib.h"

int main() {
	int i = 0;
	int *p;
	int *q;
	int num[3] = {16, 35, 7};
	printf("%d %d", Max_int(num), Min_int(num));
	printf("\n");

	int num1[3] = {1, 3, 2};
	int num2[3] = {4, 6, 5};
	p = Bubble_sort(num1, 0);
	q = Bubble_sort(num2, 1);
	for (i = 0; i < 3; i++) {
		printf("%d ", *p++);
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%d ", *q++);
	}
}
