#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "rus");
	int sum;
	/* Подсчитать результат */
	sum=25+37-19;
	/* Отобразить результат */

	printf("The answer is %i\n",sum);
	return 0;
}