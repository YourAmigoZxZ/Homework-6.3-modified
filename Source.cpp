#include "Fraction_1.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Fraction fract;
	Fraction fract_2;
	int num, den, num_2, den_2, user_choice;
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
			cin >> num_2 >> den_2;

			fract_2.set_num(num_2);
			fract_2.set_den(den_2);
			break;
		case PRINT:
			printf("Первая дробь - %d/%d\n", fract.get_num(), fract.get_den());
			printf("Вторая дробь - %d/%d\n", fract_2.get_num(), fract_2.get_den());
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