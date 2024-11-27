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

Fraction operator+(const Fraction& fract1, const Fraction& fract2)
{
	//Переменные для числителя и знаменателя дроби-результата и наибольшего общ. делителя
	int main_den, main_num, nod;

	main_den = fract1.denominator * fract2.denominator;
	main_num = ((fract1.numenator * fract2.denominator) + (fract2.numenator * fract1.denominator));

	nod = reduction(main_num, main_den);

	return Fraction(main_num / nod, main_den / nod);
}

Fraction operator-(const Fraction& fract1, const Fraction& fract2)
{
	//Переменные для числителя и знаменателя дроби-результата и наибольшего общ. делителя
	int main_den, main_num, nod;

	main_den = fract1.denominator * fract2.denominator;
	main_num = ((fract1.numenator * fract2.denominator) - (fract2.numenator * fract1.denominator));

	nod = reduction(main_num, main_den);

	return Fraction(main_num / nod, main_den / nod);
}

Fraction operator*(const Fraction& fract1, const Fraction& fract2)
{
	//Переменные для числителя и знаменателя дроби-результата и наибольшего общ. делителя
	int main_den, main_num, nod;

	main_den = fract1.denominator * fract2.denominator;
	main_num = fract1.numenator * fract2.numenator;

	nod = reduction(main_num, main_den);

	return Fraction(main_num / nod, main_den / nod);
}

Fraction operator/(const Fraction& fract1, const Fraction& fract2)
{
	//Переменные для числителя и знаменателя дроби-результата и наибольшего общ. делителя
	int main_den, main_num, nod;

	main_num = fract1.numenator * fract2.denominator;
	main_den = fract1.denominator * fract2.numenator;

	nod = reduction(main_num, main_den);

	return Fraction(main_num / nod, main_den / nod);
}