#include "Tree.hpp"

void print_tree(const Tree A) {
	std::cout << "Наименование фрукта - " << A.fruit << '\n';
	std::cout << "Количество плодов на дереве - " << A.fruits_number << " шт.\n";
	std::cout << "Стоимость одного фрукта - " << A.fruits << " руб.\n";
};
int full_price(const Tree A){
	return A.fruits_number*A.fruits;
};
int collect(Tree& A, int num) {
	if (A.fruits_number < num)
		return -1;
	else
		A.fruits_number -= num;
	return A.fruits_number * A.fruits;
};
