#include "Fraction_1.h"

int reduction(int& main_num, int& main_den)
{
	int buf_num = main_num, buf_den = main_den, nod;

	while (buf_num != buf_den)
	{
		if (buf_num > buf_den)
		{
			buf_num = buf_num - buf_den;
		}
		else
		{
			buf_den = buf_den - buf_num;
		}
	}

	return buf_den;
}