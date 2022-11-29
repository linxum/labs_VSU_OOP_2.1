#include <iostream>
#include "Money.h"
#include "Bankomat.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool flag = true;
	while (flag)
	{
		double mind;
		double maxd;
		int id;
		double lastd;
		double cashd;;
		
		cout << "Введите идентификатор банкомата: " << std::endl;
		cin >> id;
		cout << "Введите минимум и максимум денег для снятия и наличия в банкомате: " << std::endl;
		cin >> mind >> maxd;
		cout << "Введите оставшиеся деньги в банкомате: " << std::endl;
		cin >> lastd;

		Money min = mind;
		Money max = maxd;
		Money last = lastd;
		Bankomat bank(id, last, min, max);
		cout << bank << endl;

		cout << "Введите сумму " << endl;
		cin >> cashd;
		Money cash = cashd;
		
		char action;
		bool label1 = true;
		while (label1)
		{
			cout << "Что вы хотите сделать? 1 - снять деньги, 2 - пополнить счет " << endl;
			cin >> action;
			switch (action)
			{
			default:
				std::cout << "Неверный ввод!" << std::endl;
				label1 = true;
				break;
			case '1':
				bank.CutMoney(cashd);
				label1 = false;
				break;
			case '2':
				bank.LoadMoney(cash);
				label1 = false;
				break;
			}
		}

		cout << bank << endl;
		char choice;
		bool label2 = true;
		while (label2)
		{
			std::cout << "Желаете начать заново или выйти? 1 - заново, 2 - выйти ";
			std::cin >> choice;
			switch (choice)
			{
			default:
				std::cout << "Неверный ввод!" << std::endl;
				label2 = true;
				break;
			case '1':
				flag = true;
				label2 = false;
				break;
			case '2':
				flag = false;
				label2 = false;
				break;
			}
		}
	}
}
