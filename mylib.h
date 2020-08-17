/*
 * @Author: PlanC
 * @Date: 2020-06-10 12:27:23
 * @LastEditTime: 2020-08-17 10:39:01
 * @FilePath: \3dShowc:\Users\planc\Desktop\mylib\MyLib\mylib.h
 */
#include <stdio.h>
#include <string.h>
#include <system.h>

#define BOOL	int
#define TRUE	1
#define FALSE	0

char*	Alphabet	(BOOL bigger, BOOL reverse);
int*	Bubble_sort	(int values[], BOOL reverse);
int		Max_int		(int values[]);
int		Min_int		(int values[]);
void    ToUpper		(char *str);
void	ToLower		(char *str);

char* Alphabet(BOOL bigger, BOOL reverse) {
	int i = 0;
	int temp = 0;
	char start = 'A';
	char* str = (char*)malloc(26 * sizeof(char));
	if (bigger == TFALSE) {
		start = 'a';
	}
	for (i = 0; i < 26; i++) {
		strcat(str, (char)i);
	}
	if (reverse == FALSE) {
		return str;
	}
	else {
		for (i = 0; i <= sizeof(str) / sizeof(char) / 2; i++) {
			temp = str[i];
			str[i] = str[sizeof(str) / sizeof(char) - i];
			str[sizeof(str) / sizeof(char) - i] = temp;
		}
		return str;
	}
}

int* Bubble_sort(int values[], BOOL reverse) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i <= sizeof(values) / sizeof(int) - 1; i++) {
		for (j = 0; j <= sizeof(values) / sizeof(int) - i - 1; j++) {
			if (values[j] > values[j + 1]) {
				temp = values[j];
				values[j] = values[j + 1];
				values[j + 1] = temp;
			}
		}
	}
	if (reverse == FALSE) {
		return values;
	}
	else {
		for (i = 0; i <= sizeof(values) / sizeof(int) / 2; i++) {
			temp = values[i];
			values[i] = values[sizeof(values) / sizeof(int) - i];
			values[sizeof(values) / sizeof(int) - i] = temp;
		}
		return values;
	}
}

int Max_int(int values[]) {
	int i = 0;
	int temp_max = values[0];
	for (i = 0; i <= sizeof(values) / sizeof(int); i++) {
		if (temp_max < values[i]) temp_max = values[i];
	}
	return temp_max;
}

int Min_int(int values[]) {
	int i = 0;
	int temp_min = values[0];
	for (i = 0; i <= sizeof(values) / sizeof(int); i++) {
		if (temp_min > values[i]) temp_min = values[i];
	}
	return temp_min;
}

void ToUpper(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - 32;
		}
	}
}

void ToLower(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i] + 32;
		}
	}
}
