﻿#include<iostream>
#include "Tree.hpp"

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	// Создадим несколько объектов и инициализируем их:
	Tree apple{ "Яблоко", 100, 10 };
	Tree pear{ "Груша", 50, 15 };
	Tree banana{ "Банан", 80, 5 };
	Tree orange{ "Апельсин", 70, 20 };
	Tree peach{ "Персик", 30, 25 };

	// Вывод в консоль объектов:
	std::cout << "Вывод на экран всех фруктов:\n";
	print_tree(apple);
	std::cout << "-------------------\n";
	print_tree(pear);
	std::cout << "-------------------\n";
	print_tree(banana);
	std::cout << "-------------------\n";
	print_tree(orange);
	std::cout << "-------------------\n";
	print_tree(peach);
	std::cout << "-------------------\n\n";

	// Вывод стоимости фруктов:
	std::cout << "Вывод стоимости фруктов:\n";
	std::cout << "Стоимость фруктов - " << apple.fruit << 
		", равна " << full_price(apple) << " руб.\n";
	std::cout << "Стоимость фруктов - " << pear.fruit <<
		", равна " << full_price(pear) << " руб.\n";
	std::cout << "Стоимость фруктов - " << banana.fruit <<
		", равна " << full_price(banana) << " руб.\n";
	std::cout << "Стоимость фруктов - " << orange.fruit <<
		", равна " << full_price(orange) << " руб.\n";
	std::cout << "Стоимость фруктов - " << peach.fruit <<
		", равна " << full_price(peach) << " руб.\n";
	std::cout << "-------------------\n\n";

	// Ввод числа, на которое снижается количество плодов на дереве
	// и вывод стоимости оставшихся на дереве фруктов:
	std::cout << "Вывод стоимости оставшихся фруктов на дереве:\n";
	std::cout << "Фруктовое дерево - " << apple.fruit << '\n';
	std::cout << "Введите число, на которое снижается количество плодов на дереве -> ";
	std::cin >> n;
	if (collect(apple, n) == -1)
		std::cout << "Недостаточно фруктов на дереве!\n";
	else
		std::cout << "Стоимость оставшихся фруктов на дереве после сбора равна " << full_price(apple) << " руб.\n";
	std::cout << "-------------------\n";
	std::cout << "Фруктовое дерево - " << pear.fruit << '\n';
	std::cout << "Введите число, на которое снижается количество плодов на дереве -> ";
	std::cin >> n;
	if (collect(pear, n) == -1)
		std::cout << "Недостаточно фруктов на дереве!\n";
	else
		std::cout << "Стоимость оставшихся фруктов на дереве после сбора равна " << full_price(pear) << " руб.\n";
	std::cout << "-------------------\n";
	std::cout << "Фруктовое дерево - " << banana.fruit << '\n';
	std::cout << "Введите число, на которое снижается количество плодов на дереве -> ";
	std::cin >> n;
	if (collect(banana, n) == -1)
		std::cout << "Недостаточно фруктов на дереве!\n";
	else
		std::cout << "Стоимость оставшихся фруктов на дереве после сбора равна " << full_price(banana) << " руб.\n";
	std::cout << "-------------------\n";
	std::cout << "Фруктовое дерево - " << orange.fruit << '\n';
	std::cout << "Введите число, на которое снижается количество плодов на дереве -> ";
	std::cin >> n;
	if (collect(orange, n) == -1)
		std::cout << "Недостаточно фруктов на дереве!\n";
	else
		std::cout << "Стоимость оставшихся фруктов на дереве после сбора равна " << full_price(orange) << " руб.\n";
	std::cout << "-------------------\n";
	std::cout << "Фруктовое дерево - " << peach.fruit << '\n';
	std::cout << "Введите число, на которое снижается количество плодов на дереве -> ";
	std::cin >> n;
	if (collect(peach, n) == -1)
		std::cout << "Недостаточно фруктов на дереве!\n";
	else
		std::cout << "Стоимость оставшихся фруктов на дереве после сбора равна " << full_price(peach) << " руб.\n";
	std::cout << "-------------------\n";

	return 0;
}