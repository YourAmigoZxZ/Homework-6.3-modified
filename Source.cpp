#include "Fraction_1.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Fraction fract;
	Fraction fract_2;
	//Переменные для числителя, знаменателя и выбора пользователя в меню
	int num, den, user_choice;
	enum Menu {EXIT = 0, INITIALIZATION, PRINT, SUM, DIFFERENCE, MULTIPLICATION, DIVISION};

	do
	{
		system("cls");
		cout << "\n1.Ввести числители и знаменатели для дробей\n2.Вывести дроби на экран\n3.Сумма дробей\n4.Разность дробей\n5.Произведение дробей\n6.Частное дробей\n0.Выход\n";
		cin >> user_choice;

		switch (user_choice)
		{
		case INITIALIZATION:
			system("cls");
			cout << "Введите числитель и знаменатель для первой дроби: ";
			cin >> num >> den;

			fract.set_num(num);
			fract.set_den(den);

			cout << "Введите числитель и знаменатель для второй дроби: ";
			cin >> num >> den;

			fract_2.set_num(num);
			fract_2.set_den(den);
			break;
		case PRINT:
			cout << "Первая дробь: " << fract << "\n";
			cout << "Вторая дробь: " << fract_2 << "\n";
			system("pause");
			break;
		case SUM:
			cout << fract + fract_2 << '\n';
			system("pause");
			break;
		case DIFFERENCE:
			cout << fract - fract_2 << '\n';
			system("pause");
			break;
		case MULTIPLICATION:
			cout << fract * fract_2 << '\n';
			system("pause");
			break;
		case DIVISION:
			cout << fract / fract_2 << '\n';
			system("pause");
			break;
		case EXIT:
			break;
		}
	} while (user_choice != 0);

	return 0;
}