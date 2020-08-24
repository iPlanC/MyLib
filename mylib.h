/*
 * @Author: PlanC
 * @Date: 2020-06-10 12:27:23
 * @LastEditTime: 2020-08-24 09:46:33
 * @FilePath: \MyLib\mylib.h
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BOOL	int
#define TRUE	1
#define FALSE	0

char*	alphabet	(BOOL bigger, BOOL reverse);
int*	bubble_sort	(int *values, int length, BOOL reverse);
int		lengthint	(int number);
int		max_int		(int *values, int length);
int		min_int		(int *values, int length);
int		stoi		(char *str);
char* 	itos		(int number);
char*	toUpper		(char *str);
char*	toLower		(char *str);

char* alphabet(BOOL bigger, BOOL reverse) {
	int i = 0;
	int j = 0;
	int temp = 0;
	char start = 'A';
	char *str = (char*)malloc(26 * sizeof(char));
	if (bigger == FALSE) {
		start = 'a';
	}
	for (i = 0; i < 26; i++) {
		str[j++] = (char)(i + start);
	}
	str[j++] = '\0';
	if (reverse == FALSE) {
		return str;
	}
	else {
		for (i = 0; i <= strlen(str) / 2; i++) {
			temp = str[i];
			str[i] = str[strlen(str) - i - 1];
			str[strlen(str) - i - 1] = temp;
		}
		return str;
	}
}

int* bubble_sort(int *values,int length, BOOL reverse) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i <= length - 1; i++) {
		for (j = 0; j <= length - i - 1; j++) {
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
		for (i = 0; i <= length / 2; i++) {
			temp = values[i];
			values[i] = values[length - i];
			values[length - i] = temp;
		}
		return values;
	}
}

int lengthint(int number) {
	int count = 0;
	while ((number/=10) != 0) count++;
	return ++count;
}

int max_int(int *values, int length) {
	int i = 0;
	int temp_max = values[0];
	for (i = 0; i <= length; i++) {
		if (temp_max < values[i]) temp_max = values[i];
	}
	return temp_max;
}

int min_int(int *values, int length) {
	int i = 0;
	int temp_min = values[0];
	for (i = 0; i <= length; i++) {
		if (temp_min > values[i]) temp_min = values[i];
	}
	return temp_min;
}

int stoi(char *str) {
	int i = 0;
	int number = 0;
	for (i = 0; i < strlen(str); i++) {
		if (isdigit(str[i])) {
			number = number * 10 + (str[i] - '0');
		}
	}
	if (str[0] == '-') {
		return -number;
	}
	else {
		return number;
	}
}

char* itos(int number) {
	int i = 0;
	int j = 0;
	int temp = 0;
	int length = lengthint(number);
	char *str = (char*)malloc(length * sizeof(char) + 1);
	if (number < 0) str[i++] = '-';
	do {
		str[i++] = number % 10 + '0';

	} while (number/=10);
	for (j = 0; j <= strlen(str) / 2; j++) {
		temp = str[j];
		str[j] = str[strlen(str) - j - 1];
		str[strlen(str) - j - 1] = temp;
	}
	str[i++] = '\0';
	return str;
}

char* toUpper(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - 32;
		}
	}
	return str;
}

char* toLower(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i] + 32;
		}
	}
	return str;
}
