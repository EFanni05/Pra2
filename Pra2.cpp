#define _CRT_SECURE_NO_WARNINGS
#define ARRAYLENGHT 10
#include <stdio.h>
#include <math.h>

int Bigger(int num1, int num2) {
	if (num1 < num2)
	{
		return num2;
	}
	else if(num2 < num1)
	{
		return num1;
	}
	return num1;
}

int BiggestInFour(int numbers[4]) {
	int numA = Bigger(numbers[0], numbers[1]);
	int numB = Bigger(numbers[2], numbers[3]);
	return Bigger(numA, numB);
}

int BiggestInArray(int array[ARRAYLENGHT]) {
	int indBiggest = 0;
	for (int i = 1; i < ARRAYLENGHT; i++)
	{
		if (array[indBiggest] < array[i]) {
			indBiggest = i;
		}
	}
	return indBiggest;
}

float Abs(float num1, float num2) {
	return (num1 - num2);
}

int BetweenZeroAndHundred() {
	int num;
	do
	{
		printf("Write a number");
		scanf("%d", num);
	} while (!(num >= 0 && num <= 100));
	return num;
}

void WriteNums(int start, int end, int step) {
	int ind = 0;
	int finished = 0;
	do
	{
		int a = start + (ind * step);
		if (a > end)
		{
			finished = 1;
		}
		else
		{
			printf("%d\t", a);
		}
	} while (finished != 0);
}

char CharOrder(char string1[], char string2[]) {
	if (string1[0] < string2[0])
	{
		return 1;
	}
	else if (string1[0] > string2[0]) {
		return -1;
	}
	return 0;
}

int main()
{
    return 0;
}