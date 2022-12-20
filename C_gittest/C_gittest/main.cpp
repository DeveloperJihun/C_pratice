#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int num1, num2, result, pm, ans, correct_cnt;
char artimatic;
void random();
int main() {
	correct_cnt = 1;
	srand(time(NULL));
	while (correct_cnt<10) {

		random();
		printf("[%d/10] %d %c %d = ",correct_cnt, num1, artimatic, num2);
		scanf("%d", &ans);
		if (ans == result) {
			printf("Correct!\n");
			correct_cnt++;
		}
		else {
			printf("Wrong! Answer is %d\n", result);
		}

	}
}

void random() {
	num1 = rand() % 20 + 1;
	num2 = rand() % 20 + 1;
	pm = rand() % 4 + 1;
	switch (pm) {
	case 1:
		result = num1 + num2;
		artimatic = '+';
		break;

	case 2:
		result = num1 - num2;
		artimatic = '-';
		break;

	case 3:
		result = num1 * num2;
		artimatic = 'x';
		break;

	case 4:
		result = num1 / num2;
		artimatic = '/';
		break;
	}
}