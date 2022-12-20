#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int num1, num2, result, pm, ans;
char artimatic;
int main() {
	srand(time(NULL));
	random();
	printf("%d %c %d = ", num1, artimatic, num2);
	scanf("%d", &ans);
}

void random() {
	int num1 = rand() % 20 + 1;
	int num2 = rand() % 20 + 1;
	int pm = rand() % 4 + 1;
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