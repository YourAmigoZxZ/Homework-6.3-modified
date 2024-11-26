#include "Fraction_1.h"

void Fraction::set_den(int den_p)
{
	if (den_p == 0)
	{
		cout << "Знаменатель не может быть равен нулю. Знаменатель будет приравнен к 1\n";
		denominator = 1;
		system("pause");
	}
	else
	{
		denominator = den_p;
	}
}

//void Fraction::sum(int num_2, int den_2)
//{
//	int main_den, main_num, nod;
//
//	main_den = denominator * den_2;
//	main_num = ((numenator * den_2) + (num_2 * denominator));
//
//	nod = reduction(main_num, main_den);
//	printf("Сумма дробей равна %d/%d\n", main_num / nod, main_den / nod);
//	system("pause");
//}

//void Fraction::difference(int num_2, int den_2)
//{
//	int main_den, main_num, nod;
//
//	main_den = denominator * den_2;
//	main_num = ((numenator * den_2) - (num_2 * denominator));
//
//	nod = reduction(main_num, main_den);
//	printf("Разность дробей равна %d/%d\n", main_num / nod, main_den / nod);
//	system("pause");
//}

//void Fraction::multiplication(int num_2, int den_2)
//{
//	int main_den, main_num, nod;
//
//	main_den = denominator * den_2;
//	main_num = numenator * num_2;
//
//	nod = reduction(main_num, main_den);
//	printf("Произведение дробей равно %d/%d\n", main_num / nod, main_den / nod);
//	system("pause");
//}

//void Fraction::division(int num_2, int den_2)
//{
//	int main_den, main_num, nod, buf;
//
//	buf = num_2;
//	num_2 = den_2;
//	den_2 = buf;
//	main_num = numenator * num_2;
//	main_den = denominator * den_2;
//
//	nod = reduction(main_num, main_den);
//	printf("Частное дробей равно %d/%d\n", main_num / nod, main_den / nod);
//	system("pause");
//}