#pragma once
#include<iostream>
#include<string>

struct Tree {
	std::string fruit;		// наименование фрукта
	int fruits_number;		// кол-во плодов на дереве
	int fruits;				// цена за один фрукт
};
// Функция по выводу объекта в консоль:
void print_tree(const Tree A);
// Функция по расчету стоимости всех фруктов на дереве:
int full_price(const Tree A);
// Функция по расчету стоимости всех оставшихся фруктов на дереве с учетом сбора:
int collect(Tree& A, int num);