#pragma once
#include <iostream>

using namespace std;

int reduction(int main_num, int main_den);

class Fraction
{
private:
	int numenator, denominator;
public:
	//Конструкторы
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
	//Модификаторы
	void set_num(int num_p)
	{
		numenator = num_p;
	}
	void set_den(int den_p);
	//Аксессоры
	int get_num() const
	{
		return numenator;
	}
	int get_den() const
	{
		return denominator;
	}
	//Перегрузки операторов
	friend Fraction operator+(const Fraction& fract1, const Fraction& fract2);
	friend Fraction operator-(const Fraction& fract1, const Fraction& fract2);
	friend Fraction operator*(const Fraction& fract1, const Fraction& fract2);
	friend Fraction operator/(const Fraction& fract1, const Fraction& fract2);
	//Оператор вывода пергружен не по заданию для удобства
	friend ostream& operator<<(ostream& cout, const Fraction& fract)
	{
		cout << fract.numenator << '/' << fract.denominator;
		return cout;
	}
};