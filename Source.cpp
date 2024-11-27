#include "Fraction_1.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Fraction fract;
	Fraction fract_2;
	//���������� ��� ���������, ����������� � ������ ������������ � ����
	int num, den, user_choice;
	enum Menu {EXIT = 0, INITIALIZATION, PRINT, SUM, DIFFERENCE, MULTIPLICATION, DIVISION};

	do
	{
		system("cls");
		cout << "\n1.������ ��������� � ����������� ��� ������\n2.������� ����� �� �����\n3.����� ������\n4.�������� ������\n5.������������ ������\n6.������� ������\n0.�����\n";
		cin >> user_choice;

		switch (user_choice)
		{
		case INITIALIZATION:
			system("cls");
			cout << "������� ��������� � ����������� ��� ������ �����: ";
			cin >> num >> den;

			fract.set_num(num);
			fract.set_den(den);

			cout << "������� ��������� � ����������� ��� ������ �����: ";
			cin >> num >> den;

			fract_2.set_num(num);
			fract_2.set_den(den);
			break;
		case PRINT:
			cout << "������ �����: " << fract << "\n";
			cout << "������ �����: " << fract_2 << "\n";
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