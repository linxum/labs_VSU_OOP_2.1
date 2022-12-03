#include <iostream>
#include "Pair.h"
#include "Complex.h"
#include <WIndows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Pair a, b, c;
	Complex x, y, z;
	bool flag = true;
	while (flag)
	{
		bool menu = true;
		while (menu)
		{
			char mode;
			std::cout << "Выберите режим работы программы: 1 - с парой чисел, 2 - с комплексными числами ";
			std::cin >> mode;
			switch (mode)
			{
			default:
				std::cout << "Неверный ввод!" << std::endl;
				menu = true;
				break;
			case '1':
				std::cout << "Введите первую пару целых чисел: ";
				std::cin >> a;
				char choice1;
				std::cout << "Выберите действие для пары чисел: + - * / = ";
				std::cin >> choice1;
				std::cout << "Введите вторую пару целых чисел: ";
				std::cin >> b;
				switch (choice1)
				{
				default:
					std::cout << "Неверный ввод!" << std::endl;
					break;
				case '+':
					c = *(a + b);
					std::cout << "Результат: " << c;
					break;
				case '-':
					c = *(a - b);
					std::cout << "Результат: " << c;
					break;
				case '*':
					c = *(a * b);
					std::cout << "Результат: " << c;
					break;
				case '/':
					c = *(a / b);
					std::cout << "Результат: " << c;
					break;
				case '=':
					std::cout << "Результат: " << (a = b);
					break;
				}
				menu = false;
				break;
			case '2':
				std::cout << "Введите первое комплексное число: ";
				std::cin >> x;

				char choice2;
				std::cout << "Выберите действие для комплекных чисел: + - * / = ";
				std::cin >> choice2;
				std::cout << "Введите второе комплексное число: ";
				std::cin >> y;
				switch (choice2)
				{
				default:
					std::cout << "Неверный ввод!" << std::endl;
					break;
				case '+':
					z = *(x + y);
					std::cout << "Результат: " << z;
					break;
				case '-':
					z = *(x - y);
					std::cout << "Результат: " << z;
					break;
				case '*':
					z = *(x * y);
					std::cout << "Результат: " << z;
					break;
				case '/':
					z = *(x / y);
					std::cout << "Результат: " << z;
					break;
				case '=':
					std::cout << "Результат: " << (x = y);
					break;
				}
				menu = false;
				break;
			}
		}


		char choice;
		bool label = true;
		while (label)
		{
			std::cout << "Желаете начать заново или выйти? 1 - заново, 2 - выйти ";
			std::cin >> choice;
			switch (choice)
			{
			default:
				std::cout << "Неверный ввод!" << std::endl;
				label = true;
				break;
			case '1':
				flag = true;
				label = false;
				break;
			case '2':
				flag = false;
				label = false;
				break;
			}
		}
	}
}
