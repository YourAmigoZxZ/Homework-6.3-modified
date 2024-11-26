#pragma once
#include <iostream>

using namespace std;

int reduction(int& main_num, int& main_den);

class Fraction
{
private:
	int numenator, denominator;
public:
	Fraction()
	{
		numenator = 0;
		denominator = 1;
	}
	Fraction(int num_p, int den_p)
	{
		numenator = num_p;
		denominator = den_p;
	}
	void set_num(int num_p)
	{
		numenator = num_p;
	}
	int get_num() const
	{
		return numenator;
	}
	void set_den(int den_p);
	int get_den() const
	{
		return denominator;
	}

	void sum(int num_2, int den_2);
	void difference(int num_2, int den_2);
	void multiplication(int num_2, int den_2);
	void division(int num_2, int den_2);

	friend Fraction operator+(const Fraction& fract1, const Fraction& fract2)
	{
		int main_den, main_num, nod;

		main_den = fract1.denominator * fract2.denominator;
		main_num = ((fract1.numenator * fract2.denominator) + (fract2.numenator * fract1.denominator));

		nod = reduction(main_num, main_den);

		return Fraction(main_num / nod, main_den / nod);
	}

	friend Fraction operator-(const Fraction& fract1, const Fraction& fract2)
	{
		int main_den, main_num, nod;

		main_den = fract1.denominator * fract2.denominator;
		main_num = ((fract1.numenator * fract2.denominator) - (fract2.numenator * fract1.denominator));

		nod = reduction(main_num, main_den);

		return Fraction(main_num / nod, main_den / nod);
	}

	friend Fraction operator*(const Fraction& fract1, const Fraction& fract2)
	{
		int main_den, main_num, nod;

		main_den = fract1.denominator * fract2.denominator;
		main_num = fract1.numenator * fract2.numenator;

		nod = reduction(main_num, main_den);

		return Fraction(main_num / nod, main_den / nod);
	}

	friend Fraction operator/(const Fraction& fract1, const Fraction& fract2)
	{
		int main_den, main_num, nod, swapper_num2 = fract2.denominator;

		swap(fract2.numenator, fract2.denominator);

		main_num = fract1.numenator * fract2.numenator;
		main_den = fract1.denominator * fract2.denominator;

		nod = reduction(main_num, main_den);

		return Fraction(main_num / nod, main_den / nod);
	}
};