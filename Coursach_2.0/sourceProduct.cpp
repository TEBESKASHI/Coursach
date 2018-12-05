#include "Header.h"
void Product::add() {
	cout << "Введите название товара: ";
	cin >> this->ProductName;
	cout << "Введите код товара: ";
	cin >> this->ProductCode;
	cout << "Введите стоимость товара: ";
	cin >> this->ProductCost;
}
void Product::print() {
	cout << "Название товара: " << this->ProductName << endl;
	cout << "Введите код товара: " << this->ProductCode << endl;
	cout << "Стоимость товара: " << this->ProductCost << endl;
}
int Product::selectSearchCriteria() {
	int choice;
	cout << "По чем будем искать, голум?" << endl;
	cout << "1.По названию товара" << endl;
	cout << "2.По коду товара" << endl;
	cout << "3.По стоимости товара" << endl;
	cin >> choice;
	return choice;
}
void Product::search(int choice, char *input) {
	switch (choice) {
	case 1:
	{
		if (strcmp(this->ProductName, input) == 0) {
			print();
		}
		break;
	}
	case 2: {
		int inputInteger = atoi(input);
		if (this->ProductCode == inputInteger) {
			print();
		}
		break;
	}
	case 3:
	{
		int inputInteger = atoi(input);
		if (this->ProductCost == inputInteger) {
			print();
		}
		break;
	}
	}
}
int Product::selectEditCriteria() {
	int choice;
	cout << "Что будем редактировать, простак?" << endl;
	cout << "1.Название товара: "  << endl;
	cout << "2.Код товара" << endl;
	cout << "3.Стоимость товара: "  << endl;
	cout << "4.Вcе" << endl;
	cin >> choice;
	return choice;
}
void Product::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемый товар: " << this->ProductName << endl;
		cin >> this->ProductName;
		break;
	}
	case 2: {
		cout << "Редактируемый код товара: " << this->ProductCode << endl;
		cin >> this->ProductCode;
		break;
	}
	case 3:
	{
		cout << "Редактируемая цена товара: " << this->ProductCost << endl;
		cin >> this->ProductCost;
		break;
	}
	case 4: {
		cout << "Редактируемый товар: " << this->ProductName << endl;
		cin >> this->ProductName;
		cout << "Редактируемый код товара: " << this->ProductCode << endl;
		cin >> this->ProductCode;
		cout << "Редактируемая цена товара: " << this->ProductCost << endl;
		cin >> this->ProductCost;
		break;
	}
	}
}