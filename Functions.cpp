#include "Fraction_1.h"
//‘ункци€, вычисл€юща€ наибольший общий делитель
int reduction(int main_num, int main_den)
{
	//—оздание буферных функций дл€ того, чтобы не измен€ть значени€ числител€ и знаменател€
	int buf_num = main_num, buf_den = main_den;

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