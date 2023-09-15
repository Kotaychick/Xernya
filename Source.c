/*﻿ Напишите программу, которая находит все значения base^exp (base в степени exp), которые не выходят за пределы значений типа int.

base и exp - целочисленные переменные.
Для вашего варианта, значение exp = 7.
Возможные значения base^exp, удовлетворяющие заданному условию, требуется установить самостоятельно. Обратите внимание, что они могут быть как положительными так и отрицательными.

В данной лабораторной работе запрещено использовать вещественные типы переменных (в том числе и библиотекой <math.h>).

Выходной поток должен содержать найденные значения разделенные пробелом. Значения не должны повторяться. Порядок не важен.

Пример:
0 1 -1 128 -128 2187 -2187 ...*/
#include <stdio.h>

int pow(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}

int main()
{
	int exp = 7; int c = 1;

	for (int i = 0; c < 2147483648; i++)
	{
		if(i == 0)
		{
			printf("%d ", pow(i, exp));
		}
		else
		{
			c = pow(i, exp);
			printf("%d ", pow(i, exp));
			int j = i - (i + i);
			printf("%d ", pow(j, exp));
		}
	}
	return 0;
}
