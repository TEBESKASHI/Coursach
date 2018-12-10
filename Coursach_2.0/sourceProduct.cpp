#include "Header.h"

//добавить продукт в список
void Product::add() {
	cout << "Введите название товара: ";
	strcpy(this->ProductName, onlystring(30));
	cout << "Введите код товара: ";
	this->ProductCode = onlyint();
	cout << "Введите стоимость товара: ";
	this->ProductCost = onlyint();
}

//вывод спсика продуктов в табличном виде
void Product::print(int a) {
	if (a == 1) {
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
		cout << "| Название товара |" << " Код товара |" << " Стоимость |" << endl;
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
	}
	if (a == 2) {
		cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
	}
	if (a == 3) {
		cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
		cout << "```````````````````" << "`````````````" << "````````````" << endl;
	}
	}


//выбор критерия для поиска продукта
int Product::selectSearchCriteria() {
	int choice;
	cout << "По чем будем искать, голум?" << endl;
	cout << "1.По названию товара" << endl;
	cout << "2.По коду товара" << endl;
	cout << "3.По стоимости товара" << endl;
	choice = onlyint();
	return choice;
}

//функция поиска продукта
void Product::search(int a,int choice, char *input) {
	if (a == 1) {
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
		cout << "| Название товара |" << " Код товара |" << " Стоимость |" << endl;
		cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
	}
	if (a == 2) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->ProductName, input) == 0) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
			}
			break;
		}
		case 2: {
			int inputInteger = atoi(input);
			if (this->ProductCode == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->ProductCost == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "|`````````````````|" << "````````````|" << "```````````|" << endl;
			}
			break;
		}
		}
	}
	if (a == 3) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->ProductName, input) == 0) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "```````````````````" << "`````````````" << "````````````" << endl;
			}
			break;
		}
		case 2: {
			int inputInteger = atoi(input);
			if (this->ProductCode == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "```````````````````" << "`````````````" << "````````````" << endl;
			}
			break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->ProductCost == inputInteger) {
				cout << "|" << setw(17) << this->ProductName << "|" << setw(12) << this->ProductCode << "|" << setw(11) << this->ProductCost << "|" << endl;
				cout << "```````````````````" << "`````````````" << "````````````" << endl;
			}
			break;
		}
		}
	}
}

//выбор критерия для редактирования
int Product::selectEditCriteria() {
	int choice;
	cout << "Что будем редактировать, простак?" << endl;
	cout << "1.Название товара: "  << endl;
	cout << "2.Код товара" << endl;
	cout << "3.Стоимость товара: "  << endl;
	cout << "4.Вcе" << endl;
	choice = onlyint();
	return choice;
}

//функция редактирования данных
void Product::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "Редактируемый товар: " << this->ProductName << endl;
		cout << "Новое название товара: ";
		strcpy(this->ProductName, onlystring(30));
		break;
	}
	case 2: {
		cout << "Редактируемый код товара: " << this->ProductCode << endl;
		cout << "Новый код товара: ";
		this->ProductCode = onlyint();
		break;
	}
	case 3:
	{
		cout << "Редактируемая цена товара: " << this->ProductCost << endl;
		cout << "Новая цена товара: ";
		this->ProductCost = onlyint();
		break;
	}
	case 4: {
		cout << "Редактируемый товар: " << this->ProductName << endl;
		cout << "Новое название товара: ";
		strcpy(this->ProductName, onlystring(30));
		cout << "Редактируемый код товара: " << this->ProductCode << endl;
		cout << "Новый код товара: ";
		this->ProductCode = onlyint();
		cout << "Редактируемая цена товара: " << this->ProductCost << endl;
		cout << "Новая цена товара: ";
		this->ProductCost = onlyint();
		break;
	}
	}
}